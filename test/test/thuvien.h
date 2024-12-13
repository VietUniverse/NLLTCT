#define MAX 100
#define TAB '/t'


struct MatHang
{
	string MaMH;
	string TenMH;
	unsigned int SoLuong;
	float DonGia;
	string LoaiMatHang;

};

typedef MatHang DSMatHang[MAX];

void NhapMotMatHang(MatHang& mh);
void NhapDSMH(DSMatHang ds, int n);

void XuatTieuDe();
void XuatDSMH(DSMatHang ds, int n);
int TongTienCuaMHCoSL(DSMatHang ds, int n);
int TimVTMH(DSMatHang ds, int n, string MaMH);
void HoanVi(MatHang& mh1, MatHang& mh2);
void SapXepMH_Tang(DSMatHang ds, int n);
void XoaMH(DSMatHang ds, int& n, int x);
void XoaTatCaMatHang(DSMatHang ds, int& n, int x);
void Chen(DSMatHang ds, int& n, string x, MatHang mh);
int MatHangCoSLNhieuNhat(DSMatHang ds, int n);
void XuatMHLN(DSMatHang ds, int n);



void NhapMotMatHang(MatHang& mh)
{
	cout << endl << "Nhap ma mat hang :";
	getline(cin, mh.MaMH);
	cin.ignore();
	cout << endl << "Nhap ten mat hang :";
	getline(cin, mh.TenMH);
	cout << endl << "Nhap So luong mat hang :";
	cin >> mh.SoLuong;
	cout << endl << "Nhap don gia :";
	cin >> mh.DonGia;
	cout << endl << "Nhap loai mat hang :";
	cin >> mh.LoaiMatHang;
	getline(cin, mh.LoaiMatHang);
}
void NhapDSMH(DSMatHang ds, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "nhap thiet bi thu " << i + 1;
		NhapMotMatHang(ds[i]);
	}
}
void XuatTieuDe()
{
	cout << setiosflags(ios::left)
		<< setw(10) << "Ma MH "
		<< setw(30) << "Ten MH "
		<< setw(10) << "So Luong "
		<< setw(15) << "Don Gia "
		<< setw(20) << "Loai Mat Hang ";
}
void XuatMotMH(MatHang mh)
{
	cout << endl << setiosflags(ios::left)
		<< setw(10) << mh.MaMH
		<< setw(30) << mh.TenMH
		<< setw(10) << mh.SoLuong
		<< setw(15) << mh.DonGia
		<< setw(20) << mh.LoaiMatHang
		<< endl;
}
void XuatDSMH(DSMatHang ds, int n)
{
	XuatTieuDe();
	for (int i = 0; i < n; i++)
	{
		XuatMotMH(ds[i]);
	}
}
int TongTienCuaMHCoSL(DSMatHang ds, int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		if (ds[i].SoLuong < 10)
			tong += ds[i].DonGia * ds[i].SoLuong;
	}
	return tong;
}
int TimVTMH(DSMatHang ds, int n, string MaMH)
{
	for (int i = 0; i < n; i++)
	{
		if (ds[i].MaMH.compare(MaMH) == 0)
			return i;
	}
	return -1;
}
void HoanVi(MatHang& mh1, MatHang& mh2)
{
	MatHang mh3 = mh1;
	mh1 = mh2;
	mh2 = mh3;
}
void SapXepMH_Tang(DSMatHang ds, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (ds[i].SoLuong > ds[j].SoLuong ||
				ds[i].SoLuong == ds[j].SoLuong && ds[i].TenMH.compare(ds[j].TenMH) == 1)
				HoanVi(ds[i], ds[j]);
		}

	}
}
void XoaMH(DSMatHang ds, int& n, int x)
{
	for (int i = x; i < n; i++)
	{
		ds[i] = ds[i + 1];
	}
}

void XoaTatCaMatHang(DSMatHang ds, int& n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (ds[i].SoLuong == x)
		{
			XoaMH(ds, n, i);
			n--;
		}

	}
}
void Chen(DSMatHang ds, int& n, string x, MatHang mh)
{
	int vt = TimVTMH(ds, n, x);
	for (int i = n; i > vt + 1; i--)
	{
		ds[i] = ds[i - 1];
	}
	ds[vt + 1] = mh;
	n++;
}
int MatHangCoSLNhieuNhat(DSMatHang ds, int n)
{
	int maxSL = 0;
	for (int i = 0; i < n; i++)
	{if (ds[i].SoLuong > maxSL)
		{
			maxSL = ds[i].SoLuong;
		}
	}
	return maxSL;
}
void XuatMHLN(DSMatHang ds, int n)
{
	int maxSL = MatHangCoSLNhieuNhat(ds, n);
	XuatTieuDe();
	for (int i = 0; i < n; i++)
	{
		if (ds[i].SoLuong == maxSL)
			XuatMotMH(ds[i]);
	}
}