#define MAX 100

struct MatHang
{
	string id;
	string name;
	int quantity;
	int price;
	string type;
};

typedef MatHang DanhSachMatHang[MAX];

void NhapMatHang(MatHang& matHang)
{
	cout << endl << "Nhap ma mat hang: ";
	cin.ignore(1);
	getline(cin, matHang.id);
	cout << endl << "Nhap ten mat hang: ";
	cin.ignore(1);
	getline(cin, matHang.name);
	cout << endl << "Nhap so luong: ";
	cin >> matHang.quantity;
	cin.ignore(1);
	cout << endl << "Nhap don gia: ";
	cin >> matHang.price;
	cin.ignore(1);
	cout << endl << "Nhap loai mat hang: ";
	cin >> matHang.type;
	cin.ignore(1);
}

void NhapDanhSachMatHang(DanhSachMatHang ds, unsigned int soLuong)
{
	for (int i = 0; i < soLuong; i++)
		NhapMatHang(ds[i]);
}

void XuatTieuDe()
{
	cout << endl << setiosflags(ios::left)
		<< setw(8) << "Ma Mat Hang"
		<< setw(25) << "Ten Mat Hang"
		<< setw(10) << "So luong"
		<< setw(13) << "Don gia"
		<< setw(10) << "Loai";
	cout << endl << setiosflags(ios::left)
		<< setw(8) << "==============="
		<< setw(25) << "========================"
		<< setw(10) << "=============="
		<< setw(13) << "=============="
		<< setw(10) << "==============";
}

void XuatMatHang(MatHang MatHang)
{
	cout << endl << setiosflags(ios::left)
		<< setw(8) << MatHang.id
		<< setw(25) << MatHang.name
		<< setw(10) << MatHang.quantity
		<< setw(13) << MatHang.price
		<< setw(10) << MatHang.type;
}

void XuatDanhSachMatHang(DanhSachMatHang ds, unsigned int soLuong)
{
	for (int i = 0; i < soLuong; i++)
		XuatMatHang(ds[i]);
}

int TinhTong(DanhSachMatHang ds, unsigned int soLuong)
{
	int sum = 0;
	for (int i = 0; i < soLuong; i++)
	{
		if (ds[i].quantity < 10)
			sum += ds[i].price;
	}
	return sum;
}

int TimViTri(DanhSachMatHang ds, unsigned int soLuong, string maHang)
{
	for (int i = 0; i < soLuong; i++)
	{
		if (ds[i].id == maHang)
			return i;
	}
}

void SwapTB(MatHang &hang1, MatHang &hang2)
{
	MatHang hang3 = hang1;
	hang1 = hang2;
	hang2 = hang3;
}

void SapGiam(DanhSachMatHang ds, unsigned int soLuong)
{
	for (int i = 0; i < soLuong - 1; i++)
	{
		for (int j = i + 1; j < soLuong; j++)
		{
			if (ds[i].quantity < ds[j].quantity)
				SwapTB(ds[i], ds[j]);
			if (ds[i].quantity == ds[j].quantity)
			{
				if (ds[i].name.compare(ds[j].name) > 0)
					SwapTB(ds[i], ds[j]);
			}
		}
	}
}

void XoaMatHang(DanhSachMatHang ds, unsigned int soLuong, unsigned int x)
{
	for (int i = soLuong - 1; i > -1;i--)
	{
		if (ds[i].quantity == x)
			for (int j = i; j < soLuong - 1; j++)
				ds[j] = ds[j + 1];
	}
}

void ChenMatHang(DanhSachMatHang ds, unsigned int soLuong, string id)
{
	NhapMatHang(ds[soLuong]);
	for (int i = soLuong; i > -1; i--)
	{
		if (ds[i].id.compare(id) == 0)
			break;
		for (int j = i - 1; j > 0;j--)
			for (int k = j - 1; k > -1;k--)
				SwapTB(ds[j], ds[k]);
	}
}


void InThongKeTheoLoai(DanhSachMatHang ds, int soLuong)
{
	string loaiMatHang[MAX];
	int soLuongLoai[MAX] = { 0 };
	int demLoai = 0;

	for (int i = 0; i < soLuong; i++)
	{
		int viTri = -1;
		for (int j = 0; j < demLoai; j++)
		{
			if (ds[i].type.compare(loaiMatHang[j]))
			{
				viTri = j;
				break;
			}
		}
		if (viTri == -1)
		{
			loaiMatHang[demLoai] = ds[i].type;
			soLuongLoai[demLoai] = ds[i].quantity;
			demLoai++;
		}
		else
			soLuongLoai[viTri] += ds[i].quantity;
	}

	cout << endl << "Thong ke tong so luong mat hang theo loai: ";
	for (int i = 0; i < demLoai; i++)
		cout << "Loai: " << loaiMatHang[i] << ", Tong so luong: " << soLuongLoai[i] << endl;
}​