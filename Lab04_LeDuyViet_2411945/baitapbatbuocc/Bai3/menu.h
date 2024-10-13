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
    cout << endl << "1. Kiem tra so nguyen to";
    cout << endl << "2. Xuat cac so nguyen to trong doan [1...n]";
    cout << endl << "3. Dem so luong so nguyen to trong doan [1...n]";
    cout << endl << "4. Tinh tong cac uoc nguyen to cua n";
    cout << endl << "5. Phan tich thua so nguyen to";
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
        if (KiemTraNguyenTo(n))
        {
            cout << n << " la so nguyen to";
        }
        else {
            cout << n << " khong la so nguyen to";
        }
        break;
    case 2:
        Xuat_DemNguyenTo(n);
        break;
    case 3:
        cout << "Co " << Xuat_DemNguyenTo(n) << " trong doan [1...n]";
        break;
    case 4:
        cout << "Tong cac uoc nguyen to cua " << n << " la " << TongUocNguyenTo(n);
        break;
    case 5:
        PhanTichThuaSoNT(n);
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
    const int soMenu = 5;
    do
    {
        chon = ChonMenu(soMenu);
        cout << "Nhap n ";
        cin >> n;
        XuLyMenu(chon, n);
    } while (chon > 0);
}