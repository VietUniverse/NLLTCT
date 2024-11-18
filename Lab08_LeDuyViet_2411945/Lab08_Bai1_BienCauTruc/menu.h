void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, MangNV a, int& n);
void ChayChuongTrinh(MangNV a, int n);

void XuatMenu()
{
	cout << endl << "========= CHON CHUC NANG ==========";
	cout << endl << "1. Nhap danh sach nhan vien moi";
	cout << endl << "2. Xuat danh sach nhan vien";
	cout << endl << "3. Them mot nhan vien moi";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "===================================";
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

void XuLyMenu(int menu, MangNV a, int& n)
{
	switch (menu)
	{
	case 1:
		cout << endl << "Nhap so nhan vien : ";
		cin >> n;
		NhapDSNV(a, n);
		break;
	case 2:
		XuatDSNV(a, n);
		break;
	case 3:
		ThemMotNV(a, n);
		break;
	default:
		cout << endl << "Thoat chuong trinh";
		break;
	}
	if (menu > 0)
	{
		cout << endl << "Nhan 1 phim bat ky de tiep tuc";
		_getch();
	}
}

void ChayChuongTrinh(MangNV a, int n)
{
	int menu, soMenu = 3;
	do {
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}