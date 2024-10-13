#pragma once
// =======================================================
// Khai báo nguyên mẫu các hàm xử lý menu
// =======================================================

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu);
void ChayChuongTrinh();

// =======================================================
// Định nghĩa các hàm xử lý menu
// =======================================================

void XuatMenu()
{
    cout << endl << "================================= CHON CHUC NANG ================================";
    cout << endl << "1. Tim so Fibonacci thu n";
    cout << endl << "2. Tim tat ca cac so Fibonacci trong doan [1...n]";
    cout << endl << "3. Tim n so Fibonacci dau tien";
    cout << endl << "0. Thoat chuong trinh";
    cout << endl << "=================================================================================";

}

int ChonMenu(int soMenu)
{
    int stt;
    do
    {
        system("cls");
        XuatMenu();
        cout << endl << "Nhap 1 so de chon menu: ";
        cin >> stt;
    } while (stt < 0 || stt > soMenu);

    return stt;
}

void XuLyMenu(int menu, int n)
{
    switch (menu)
    {
    case 1:
        cout << Fibonacci(n);
        break;
    case 2:
        FibonacciInRange(n);
        break;
    case 3:
        FirstNFibonacci(n);
        break;
    default:
        cout << endl << "Thoat khoi chuong trinh";
        break;
    }

    if (menu > 0)
    {
        cout << endl << endl << "Nhan 1 phim bat ky de tiep tuc";
        _getch();
    }
}

void ChayChuongTrinh()
{
    int chon, n;
    const int soMenu = 3;
    do
    {
        chon = ChonMenu(soMenu);
        cout << "Nhap n ";
        cin >> n;
        XuLyMenu(chon, n);
    } while (chon > 0);
}