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
    cout << endl << "1. Sap mang a theo thu tu tang hoac giam phu thuoc vao tham so thuTu cho truoc";
    cout << endl << "2. Sap cac so duong tang dan, cac so khac giua nguyen vi tri.";
    cout << endl << "3. Sap cac phan tu sao cho so 0 nam o cuoi mang, cac so khac o dau mang va tang dan";
    cout << endl << "4. Sap cac phan tu sao cho so 0 o dau mang, so am o giua va giam dan, so duong o cuoi va tang.";
    cout << endl << "5. Sap cac so le nam dau mang va tang dan, cac so chan nam cuoi mang va giam dan.";
    cout << endl << "6. Sap cac so le theo thu tu giam dan, so chan tang dan nhung khong thay doi vi tri.";
    cout << endl << "7. Xao tron cac phan tu trong mang mot cach ngau nhien.";
    cout << endl << "8. Sap cac so nguyen to nam dau mang va tang, cac so con lai nam o cuoi va giam dan.";
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

void XuLyMenu(int menu, DaySo a, int& n) {
    int x, min, max, vt, k, thuTu;
    switch (menu) {
    case 1:
        cout << "Nhap 1 de sap xep tang dan hoac 0 de sap xep giam dan: ";
        cin >> thuTu;
        SapMangTheoThuTu(a, n, thuTu);
        cout << "Mang sau khi sap xep: ";
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
        break;
    case 2:
        SapSoDuongTangDan(a, n);
        cout << "Mang sau khi sap xep so duong tang dan: ";
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
        break;
    case 3:
        SapKhongCuoiTangDan(a, n);
        cout << "Mang sau khi sap xep (so 0 o cuoi): ";
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
        break;
    case 4:
        SapKhongAmDuong(a, n);
        cout << "Mang sau khi sap xep (so am giam dan, so 0 o dau): ";
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
        break;
    case 5:
        SapLeChan(a, n);
        cout << "Mang sau khi sap xep (so le tang dan, so chan giam dan): ";
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
        break;
    case 6:
        SapLeChanKhongDoiViTri(a, n);
        cout << "Mang sau khi sap xep (so le giam dan): ";
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
        break;
    case 7:
        XaoTronMang(a, n);
        cout << "Mang sau khi xao tron: ";
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
        break;
    case 8:
        SapNguyenToVaKhac(a, n);
        cout << "Mang sau khi sap xep (so nguyen to tang dan, so con lai giam dan): ";
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
        break;
    default:
        cout << "Thoat khoi chuong trinh" << endl;
        break;
    }

    if (menu > 0) {
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
