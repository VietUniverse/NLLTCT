#define MAX 100

struct MatHang {
	string id;
	string name;
	int quantity;
	float price;
	string type;
};

typedef MatHang DanhSachMatHang[MAX];
string DanhSachLoai[MAX];
int DanhSachSoLuong[MAX];

void NhapMatHang(MatHang& mh)
{
	cout << endl << "Nhap ma mat hang ";
	cin.ignore(1);
	getline(cin, mh.id);
	cout << endl << "Nhap ten mat hang ";
	cin.ignore(1);
	getline(cin, mh.name);
	cout << endl << "Nhap so luong ";
	cin >> mh.quantity;
	cout << endl << "Nhap don gia ";
	cin >> mh.price;
	cout << endl << "Nhap loai mat hang ";
	cin.ignore(1);
	getline(cin,mh.type);
}

void NhapDanhSachMatHang(DanhSachMatHang ds, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap mat hang so " << i + 1;
		NhapMatHang(ds[i]);
	}
}

void XuatTieuDe()
{
	cout<< endl << setiosflags(ios::left)
		<< setw(15) << "Ma mat hang"
		<< setw(30) << "Ten mat hang"
		<< setw(10) << "So luong"
		<< setw(10) << "Don gia"
		<< setw(15) << "Loai mat hang";
}

void XuatDongKeNgang()
{
	cout << endl << setiosflags(ios::left)
		<< setw(15) << "======="
		<< setw(30) << "============="
		<< setw(10) << "====="
		<< setw(10) << "====="
		<< setw(15) << "=======" << endl;
}

void XuatMatHang(MatHang mh)
{
	cout << endl << setiosflags(ios::left)
		<< setw(15) << mh.id
		<< setw(30) << mh.name
		<< setw(10) << mh.quantity
		<< setw(10) << mh.price
		<< setw(15) << mh.type << endl;
}

void XuatDanhSachMatHang(DanhSachMatHang ds, int n)
{
	XuatTieuDe();
	XuatDongKeNgang();
	for (int i = 0; i < n; i++)
		XuatMatHang(ds[i]);
}

int TinhTong(DanhSachMatHang ds, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (ds[i].quantity < 10)
			sum += ds[i].quantity * ds[i].price;
	}
	return sum;
}

int TimViTri(DanhSachMatHang ds, int n, string id)
{
	for (int i = 0; i < n; i++)
		if (ds[i].id.compare(id) == 0)
			return i + 1;
}

void SwapStruct(MatHang& mh1, MatHang& mh2)
{
	MatHang mh3 = mh1;
	mh1 = mh2;
	mh2 = mh3;
}

void SapTang(DanhSachMatHang ds, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (ds[i].quantity > ds[j].quantity)
				SwapStruct(ds[i], ds[j]);
			else if (ds[i].quantity == ds[j].quantity)
				if (ds[i].name.compare(ds[j].name) > 0)
					SwapStruct(ds[i], ds[j]);
		}
	}
}

void XoaMatHang(DanhSachMatHang ds, int& n, int quantity)
{
	int temp = 0, i = 0;
	for (int i = 0; i < n;i++)
	{
		if (ds[i].quantity == quantity)
			temp++;
	}
	while (temp > 0)
	{
		if (ds[i].quantity == quantity)
		{
			for (int j = i; j < n - 1;j++)
			{
				ds[j] = ds[j + 1];
			}
			--n;
			--temp;
		}
		i++;
	}
}

void ChenMatHang(DanhSachMatHang ds, int n, string y)
{
	NhapMatHang(ds[n]);
	++n;
	for (int i = n - 1; i > -1; i--)
	{
		ds[i] = ds[i - 1];
		if (ds[i - 1].id.compare(y) == 0)
			break;
	}
}

void ThongKeLoai(DanhSachMatHang ds, int n)
{
	int j = 1;
	DanhSachLoai[0] = ds[0].type;
	for (int i = 1; i < n; i++)
	{
		int temp = 0;
		for (int k = 0; k < j; k++)
			if (DanhSachLoai[k] == ds[i].type)
			{
				temp = 1;
				break;
			}
		if (temp == 0)
		{
			DanhSachLoai[j] = ds[i].type;
			j++;
		}
	}
}

void ThongKeSoLuong(DanhSachMatHang ds, int n)
{
	int count;
	for (int i = 0; i < MAX; i++)
	{
		DanhSachSoLuong[i] = 0;
	}
	for (int i = 0; i < n;i++)
		for (int j = 0; j < MAX; j++)
			if (DanhSachLoai[j] == ds[i].type)
			{
				DanhSachSoLuong[j] += 1;
				break;
			}
}

void XuatDanhSach(DanhSachMatHang ds, int n)
{
	ThongKeLoai(ds, n);
	ThongKeSoLuong(ds, n);
	cout << endl << "Thong ke so luong theo loai :";
	for (int i = 0; i < MAX; i++)
	{
		if (DanhSachSoLuong[i] > 0)
			cout << endl << DanhSachLoai[i] << " : " << DanhSachSoLuong[i];
		else
			break;
	}
}

int MaxQuantity(DanhSachMatHang ds, int n)
{
	int max = ds[0].quantity;
	for (int i = 1; i < n; i++)
		if (ds[i].quantity > max)
			max = ds[i].quantity;
	return max;
}

void XuatMax(DanhSachMatHang ds, int n)
{
	int max = MaxQuantity(ds, n);
	for (int i = 0; i < n; i++)
		if (ds[i].quantity == max)
			XuatMatHang(ds[i]);
}

