
// =======================================================
// Khai báo nguyên mẫu các hàm xử lý menu
// =======================================================

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int& n);
void ChayChuongTrinh(DaySo a, int& n);

// =======================================================
// Định nghĩa các hàm xử lý menu
// =======================================================


void XuatMenu()
{
    cout << endl << "======== CHON CHUC NANG ========";
    cout << endl << "1. Nhap gia tri tu ban phim";
    cout << endl << "2. Nhap gia tri ngau nhien";
    cout << endl << "3. Xuat mang";
    cout << endl << "4. Kiem tra x nam trong mang a";
    cout << endl << "5. Kiem tra mang a la day tang";
    cout << endl << "6. Tim phan tu lon nhat";
    cout << endl << "7. Tim vi tri phan tu lon nhat";
    cout << endl << "0. Thoat khoi chuong trinh";
    cout << endl << "================================";
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

void XuLyMenu(int menu, DaySo a, int &n)
{
    int x, max, viTri;
    switch (menu)
    {
    case 1:
        cout << endl << "Nhap so phan tu : ";
        cin >> n;

        NhapMang(a, n);
        break;
    case 2:
        cout << endl << "Nhap so phan tu : ";
        cin >> n;

        NhapTuDong(a, n);
        break;
    case 3:
        XuatMang(a, n);
        break;
    case 4:
        cout << endl << "Nhap gia tri x : ";
        cin >> x;

        if (ChuaX(a, n, x)) cout << endl << "Mang co chua " << x;
        else cout << endl << "Mang khong chua " << x;
        break;
    case 5:
        if (LaMangTang(a, n)) cout << endl << "Mang co thu tu tang";
        else cout << endl << "Mang khong co thu tu tang";
        break;
    case 6:
        cout << "Gia tri lon nhat cua mang la " << TimMax(a, n);
        break;
    case 7:
        cout << "Vi tri cua gia tri lon nhat trong mang la " << TimViTriMax(a, n);
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

void ChayChuongTrinh(DaySo a, int& n)
{
    int chon;
    const int soMenu = 7;
    do
    {
        chon = ChonMenu(soMenu);
        XuLyMenu(chon, a, n);
    } while (chon > 0);
}
