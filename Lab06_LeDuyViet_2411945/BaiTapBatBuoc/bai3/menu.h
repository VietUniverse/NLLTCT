void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, MaTran a, int& n);
void ChayChuongTrinh(MaTran a, int& n);

void XuatMenu()
{
	cout << endl << "==================== CHON CHUC NANG ====================";
	cout << endl << "1. Nhap ham thu cong";
	cout << endl << "2. Nhap ham tu dong";
	cout << endl << "3. Xuat Mang";
	cout << endl << "4. Chuyen vi ma tran";
	cout << endl << "========================================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	do {
		system("cls");
		XuatMenu();
		cout << endl << "Nhap 1 so de chon menu : ";
		cin >> stt;
	} while (stt < 0 || stt > soMenu);
	return stt;
}

void XuLyMenu(int menu, MaTran a, int& n, int& m)
{
	switch (menu)
	{
	case 1:
		cout << "Nhap so hang " << endl; cin >> n;
		cout << "Nhap so cot " << endl; cin >> m;
		NhapMang(a, n, m);
		break;
	case 2:
		cout << "Nhap so hang " << endl; cin >> n;
		cout << "Nhap so cot " << endl; cin >> m;
		NhapTuDong(a, n,m);
		break;
	case 3:
		XuatMang(a, n,m);
		break;
	case 4:
		ChuyenVi(a, n,m);
		XuatMang(a, n,m);
		break;
	default:
		cout << "Thoat khoi chuong trinh";
		break;
	}
	if (menu > 0)
	{
		cout << "Nhan 1 phim bat ky de tiep tuc";
		_getch();
	}
}

void ChayChuongTrinh(MaTran a, int& n, int& m)
{
	int menu, soMenu = 4;
	do {
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n, m);
	} while (menu > 0);
}