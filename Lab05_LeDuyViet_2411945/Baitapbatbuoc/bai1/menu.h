#pragma once

// =======================================================
// Khai báo nguyên mẫu các hàm xử lý menu
// =======================================================

void XuatMenu(DaySo a);
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int& n);
void ChayChuongTrinh(DaySo a, int n);

// =======================================================
// Định nghĩa các hàm xử lý menu
// =======================================================


void XuatMenu(DaySo a, int n)
{
    cout << "a = [ " << a[0];
    for (int i = 1; i < n; i++)
    {
        cout << " , " << a[i];
    }
    cout << " ]" << endl;
    cout << endl << "======== CHON CHUC NANG ========";
    cout << endl << "1. Tim vi tri xuat hien dau tien cua x";
    cout << endl << "2. Tim vi tri so nguyen to cuoi cung";
    cout << endl << "3. Tim phan tu (<100) xuat hien nhieu nhat va so lan xuat hien cua no";
    cout << endl << "4. Tim phan tu co gia tri nho nhat";
    cout << endl << "5. Tim cac so hoan chinh";
    cout << endl << "6. Tim so am lon nhat va vi tri cua no";
    cout << endl << "7. Tim so duong nho nhat va vi tri cua no";
    cout << endl << "8. Tim phan tu co gia tri gan voi x nhat";
    cout << endl << "0. Thoat khoi chuong trinh";
    cout << endl << "================================";
}

int ChonMenu(int soMenu,DaySo a,int n)
{
    int stt;
    do
    {
        system("cls");
        XuatMenu(a,n);
        cout << endl << "Nhap 1 so de chon menu: ";
        cin >> stt;
    } while (stt < 0 || stt > soMenu);

    return stt;
}

void XuLyMenu(int menu, DaySo a, int& n)
{
    int x;
    switch (menu)
    {
    case 1:
        cout << "Nhap x ";
        cin >> x;
        cout << endl << "Vi tri xuat hien dau tien cua " << x << " trong mang la " << FindPosition(a,n,x);
        break;
    case 2:
        cout << endl << "Vi tri cua so nguyen to cuoi cung la " << FindLastPrime(a,n);
        break;
    case 3:
        cout << endl << "So lan xuat hien cua no la " << FindTheMostExist(a, n);
        break;
    case 4:
        cout << endl << "Phan tu nho nhat trong mang la " << FindTheSmallest(a,n);
        break;
    case 5:
        FindThePerfect(a,n);
        break;
    case 6:
        cout << endl << "So am lon nhat trong mang la " << FindTheBiggestNegative(a, n);
        break;
    case 7:
        cout << endl << "So duong nho nhat trong mang la " << FindTheSmallestPositive(a,n);
        break;
    case 8:
        cout << "Nhap x ";
        cin >> x;
        cout << endl << "So gan nhat voi " << x << " la " << FindTheClosest(a,n,x);
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

void ChayChuongTrinh(DaySo a, int n)
{
    int chon;
    const int soMenu = 8;
    do
    {
        chon = ChonMenu(soMenu,a,n);
        XuLyMenu(chon, a, n);
    } while (chon > 0);
}
