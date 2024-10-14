
// =======================================================
// Khai báo nguyên mẫu các hàm xử lý menu
// =======================================================

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int &n);
void ChayChuongTrinh(DaySo a, int &n);

// =======================================================
// Định nghĩa các hàm xử lý menu
// =======================================================


void XuatMenu()
{
    cout << endl << "======== CHON CHUC NANG ========";
    cout << endl << "1. Nhap gia tri tu ban phim";
    cout << endl << "2. Nhap gia tri ngau nhien";
    cout << endl << "3. Xuat mang";
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

void XuLyMenu(int menu, DaySo a, int& n)
{
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

void ChayChuongTrinh(DaySo a, int &n)
{
    int chon;
    const int soMenu = 3;
    do
    {
        chon = ChonMenu(soMenu);
        XuLyMenu(chon,a,n);
    } while (chon > 0);
}
