#define MAX 100
#define TAB "\t"

struct NgayThang
{
	unsigned short Ngay;
	unsigned short Thang;
	unsigned short Nam;
};

struct NhanVien
{
	unsigned int MaSo;
	char HoTen[MAX];
	char DiaChi[MAX];
	NgayThang NgaySinh;
	float HeSoLuong;
};

typedef NhanVien MangNV[MAX];

void XuatTieuDe()
{
	cout << endl
		<< setiosflags(ios::left)
		<< setw(6) << "Ma so"
		<< setw(25) << "Ho va Ten"
		<< setw(25) << "Dia chi"
		<< setw(15) << "Ngay sinh"
		<< setw(7) << "HSLuong"
		<< endl;
}

void XuatDongKeNgang()
{
	cout << setiosflags(ios::left)
		<< setw(6) << "====="
		<< setw(25) << "========================"
		<< setw(25) << "========================"
		<< setw(15) << "=============="
		<< setw(7) << "======="
		<< endl;
}

void XuatMotNV(NhanVien nv)
{
	cout << endl
		<< setiosflags(ios::left)
		<< setw(6) << nv.MaSo
		<< setw(25) << nv.HoTen
		<< setw(25) << nv.DiaChi
		<< setw(2) << nv.NgaySinh.Ngay << "/"
		<< setw(2) << nv.NgaySinh.Thang << "/"
		<< setw(7) << nv.NgaySinh.Nam
		<< setw(7) << nv.HeSoLuong
		<< endl;
}

void XuatDSNV(MangNV a, int n)
{
	XuatTieuDe();
	XuatDongKeNgang();
	for (int i = 0; i < n;i++)
	{
		XuatMotNV(a[i]);
	}
	XuatDongKeNgang;
	cout << endl;
}

void NhapMotNV(NhanVien& nv)
{
	cout << "Nhap ma so NV :";
	cin >> nv.MaSo;
	cout << "Nhap ho va ten :";
	cin.ignore(1);
	gets_s(nv.HoTen);
	cout << "Nhap dia chi :";
	cin.ignore(100);
	gets_s(nv.DiaChi);
	cout << "Nhap ngay sinh (thu tu ngay thang nam) : ";
	cin >> nv.NgaySinh.Ngay
		>> nv.NgaySinh.Thang
		>> nv.NgaySinh.Nam;
	cout << "Nhap he so luong ";
	cin >> nv.HeSoLuong;
}

void NhapDSNV(MangNV a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl << "Nhan vien thu " << i + 1 << ":" << endl;
		NhapMotNV(a[i]);
	}
	cout << endl << "Da nhap xong" << endl;
}

int KiemTraMaNV(MangNV a, int n, int maSo)
{
	for (int i = 0; i < n; i++)
		if (a[i].MaSo == maSo)
			return 1;
	return 0;
}

void ThemMotNV(MangNV a, int& n)
{
	NhanVien nv;
	NhapMotNV(nv);
	while (KiemTraMaNV(a, n, nv.MaSo))
	{
		cout << endl << "Ma so " << nv.MaSo << " da bi trung, nhap lai ma khac : ";
		cin >> nv.MaSo;
	}
	a[n] = nv;
	n++;
}

int TimTheoMaSo(MangNV a, int n, int maSo)
{
	for (int i = 0; i < n; i++)
		if (a[i].MaSo == maSo)
			return i;
	return -1;
}

void CapNhatNhanVien(NhanVien& nv)
{
	char traLoi;
	cout << endl << "Ban co muon doi ho ten (Y/N) ? ";
	traLoi = _getch();

	if (traLoi == 'y' || traLoi == 'Y')
	{
		cout << endl << "Nhap ho va ten : ";
		cin.ignore(1);
		gets_s(nv.HoTen);
	}

	cout << endl << "Ban co muon doi dia chi (Y/N) ? ";
	traLoi = _getch();

	if (traLoi == 'y' || traLoi == 'Y')
	{
		cout << endl << "Nhap dia chi : ";
		cin.ignore(1);
		gets_s(nv.DiaChi);
	}

	cout << endl << "Ban co muon doi ngay sinh (Y/N) ? ";
	traLoi = _getch();

	if (traLoi == 'y' || traLoi == 'Y')
	{
		cout << endl << "Nhap ngay sinh  : ";
		cin >> nv.NgaySinh.Ngay >> nv.NgaySinh.Thang >> nv.NgaySinh.Nam;
	}

	cout << endl << "Ban co muon doi he so luong (Y/N) ? ";
	traLoi = _getch();

	if (traLoi == 'y' || traLoi == 'Y')
	{
		cout << endl << "Nhap he so luong : ";
		cin >> nv.HeSoLuong;
	}

}

int TimNhanVienTheoNamSinh(MangNV a, int n, unsigned short namSinh)
{
	int dem = 0;
	XuatTieuDe();
	XuatDongKeNgang();
	for (int i = 0; i < n; i++)
		if (a[i].NgaySinh.Nam == namSinh)
		{
			XuatMotNV(a[i]);
			dem++;
		}
	XuatDongKeNgang();
	return dem;
}

void SapGiamTheoHeSoLuong(MangNV a, int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].HeSoLuong < a[j].HeSoLuong)
				swap(a[i], a[j]);
}