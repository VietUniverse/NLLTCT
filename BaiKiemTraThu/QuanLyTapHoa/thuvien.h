#define MAX 100

struct HangHoa
{
	string id;
	string name;
	string unit;
	string origin;
	int price;
	DateTime time;
	int quantity;
};

struct DateTime
{
	unsigned int day;
	unsigned int month;
	unsigned int year;
};

typedef HangHoa DanhSachHangHoa[MAX];

void NhapHangHoa(HangHoa hh)
{
	cout << "Nhap ma hang hoa ";
	cin.ignore(1);
	getline(cin, hh.id);
	cout << "Nhap ten hang hoa ";
	cin.ignore(1);
	getline(cin, hh.name);
	cout << "Nhap don vi tinh ";
	cin.ignore(1);
	getline(cin, hh.unit);
	cout << "Nhap nuoc san xuat ";
	cin.ignore(1);
	getline(cin, hh.origin);
	cout << "Nhap don gia ";
	cin >> hh.price;
	cout << "Nhap ngay ";
	cin >> hh.time.day;
	cout << "Nhap thang ";
	cin >> hh.time.month;
	cout << "Nhap nam ";
	cin >> hh.time.year;
	cout << "Nhap so luong ";
	cin >> hh.quantity;
}

void NhapDanhSachHangHoa(DanhSachHangHoa ds, int n)
{
	for (int i = 0; i < n; i++)
	{
		NhapHangHoa(ds[i]);
	}
}

void XuatTieuDe()
{
	cout << endl << setiosflags(ios::left)
		<< setw(10) << "MaHH"
		<< setw(30) << "TenHH"
		<< setw(10) << "DVT"
		<< setw(20) << "NuocSX"
		<< setw(10) << "DGia"
		<< setw(20) << "ThoiGian"
		<< setw(8) << "SL";
}

void XuatDongKeNgang()
{
	cout << endl << setiosflags(ios::left)
		<< setw(10) << "======"
		<< setw(30) << "================"
		<< setw(10) << "======"
		<< setw(20) << "==========="
		<< setw(10) << "======"
		<< setw(20) << "==========="
		<< setw(8) << "=====";
}

void XuatMatHang(HangHoa hh)
{

	cout << endl << setiosflags(ios::left)
		<< setw(10) << hh.id
		<< setw(30) << hh.name
		<< setw(10) << hh.unit
		<< setw(20) << hh.origin
		<< setw(10) << hh.price
		<< setw(20) << hh.time.day << '/' << hh.time.month << '/' << hh.time.year
		<< setw(8) << hh.quantity;
}

void XuatDanhSachMatHang(DanhSachHangHoa ds, int n)
{
	void XuatTieuDe();
	void XuatDongKeNgang();
	for (int i = 0; i < n; i++)
		XuatMatHang(ds[i]);
}

void XuatMatHangNhapy(DanhSachHangHoa ds, int n, int y)
{
	void XuatTieuDe();
	void XuatDongKeNgang();
	for (int i = 0; i < n; i++)
		if (ds[i].time.year == y)
			XuatMatHang(ds[i]);
}

void SwapStruct(HangHoa& hh1, HangHoa& hh2)
{
	HangHoa hh3 = hh1;
	hh1 = hh2;
	hh2 = hh3;
}

void SapXepTangDan(DanhSachHangHoa ds, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (ds[i].quantity > ds[j].quantity)
			{
				SwapStruct(ds[i], ds[j]);
			}
			else if (ds[i].quantity == ds[j].quantity)
			{
				if (ds[i].name.compare(ds[j].name) > 0)
				{
					SwapStruct(ds[i], ds[j]);
				}
			}
		}
	}
}

void TimHangHoa(DanhSachHangHoa ds, int n, int m, int y)
{
	XuatTieuDe();
	XuatDongKeNgang();
	for (int i = 0; i < n; i++)
	{
		if (ds[i].time.month == m && ds[i].time.year == y)
		{
			XuatMatHang(ds[i]);
		}
	}
}

void CapNhatThongTin(DanhSachHangHoa ds, int n, string id)
{
	int vt;
	for (int i = 0; i < n; i++)
	{
		if (ds[i].id == id)
		{
			vt = i;
			ds[i] = ds[i + 1];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (i == vt)
		{
			cout << "Nhap ten hang hoa ";
			cin.ignore(1);
			getline(cin, ds[i].name);
			cout << "Nhap don vi tinh ";
			cin.ignore(1);
			getline(cin, ds[i].unit);
			cout << "Nhap nuoc san xuat ";
			cin.ignore(1);
			getline(cin, ds[i].origin);
			cout << "Nhap don gia ";
			cin >> ds[i].price;
			cout << "Nhap ngay ";
			cin >> ds[i].time.day;
			cout << "Nhap thang ";
			cin >> ds[i].time.month;
			cout << "Nhap nam ";
			cin >> ds[i].time.year;
			cout << "Nhap so luong ";
			cin >> ds[i].quantity;
		}
	}
}