void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu);
void ChayChuongTrinh();


void XuatMenu()
{
	cout << endl << "================== MENU ==================";
	cout << endl << "1. Xoa ky tu X khoi chuoi S";
	cout << endl << "2. Noi chuoi T vao chuoi S";
	cout << endl << "3. Dao nguoc chuoi S";
	cout << endl << "4. Kiem tra chuoi doi xung (Palindrome)";
	cout << endl << "5. Cat dau ghep duoi";
	cout << endl << "6. Doi chu hoa thanh chu thuong xen ke";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "==========================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	do {
		system("cls");
		XuatMenu();
		cout << endl << "Nhap 1 so de chon menu ";
		cin >> stt;
	} while (stt < 0 || stt > soMenu);
	return stt;
}

void XuLyMenu(int menu)
{
	Chuoi s, t;
	char tmp;
	switch (menu)
	{
	case 1:
		cout << "Nhap chuoi S ";
		cin.ignore(1);
		gets_s(s);
		cout << "Nhap X ";
		cin >> tmp;
		XoaX(s, tmp);
		cout << "Chuoi S sau khi xoa X " << s;
		break;
	case 2:
		cout << "Nhap chuoi s ";
		cin.ignore(1);
		gets_s(s);
		cout << "Nhap chuoi t ";
		cin.ignore(1);
		gets_s(t);
		NoiChuoi(s, t);
		cout << "Chuoi sau khi ghep " << s;
		break;
	case 3:
		cout << "Nhap chuoi s ";
		cin.ignore(1);
		gets_s(s);
		DaoChuoi(s);
		cout << "Chuoi sau khi dao nguoc la " << s;
		break;
	case 4:
		cout << "Nhap chuoi s ";
		cin.ignore(1);
		gets_s(s);
		if (Palindrome(s)) cout << s << " la Palindrome";
		else cout << s << " khong la Palindrome";
		break;
	case 5:
		cout << "Nhap chuoi s ";
		cin.ignore(1);
		gets_s(s);
		GhepChuoi(s);
		cout << "Chuoi sau khi ghep " << s;
		break;
	case 6:
		cout << "Nhap chuoi s ";
		cin.ignore(1);
		gets_s(s);
		SwapCase(s);
		cout << "Chuoi sau khi thay doi " << s;
		break;
	default:
		cout << "Thoat chuong trinh";
		break;
	}
	if (menu > 0)
	{
		cout << endl << "Nhap mot phim ban ki de tiep tuc";
		_getch();
	}
}

void ChayChuongTrinh()
{
	int soMenu = 6, menu;
	do
	{
		menu = ChonMenu(6);
		XuLyMenu(menu);
	} while (menu > 0);
}