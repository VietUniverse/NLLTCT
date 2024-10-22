// =======================================================
// Khai báo nguyên mẫu các hàm xử lý menu
// =======================================================

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int& n);
void ChayChuongTrinh(DaySo a, int n);

// =======================================================
// Định nghĩa các hàm xử lý menu
// =======================================================

void XuatMenu()
{
    cout << endl << "======== CHON CHUC NANG ========";
    cout << endl << "1. Dem so le co trong mang";
    cout << endl << "2. Dem cac so chia het cho 3 nhung khong chia het cho 4 trong mang";
    cout << endl << "3. Dem so lan xuat hien cua x tai vi tri le";
    cout << endl << "4. Dem so luong so co 3 chu so";
    cout << endl << "5. Dem cac so nam ngoai pham vi [min...max] cho truoc";
    cout << endl << "6. Dem so luong so chinh phuong";
    cout << endl << "7. Dem va xuat cac phan tu xuat hien k lan";
    cout << endl << "8. Dem so lan xuat hien cua x ke tu vt";
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
    int x, min, max, vt, k;
    switch (menu)
    {
    case 1:
        cout << "So luong so le trong mang: " << DemSoLe(a, n) << endl;
        break;
    case 2:
        cout << "So luong so chia het cho 3 nhung khong chia het cho 4: " << DemSoChiaHet(a, n) << endl;
        break;
    case 3:
        cout << "Nhap gia tri x: ";
        cin >> x;
        cout << "So lan xuat hien cua " << x << " tai vi tri le: " << DemXViTriLe(a, n, x) << endl;
        break;
    case 4:
        cout << "So luong so co 3 chu so trong mang: " << DemSo3ChuSo(a, n) << endl;
        break;
    case 5:
        cout << "Nhap khoang min: ";
        cin >> min;
        cout << "Nhap khoang max: ";
        cin >> max;
        cout << "So luong phan tu nam ngoai doan [" << min << ", " << max << "]: " << DemSoNgoaiDoan(a, n, min, max) << endl;
        break;
    case 6:
        cout << "So luong so chinh phuong trong mang: " << DemSoChinhPhuong(a, n) << endl;
        break;
    case 7:
        cout << "Nhap so lan xuat hien k: ";
        cin >> k;
        cout << "So luong cac phan tu xuat hien k lan: " << DemKXuatHien(a, n, k) << endl;
        break;
    case 8:
        cout << "Nhap gia tri x: ";
        cin >> x;
        cout << "Nhap vi tri bat dau (vt): ";
        cin >> vt;
        cout << "So lan xuat hien cua " << x << " ke tu vi tri " << vt << ": " << DemLanXuatHien(a, n, x, vt) << endl;
        break;
    default:
        cout << "Thoat khoi chuong trinh" << endl;
        break;
    }

    if (menu > 0)
    {
        cout << endl << "Nhan 1 phim bat ky de tiep tuc";
        _getch();
    }
}

void ChayChuongTrinh(DaySo a, int n)
{
    int menu;
    const int soMenu = 8;
    do
    {
        menu = ChonMenu(soMenu);
        XuLyMenu(menu, a, n);
    } while (menu > 0);
}
