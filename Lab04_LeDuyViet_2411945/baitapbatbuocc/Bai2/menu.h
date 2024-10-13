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
    cout << endl << "1. Doi sang he nhi phan";
    cout << endl << "2. Doi sang he bat phan";
    cout << endl << "3. Doi sang he co so 7";
    cout << endl << "4. Doi sang he thap luc phan";
    cout << endl << "5. Doi sang he co so bat ky";
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
        DoiCoSo(n,2);
        break;
    case 2:
        DoiCoSo(n, 8);
        break;
    case 3:
        DoiCoSo(n, 7);
        break;
    case 4:
        DoiCoSo(n, 16);
        break;
    case 5:
        int b;
        cout << "Nhap he co so: ";
        cin >> b;
        DoiCoSo(n, b);
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