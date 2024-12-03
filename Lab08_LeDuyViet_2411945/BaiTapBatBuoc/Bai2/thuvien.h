#define MAX 100
struct PhanSo
{
	int tu;
	int mau;
};

typedef PhanSo MangPS[MAX];

void NhapPS(PhanSo& phanSo)
{
	cout << endl << "Nhap tu so ";
	cin >> phanSo.tu;
	do
	{
		cout << endl << "Nhap mau so ";
		cin >> phanSo.mau;
	} while (phanSo.mau == 0);
}

void NhapMangPS(MangPS m, int n)
{
	for (int i = 0; i < n; i++)
		NhapPS(m[i]);
}

void XuatPS(PhanSo phanSo)
{
	cout << phanSo.tu << '/' << phanSo.mau << " , ";
}

void XuatMangPS(MangPS m, int n)
{
	for (int i = 0; i < n; i++)
		XuatPS(m[i]);
}

float Solve(MangPS m, int vt)
{
	return (float)m[vt].tu / m[vt].mau;
}

void XuatSolve(MangPS m, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl << m[i].tu << "/" << m[i].mau << " = " << (float)m[i].tu / m[i].mau;
	}
}

int PosMax(MangPS m, int n)
{
	int vt = 0;
	float max = 0.0;
	for (int i = 0; i < n; i++)
	{
		if ((float)m[i].tu / m[i].mau > max)
		{
			vt = i + 1;
			max = (float)m[i].tu / m[i].mau;
		}
	}
	return vt;
}

float Max(MangPS m, int n)
{
	float max = 0.0;
	for (int i = 0; i < n; i++)
	{
		if ((float)m[i].tu / m[i].mau > max)
		{
			max = (float)m[i].tu / m[i].mau;
		}
	}
	return max;
}

void TimMax(MangPS m, int n)
{
	for (int i = 0; i < n; i++)
		if ((float)m[i].tu / m[i].mau == Max(m, n))
			cout << m[i].tu << '/' << m[i].mau << " , ";
}

int TimUCLN(int n, int m)
{
	int max = (n > m) ? n : m, ucln = 1;
	for (int i = 1; i < sqrt(max); i++)
	{
		if (n / i == 0 && m / i == 0 && i > ucln)
			ucln = i;
	}
	return ucln;
}

void RutGonPS(MangPS m, int n, int vt)
{
	int tu = m[vt].tu, mau = m[vt].mau;
	m[vt].tu /= TimUCLN(tu, mau);
	m[vt].mau /= TimUCLN(tu, mau);
	cout << m[vt].tu << '/' << m[vt].mau;
}

void XuatToiGian(MangPS m, int n)
{
	for (int i = 0; i < n; i++)
	{
		int tu = m[i].tu, mau = m[i].mau;
		m[i].tu /= TimUCLN(tu, mau);
		m[i].mau /= TimUCLN(tu, mau);
	}
	XuatMangPS(m, n);
}

void SwapStr(PhanSo sv1, PhanSo sv2)
{
	PhanSo sv3 = sv1;
	sv1 = sv2;
	sv2 = sv3;
}

void SapXepTangDan(MangPS m, int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if ((float)m[i].tu / m[i].mau > (float)m[j].tu / m[j].mau)
				SwapStr(m[i], m[j]);
}

void TimPSBangNhau(MangPS m, int n, int tu, int mau)
{
	float s = (float)tu / mau;
	for (int i = 0; i < n; i++)
	{
		if ((float)m[i].tu / m[i].mau == s)
			cout << m[i].tu << '/' << m[i].mau << " , ";
	}
}

void FindZero(MangPS m, int n)
{
	for (int i = 0; i < n; i++)
		if (m[i].tu == 0)
			cout << m[i].tu << '/' << m[i].mau << " , ";
}

int CantConvert(MangPS m, int n)
{
	int res = 0;
	for (int i = 0; i < n; i++)
		if (m[i].tu == 0)
			res += 1;
	return res;
}

void NghichDao(MangPS m, int n)
{
	for (int i = 0; i < n; i++)
		if (m[i].tu != 0)
			cout << m[i].mau << '/' << m[i].tu << " , ";
}

void DinhDangPS(MangPS m, int n)
{
	for (int i = 0; i < n; i++)
	{
		if ((m[i].tu > 0 && m[i].mau < 0) || (m[i].tu < 0 && m[i].mau < 0))
		{
			m[i].tu = -m[i].tu;
			m[i].mau = -m[i].mau;
		}
	}
}

float TinhTongGT(MangPS m, int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += (float)m[i].tu / m[i].mau;
	}
	return sum;
}

