#define MAX 100

struct SinhVien
{
	int id;
	string hotenlot;
	string name;
	char gender;
	float point;
	string clss;
};

typedef SinhVien DanhSachSinhVien[MAX];

void NhapSinhVien(SinhVien& sinhVien);
void NhapDanhSachSinhVien(DanhSachSinhVien ds, int soLuongSV);
void XuatSinhVien(SinhVien sinhVien);
void XuatDanhSachSinhVien(DanhSachSinhVien ds, int soLuongSV);
void XuatTieuDe();
void SwapStr(SinhVien sv1, SinhVien sv2);
void SapGiamTB(DanhSachSinhVien ds, int n);
void SapTangDanTen(DanhSachSinhVien ds, int n);
void TimSVByName(DanhSachSinhVien ds, int n, string name);
void XuatDSLop(DanhSachSinhVien ds, int n, string clss);
void XuatDuoiTB(DanhSachSinhVien ds, int n);
void TimSVById(DanhSachSinhVien ds, int n, int id);
float AverageBest(DanhSachSinhVien ds, int n);
int GenderDeviation(DanhSachSinhVien ds, int n);
float Max(DanhSachSinhVien ds, int n);
void XuatSVBest(DanhSachSinhVien ds, int n);

void NhapSinhVien(SinhVien& sinhVien)
{
	cout << endl << "Nhap MSSV: ";
	cin >> sinhVien.id;
	cout << endl << "Nhap ho va ten lot: ";
	cin.ignore(1);
	getline(cin,sinhVien.hotenlot);
	cout << endl << "Nhap ten: ";
	cin.ignore(1);
	getline(cin, sinhVien.name);
	cout << endl << "Nhap gioi tinh: ";
	cin >> sinhVien.gender;
	cout << endl << "Nhap diem trung binh: ";
	cin >> sinhVien.point;
	cout << endl << "Nhap lop: ";
	cin.ignore(1);
	getline(cin, sinhVien.clss);
}

void NhapDanhSachSinhVien(DanhSachSinhVien ds, int soLuongSV)
{
	for (int i = 0; i < soLuongSV; i++)
		NhapSinhVien(ds[i]);
}

void XuatSinhVien(SinhVien sinhVien)
{
	cout << endl << setiosflags(ios::left)
		<< setw(10) << sinhVien.id
		<< setw(20) << sinhVien.hotenlot
		<< setw(10) << sinhVien.name
		<< setw(12) << sinhVien.gender
		<< setw(10) << sinhVien.point
		<< setw(10) << sinhVien.clss;
}

void XuatDanhSachSinhVien(DanhSachSinhVien ds, int soLuongSV)
{
	XuatTieuDe();
	for (int i = 0; i < soLuongSV; i++)
		XuatSinhVien(ds[i]);
}

void XuatTieuDe()
{
	cout << endl << setiosflags(ios::left)
		<< setw(10) << "MSSV"
		<< setw(20) << "Ho ten lot"
		<< setw(10) << "Ten"
		<< setw(12) << "Gioi tinh"
		<< setw(10) << "Diem TB"
		<< setw(10) << "Lop";
	cout << endl << setiosflags(ios::left)
		<< setw(10) << "======="
		<< setw(20) << "================"
		<< setw(10) << "======="
		<< setw(12) << "========="
		<< setw(10) << "======="
		<< setw(10) << "=======";
}

void SwapStr(SinhVien sv1, SinhVien sv2)
{
	SinhVien sv3 = sv1;
	sv1 = sv2;
	sv2 = sv3;
}

void SapGiamTB(DanhSachSinhVien ds, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (ds[i].point < ds[j].point)
				SwapStr(ds[i], ds[j]);
		}
	}
}

void SapTangDanTen(DanhSachSinhVien ds, int n)
{
	for (int i = 0; i < n - 1;i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (ds[i].name > ds[j].name)
				SwapStr(ds[i], ds[j]);
			if (ds[i].name == ds[j].name)
				if (ds[i].hotenlot > ds[i].hotenlot)
					SwapStr(ds[i], ds[j]);
		}
	}
}

void TimSVByName(DanhSachSinhVien ds, int n, string name)
{
	XuatTieuDe();
	for (int i = 0; i < n; i++)
	{
		if (ds[i].name == name)
			XuatSinhVien(ds[i]);
	}
}

void XuatDSLop(DanhSachSinhVien ds, int n, string clss)
{
	XuatTieuDe();
	for (int i = 0; i < n; i++)
	{
		if (ds[i].clss == clss)
			XuatSinhVien(ds[i]);
	}
}

void XuatDuoiTB(DanhSachSinhVien ds, int n)
{
	XuatTieuDe();
	for (int i = 0; i < n; i++)
	{
		if (ds[i].point < 5)
			XuatSinhVien(ds[i]);
	}
}

void TimSVById(DanhSachSinhVien ds, int n, int id)
{
	XuatTieuDe();
	for (int i = 0; i < n; i++)
	{
		if (ds[i].id == id)
			XuatSinhVien(ds[i]);
	}
}

float AverageBest(DanhSachSinhVien ds, int n)
{
	float count = 0.0;
	for (int i = 0; i < n; i++)
	{
		if (ds[i].point > 8.0)
			count += 1.0;
	}
	return count / n;
}

float AverageAll(DanhSachSinhVien ds, int n)
{
	float point = 0;
	for (int i = 0; i < n; i++)
	{
		point += ds[i].point;
	}
	return point / n;
}

int GenderDeviation(DanhSachSinhVien ds, int n)
{
	int count_m = 0, count_f = 0;
	for (int i = 0; i < n; i++)
	{
		if (ds[i].gender == 'M')
			count_m += 1;
		else
			count_f += 1;
	}
	return max(count_m, count_f) - min(count_m, count_f);
}

float Max(DanhSachSinhVien ds, int n)
{
	float m = 0;
	for (int i = 0; i < n; i++)
	{
		if (ds[i].point > m)
			m = ds[i].point;
	}
	return m;
}

void XuatSVBest(DanhSachSinhVien ds, int n)
{
	float m = Max(ds, n);
	XuatTieuDe();
	for (int i = 0; i < n; i++)
		if (ds[i].point == m)
			XuatSinhVien(ds[i]);
}

