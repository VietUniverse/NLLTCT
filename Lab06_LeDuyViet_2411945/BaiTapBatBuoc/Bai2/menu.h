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
	cout << endl << "4. Xoan Oc";
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

void XuLyMenu(int menu, MaTran a, int& n)
{
	switch (menu)
	{
	case 1:
		cout << "Nhap cap ma tran " << endl; cin >> n;
		NhapMang(a, n);
		break;
	case 2:
		cout << "Nhap cap ma tran " << endl; cin >> n;
		NhapTuDong(a, n);
		break;
	case 3:
		XuatMang(a, n);
		break;
	case 4:
		cout << "Nhap n ";
		cin >> n;
		XoanOc(a, n);
		XuatMang(a, n);
		break;
	default:
		cout << endl << "Thoat khoi chuong trinh";
		break;
	}
	if (menu > 0)
	{
		cout << endl << "Nhan 1 phim bat ki de tiep tuc";
		_getch();
	}
}

void ChayChuongTrinh(MaTran a, int& n)
{
	int menu, soMenu = 4;
	do {
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}
