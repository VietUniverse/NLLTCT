#pragma once
// =======================================================
// Khai báo nguyên mãu các hàm xử lý menu
// =======================================================

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, unsigned int n);
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
	cout << endl << "1. Tinh tong R";
	cout << endl << "2. Tinh tong S";
	cout << endl << "3. Tinh tong T";
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
void XuLyMenu(int menu, unsigned int n)
{
	double sum;
	switch (menu)
	{
	case 1:
		sum = TinhTongR(n);
		cout << endl << "R = " << sum;
		break;
	case 2:
		sum = TinhTongS(n);
		cout << endl << "S = " << sum;
		break;
	case 3:
		sum = TinhTongT(n);
		cout << endl << "T = " << sum;
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

void ChayChuongTrinh(unsigned int n)
{
	int menu, soMenu = 3;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu,n);
	} while (menu > 0);
}