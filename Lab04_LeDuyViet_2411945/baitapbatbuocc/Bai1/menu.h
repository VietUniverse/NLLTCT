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
    cout << endl << "======== CHON CHUC NANG ========";
    cout << endl << "1. Xuat cac so tu 1 toi n";
    cout << endl << "2. Dem so luong cac so chia het cho 3 nhung khong chia het cho 4 trong doan [1...n]";
    cout << endl << "3. Dem so luong chu so cua n";
    cout << endl << "4. Dao nguoc so n";
    cout << endl << "5. Tinh tong cac chu so cua n";
    cout << endl << "6. Cho biet chu so dau tien cua n";
    cout << endl << "7. Doi so n sang he nhi phan";
    cout << endl << "8. Kiem tra so hoan hao";
    cout << endl << "9. Xuat cac so hoan hao trong doan [1...n]";
    cout << endl << "10. Tim so nguyen m de tong 1 -> m <= n";
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

void XuLyMenu(int menu, int n)
{
    switch (menu)
    {
    case 1:
        XuatSo(n);
        break;
    case 2:
        cout << DemSo(n);
        break;
    case 3:
        cout << DemChuSo(n);
        break;
    case 4:
        cout << DaoSo(n);
        break;
    case 5:
        cout << TongChuSo(n);
        break;
    case 6:
        cout << DaoSo(n);
        break;
    case 7:
        CoSo2(n);
        break;
    case 8:
        if (SoHoanHao(n))
        {
            cout << n << " la so hoan hao";
        }
        else
        {
            cout << n << " khong la so hoan hao";
        }
        break;
    case 9:
        DemSoHoanHao(n);
        break;
    case 10:
        cout << TimM(n);
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
    int chon,n;
    const int soMenu = 10;
    do
    {
        chon = ChonMenu(soMenu);
        cout << "Nhap n ";
        cin >> n;
        XuLyMenu(chon,n);
    } while (chon > 0);
}