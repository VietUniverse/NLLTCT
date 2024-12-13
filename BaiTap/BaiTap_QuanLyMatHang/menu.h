void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DanhSachMatHang ds, int& n);
void ChayChuongTrinh(DanhSachMatHang ds, int& n);

void XuatMenu()
{
	cout << endl << "1. Nhap danh sach mat hang";
	cout << endl << "2. Xuat danh sach mat hang";
	cout << endl << "3. Tinh tong gia tien cua tat ca mat hang co so luong nho hon 10";
	cout << endl << "4. Tim vi tri mat hang theo ma mat hang";
	cout << endl << "5. Sap xep danh sach mat hang tang theo so luong, tang theo ten mat hang";
	cout << endl << "6. Xoa tat ca mat hang co so luong = x";
	cout << endl << "7. Chen mat hang sau mat hang co ma mat hang la y cho truoc";
	cout << endl << "8. In bang thong ke tong so luong mat hang theo tung loai";
	cout << endl << "9. Xuat cac mat hang co so luong nhieu nhat";
	cout << endl << "0. Thoat chuong trinh";
	cout << endl << "===========================================================================";
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
	string id;
	int quantity;
	switch (menu)
	{
	case 1:
		cout << endl << "Nhap so mat hang muon nhap ";
		cin >> n;
		NhapDanhSachMatHang(ds, n);
		break;
	case 2:
		cout << endl;
		XuatDanhSachMatHang(ds, n);
		XuatDongKeNgang();
		break;
	case 3:
		cout << endl << "Tong gia tien cua cac mat hang co so luong < 10 la : " << TinhTong(ds, n);
		break;
	case 4:
		cout << endl << "Nhap ma mat hang ";
		cin.ignore(1);
		getline(cin, id);
		cout << endl << "Vi tri mat hang co ma mat hang la : " << TimViTri(ds, n, id);
		break;
	case 5:
		SapTang(ds, n);
		XuatDanhSachMatHang(ds, n);
		break;
	case 6:
		cout << endl << "Nhap so luong x ";
		cin >> quantity;
		XoaMatHang(ds, n, quantity);
		break;
	case 7:
		cout << endl << "Nhap ma mat hang ";
		cin.ignore(1);
		getline(cin, id);
		ChenMatHang(ds, n, id);
		break;
	case 8:
		XuatDanhSach(ds, n);
		break;
	case 9:
		XuatTieuDe();
		XuatDongKeNgang();
		XuatMax(ds, n);
		break;
	default:
		cout << endl << "Thoat chuong trinh";
		break;
	}
	if (menu > 0)
	{
		cout << endl << "Nhan mot phim bat ky de tiep tuc";
		_getch();
	}
}

void ChayChuongTrinh(DanhSachMatHang ds, int& n)
{
	int menu, soMenu = 9;
	do {
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, ds, n);
	} while (menu > 0);
}