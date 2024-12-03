void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, MangPS ds, int& n);
void ChayChuongTrinh(MangPS ds, int n);


void XuatMenu()
{
	cout << endl << "1. Nhap vao mot mang phan so";
	cout << endl << "2. Nhap ngau nhien mot mang phan so voi dieu kien tu so, mau so trong doan [-10...10]";
	cout << endl << "3. Xuat cac phan so ra man hinh";
	cout << endl << "4. Tinh gia tri cua mot phan so tai vi tri cho truoc";
	cout << endl << "5. Xuat gia tri cua cac phan so trong mang";
	cout << endl << "6. Tim vi tri cua phan so co gia tri lon nhat";
	cout << endl << "7. Tim cac phan so co gia tri lon nhat";
	cout << endl << "8. Toi gian mot phan so tai vi tri cho truoc";
	cout << endl << "9. Xuat cac phan so o dang toi gian";
	cout << endl << "10. Sap xep cac phan so tang dan theo gia tri";
	cout << endl << "11. Tim cac phan so co gia tri bang voi mot phan so p cho truoc";
	cout << endl << "12. Tim nhung phan so co gia tri bang 0";
	cout << endl << "13. Dem so luong phan so khong the lay nghich dao";
	cout << endl << "14. Xuat phan so nghich dao cua phan so trong mang";
	cout << endl << "15. Dinh dang lai cac phan so theo quy tac";
	cout << endl << "16. Tinh tong cac gia tri cua tat ca cac phan so trong mang";
	cout << endl << "==============================================================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	do
	{
		system("cls");
		XuatMenu();
		cout << endl << "Nhap mot so de chon menu ";
		cin >> stt;
	} while (stt < 0 || stt > soMenu);
	return stt;
}

void XuLyMenu(int menu, MangPS ds, int& n)
{
	int vt, tu , mau;
	switch (menu)
	{
	case 1:
		cout << endl << "Nhap so luong sinh vien ";
		cin >> n;
		NhapMangPS(ds, n);
		break;
	case 2:
		cout << endl << "Nhap so luong sinh vien ";
		cin >> n;
		NhapMangPS(ds, n);
		break;
	case 3:
		XuatMangPS(ds, n);
		break;
	case 4:
		cout << endl << "Nhap vi tri phan so ";
		cin >> vt;
		cout << endl << "Gia tri cua phan so tai vi tri " << vt << " la " << Solve(ds, vt);
		break;
	case 5:
		XuatSolve(ds, n);
		break;
	case 6:
		cout << endl << "Vi tri cua phan so lon nhat la " << PosMax(ds, n);
		break;
	case 7:
		TimMax(ds, n);
		break;
	case 8:
		cout << endl << "Nhap vi tri phan so can rut gon ";
		cin >> vt;
		RutGonPS(ds, n, vt);
		break;
	case 9:
		XuatToiGian(ds, n);
		break;
	case 10:
		SapXepTangDan(ds, n);
		XuatMangPS(ds, n);
		break;
	case 11:
		cout << endl << "Nhap tu so ";
		cin >> tu;
		do
		{
			cout << endl << "Nhap mau so ";
			cin >> mau;
		} while (mau == 0);
		TimPSBangNhau(ds, n, tu, mau);
		break;
	case 12:
		cout << endl << "Cac phan so bang 0 ";
		FindZero(ds, n);
		break;
	case 13:
		cout << endl << "Co " << CantConvert(ds,n) << " phan so khong the nghich dao";
		break;
	case 14:
		NghichDao(ds, n);
		break;
	case 15:
		DinhDangPS(ds, n);
		XuatMangPS(ds, n);
		break;
	case 16:
		cout << endl << "Tong cac gia tri cua cac phan so la " << TinhTongGT(ds, n);
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

void ChayChuongTrinh(MangPS ds, int n)
{
	int menu, soMenu = 16;
	do {
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, ds, n);
	} while (menu > 0);
}