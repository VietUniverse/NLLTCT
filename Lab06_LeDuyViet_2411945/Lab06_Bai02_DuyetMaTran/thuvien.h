#define SIZE 50
#define MAX 1000
#define TAB '\t'

typedef int MaTran[SIZE][SIZE];

void NhapMang(MaTran a, int m, int n);
void NhapTuDong(MaTran a, int m, int n);
void XuatMang(MaTran a, int m, int n);
int TongHang(MaTran a, int n, int i);
int TichCot(MaTran a, int m, int j);


void NhapMang(MaTran a, int m, int n)
{
	for (int i = 0; i < m;i++)
	{
		cout << endl << "Dong thu : " << i << endl;
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << " , " << j << "] = ";

			cin >> a[i][j];
		}
	}
}

void NhapTuDong(MaTran a, int m, int n)
{
	srand(time(NULL));
	for (int i = 0;i < m;i++)
	{
		for (int j = 0; j < n;j++)
		{
			a[i][j] = rand() % MAX - MAX / 2;
		}
	}
}

void XuatMang(MaTran a, int m, int n)
{
	cout << endl << "Cac phan tu cua ma tran : " << endl;
	for (int i = 0;i < m;i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << TAB;
		}
		cout << endl;
	}
	cout << endl << endl;
}

int TongHang(MaTran a, int n, int i)
{
	int sum = 0;
	for (int j = 0;j < n;j++)
	{
		sum += a[i][j];
	}
	return sum;
}

int TichCot(MaTran a, int m, int j)
{
	int prod = 1;
	for (int i = 0; i < m; i++)
	{
		prod *= a[i][j];
	}
	return prod;
}

int MaxHang(MaTran a, int n, int i)
{
	int max = a[i][0];
	for (int j = 1; j < n; j++)
	{
		if (max < a[i][j])
			max = a[i][j];
	}
	return max;
}

int MinCot(MaTran a, int m, int j)
{
	int min = a[0][j];
	for (int i = 1; i < m; i++)
	{
		if (min > a[i][j])
			min = a[i][j];
	}
	return min;
}

void MaxHangMinCot(MaTran a, int n, int m)
{
	int hang[SIZE], cot[SIZE], dem = 0;
	for (int i = 0; i < m; i++)
		hang[i] = MaxHang(a, n, i);
	for (int j = 0; j < n; j++)
		cot[j] = MinCot(a, m, j);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == hang[i] && a[i][j] == cot[j])
			{
				cout << endl << "a[" << i << " , " << j << "] = " << a[i][j];
				dem++;
			}
		}
	}
	if (dem == 0)
		cout << endl << "Khong co phan tu thoa dieu kien";
	else
		cout << endl << "Co tat ca " << dem << " phan tu thoa dieu kien";
	cout << endl;
}

void XuatVungDuongCheo(MaTran a, int m, int n)
{
	if (abs(m - n) <= 1)
	{
		cout << endl << "Khong co phan tu thoa DK";
		return;
	}
	int dem, duoi = min(m, n), tren = (m, n) - 2;
	for (int i = 0; i < m; i++)
	{
		dem = 0;
		for (int j = 0; j < n; j++)
		{
			if (i + j >= duoi && i + j <= tren)
			{
				cout << a[i][j] << TAB;
				dem++;
			}
			if (dem > 0)
				cout << endl;
		}
	}
}



