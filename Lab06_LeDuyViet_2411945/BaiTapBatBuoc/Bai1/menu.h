void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, MaTran a, int &n);
void ChayChuongTrinh(MaTran a, int& m);

void XuatMenu()
{
	cout << endl << "==================== CHON CHUC NANG ====================";
	cout << endl << "1. Nhap ham thu cong";
	cout << endl << "2. Nhap ham tu dong";
	cout << endl << "3. Xuat Mang";
	cout << endl << "4. Tinh S";
	cout << endl << "5. Tinh T";
	cout << endl << "6. Tinh S-T";
	cout << endl << "0. Thoat chuong trinh";
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
		XuatMang(a, n);
		cout << "Tong S = " << SumS(a, n);
		break;
	case 5:
		XuatMang(a, n);
		cout << "Tong T = " << SumT(a, n);
		break;
	case 6:
		XuatMang(a, n);
		cout << "S - T = " << SumS(a,n) - SumT(a,n); 
		break;
	default:
		cout << endl << "Thoat khoi chuong trinh";
		break;
	}
	if (menu > 0)
	{
		cout << endl << "Nhan 1 phim bat ky de tiep tuc";
		_getch();
	}
}

void ChayChuongTrinh(MaTran a, int& n)
{
	int menu, soMenu = 6;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}