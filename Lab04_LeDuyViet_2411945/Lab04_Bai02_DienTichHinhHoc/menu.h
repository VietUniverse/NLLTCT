// =======================================================
// Khai báo nguyên mãu các hàm xử lý menu
// =======================================================

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu);
void ChayChuongTrinh();
// =======================================================
// Định nghĩa các hàm xử lý menu
// =======================================================


// Dịnh nghĩa hàm xuất danh sách chức năng ra màn hình
// Input : Không có
// Output: Không có
void XuatMenu()
{
	cout << endl << "======== CHON CHUC NANG ========";
	cout << endl << "1. Tinh dien tich hinh vuong";
	cout << endl << "2. Tinh dien tich hinh chu nhat";
	cout << endl << "3. Tinh dien tich hinh tam giac";
	cout << endl << "4. Tinh dien tich hinh hinh tron";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "================================";
}

// Định nghĩa hàm chọn một menu trong danh sách
// Input : soMenu = Số lượng menu có thể chọn.
// Output: Số thứ tự menu do người dùng nhập vào.
int ChonMenu(int soMenu)
{
	int stt;
	do
	{
		system("cls");
		XuatMenu();
		cout << endl << "Nhap 1 so de chon menu : ";
		cin >> stt;
	} while (stt < 0 || stt > soMenu);

	return stt;
}

// Định nghĩa hàm xử lý menu tùy thuộc vào chức năng
// do người dùng chọn là chức năng gì.
// Input : menu = Số thứ tự menu do người chọn.
// Output: Không có.
void XuLyMenu(int menu)
{
	double a, b, c, dienTich;
	switch (menu)
	{
	case 1:
		cout << endl << "Nhap do dai canh hinh vuong: ";
		cin >> a;

		dienTich = DienTichHinhVuong(a);

		cout << endl << "Dien tich hinh vuong canh " << a << " la " << dienTich;
		break;
	case 2:
		cout << endl << "Nhap chieu dai hinh chu nhat: ";
		cin >> a;
		cout << endl << "Nhap chieu rong hinh chu nhat: ";
		cin >> b;

		dienTich = DienTichHinhChuNhat(a,b);

		cout << endl << "Dien tich hinh chu nhat co chieu dai =" << a << " va chieu rong = " << b << " la " << dienTich;
		break;
	case 3:
		cout << endl << "Nhap do dai canh a: ";
		cin >> a;
		cout << endl << "Nhap do dai canh b: ";
		cin >> b;
		cout << endl << "Nhap do dai canh c: ";
		cin >> c;

		dienTich = DienTichTamGiac(a, b, c);

		cout << endl << "Dien tich hinh tam giac co 3 canh a = " << a << ", b = " << b << ", c = " << c << " la " << dienTich;
		
		break;
	case 4:
		cout << endl << "Nhap do dai ban kinh: ";
		cin >> a;
		dienTich = DienTichHinhTron(a);
		cout << endl << "Dien tich hinh tron ban kinh " << a << " la " << dienTich;
		break;
	default:
		cout << endl << "Thoat khoi chuong trinh";
		break;

	}

	if (menu > 0)
	{
		//Yeu cầu người dùng nhấn 1 phím để tiếp tục
		cout << endl << endl
			<< "Nhan 1 phim bat ky de tiep tuc";

		_getch();
	}
}

void ChayChuongTrinh()
{
	int chon, menu = 4;
	do
	{
		chon = ChonMenu(menu);
		XuLyMenu(chon);
	} while (chon > 0);
}