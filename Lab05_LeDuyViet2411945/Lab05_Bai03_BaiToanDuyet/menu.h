
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
    cout << endl << "4. Dem so lan xuat hien cua x";
    cout << endl << "5. Tinh tong cac phan tu";
    cout << endl << "6. Dem va xuat so nguyen to";
    cout << endl << "7. Sap Duong Tang - Am giam - 0";
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
    int x,res;
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

        res = DemX(a, n, x);

        if (res > 0) cout << endl << "Co " << res << " " << x << " trong mang";
        else cout << "Mang khong chua " << x;
        break;
    case 5:
        cout << "Tong cac phan tu trong danh sach " << TinhTong(a, n);
        break;
    case 6:
        cout << "Danh sach co " << DemVaXuatSoNT(a, n) << " so nguyen to, gom :" << endl;
        DemVaXuatSoNT(a, n);
        break;
    case 7:
        SapDuongAmKhong(a,n);
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
