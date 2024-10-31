void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu); 
void ChayChuongTrinh();

void XuatMenu()
{
	cout << endl << "======== CHON CHUC NANG ========";
	cout << endl << "1. Tinh chieu dai cua chuoi";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	do{
		system("cls");
		XuatMenu();
		cout << endl << "Nhap 1 so de chon menu: ";
		cin >> stt;
	} while (stt < 0 || stt > soMenu);
	return stt;
}
void XuLyMenu(int menu)
{
	Chuoi s, t;
	char k;
	unsigned int vt, kq;
	switch (menu)
	{
	case 1:
		cout << endl << "Nhap mot chuoi: ";
		cin.ignore(1);
		gets_s(s);
		kq = ChieuDai(s);
		cout << endl << "Chieu dai chuoi " << s << " la " << kq;
		break;
	default:
		cout << endl << "Thoat khoi chuong trinh"; break;
	} if (menu > 0)
	{
		cout << endl << "Nhan 1 phim bat ky de tiep tuc";
		_getch();
	}
}

void ChayChuongTrinh()
{
	int menu, soMenu = 2;
	do
	{
		menu = ChonMenu(soMenu); 
		XuLyMenu(menu);
	} while (menu > 0);
}