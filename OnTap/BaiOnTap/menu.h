void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DanhSachMatHang ds, int& n);
void ChayChuongTrinh(DanhSachMatHang ds, int n);

void XuatMenu()
{
	cout << endl << "1. Nhap danh sach mat hang";
	cout << endl << "2. Xuat danh sach mat hang";
	cout << endl << "3. Tinh tong gia tien cua tat ca mat hang co so luong < 10";
	cout << endl << "4. Tim vi tri mat hang theo ma mat hang";
	cout << endl << "5. Sap xep danh sach mat hang tang theo so luong , ten mat hang";
	cout << endl << "6. Xoa tat ca mat hang co so luong = x";
	cout << endl << "7. Chen mat hang sau mat hang co ma mat hang la y cho truoc";
	cout << endl << "8. In bang thong ke tong so luong mat hang theo tung loai";
	cout << endl << "9. Xuat cac mat hang co so luong nhieu nhat.";
	cout << endl << "0. Thoat chuong trinh";
}

int ChonMenu(int soMenu)
{
	int stt;
	do {
		system("cls");
		XuatMenu();
		cout << endl << "Nhap mot so de chon menu ";
		cin >> stt;
	} while (stt < 0 || stt > soMenu);
	return stt;
}

void XuLyMenu(int menu, DanhSachMatHang ds, int& n)
{
	int x, y; string maTB;
	switch (menu)
	{
	case 1:
		cout << endl << "Nhap so mat hang: ";
		cin >> n;
		NhapDanhSachMatHang(ds, n);
		break;
	case 2:
		XuatDanhSachMatHang(ds, n);
		break;
	case 3:
		cout << "Nhap x";
		cin >> x;
		cout << "Nhap y";
		cin >> y;
		cout << "Tong la " << TinhTong(ds, n);
		break;
	case 4:
		cout << "Nhap ma mat hang ";
		cin.ignore(1);
		getline(cin,maTB);
		cout << "Vi tri la " << TimViTri(ds, n, maTB);
		break;
	case 5:
		SapGiam(ds, n);
		break;
	default:
		cout << endl << "Thoat chuong trinh";
		break;
	}
	if (menu > 0)
	{
		cout << endl << "Nhan 1 phim bat ky de tiep tuc ";
		_getch();
	}
}

void ChayChuongTrinh(DanhSachMatHang ds, int n)
{
	int menu, soMenu = 2;
	do {
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, ds, n);
	} while (menu > 0);
}


