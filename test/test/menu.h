#include <istream>
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DSMatHang ds, int& n);
void ChayChuongTrinh(DSMatHang ds, int n);
void XuatMenu()
{
	cout << endl << "===============chon chuc nang===============";
	cout << endl << "1. Nhap danh sach mat hang";
	cout << endl << "2. Xuat danh sach mat hang";
	cout << endl << "3. Tinh tong gia tien cua tat ca cac mat hang co so luong nho hon 10";
	cout << endl << "4. Tim vi tri mat hang theo ma mat hang";
	cout << endl << "5. Sap xep danh sach mat hang tang theo so luong ";
	cout << endl << "6. Xoa tat ca mat hang co so luong x";
	cout << endl << "7. Chen mat hang sau mat hang co ma mat hang y";
	cout << endl << "8. in ra ban thong ke so mat hang theo tung loai";
	cout << endl << "9. Xuat cac matt hang co so luong nhieu nhat";
	cout << endl << "0. Thoat chuong trinh";
}
int ChonMenu(int soMenu)
{
	int stt;
	do
	{
		system("cls");
		XuatMenu();
		cout << endl << "Chon 1 so de thuc hien : ";
		cin >> stt;

	} while (stt<0 || stt>soMenu);
	return stt;
}
void XuLyMenu(DSMatHang ds, int& n, int menu)
{
	int x, y, kq, nam;
	MatHang mh;
	string ma;
	switch (menu)
	{
	case 1:
		cout << "So luong thiet bi can nhap :";
		cin >> n;
		NhapDSMH(ds, n);
		break;
	case 2:
		XuatDSMH(ds, n);
		break;
	case 3:
		kq = TongTienCuaMHCoSL(ds, n);
		cout << endl << "Tong tien tat ca cac mat hang co so luong be hon 10 : " << kq << endl;
		break;
	case 4:
		cout << "nhap ma can timv :";
		cin.ignore();
		getline(cin, ma);
		kq = TimVTMH(ds, n, ma);
		if (kq >= 0)
		{
			cout << "Vi tri cua mat hang nay la vi tri thu : " << kq + 1 << endl;
		}
		else
			cout << endl << "Khong có ma mat hang phu hop :" << ma << endl;
		break;
	case 5:
		cout << "danh sach truoc sap xep :" << endl;
		XuatDSMH(ds, n);
		cout << endl << "danh sach sau sap xep :" << endl;
		SapXepMH_Tang(ds, n);
		XuatDSMH(ds, n);
		break;
	case 6:
		XuatDSMH(ds, n);
		cout << endl << "Nhap so luong de xoa mat hang :";
		cin >> nam;
		XoaTatCaMatHang(ds, n, nam);
		XuatDSMH(ds, n);
		break;
	case 7:
		XuatDSMH(ds, n);
		cout << endl << "Nhap ma can chen vao sau";
		cin.ignore();
		getline(cin, ma);
		cout << endl << "Nhap ma hang can chen them :";
		cin.ignore();
		NhapMotMatHang(mh);
		Chen(ds, n, ma, mh);
		XuatDSMH(ds, n);
		break;
	case 8:

		break;
	case 9:
		XuatMHLN(ds, n);
		break;
	default:
		cout << "Thoat chuong trinh";
		break;
	}
	if (menu > 0)
	{
		cout << "nhan 1 nut bat ki de tiep tuc";
		_getch();
	}
}

void ChayChuongTrinh(DSMatHang ds, int n)
{
	int menu;

	do {
		int soMenu = 9;
		menu = ChonMenu(soMenu);
		XuLyMenu(ds, n, menu);
	} while (menu > 0);
}