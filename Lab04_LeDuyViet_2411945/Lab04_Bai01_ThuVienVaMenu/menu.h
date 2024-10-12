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

// Định nghĩa hàm xuất danh sách chức năng ra màn hình
void XuatMenu()
{
    cout << endl << "======== CHON CHUC NANG ========";
    cout << endl << "1. Chuc nang thu nhat";
    cout << endl << "2. Chuc nang thu hai";
    cout << endl << "3. Chuc nang thu ba";
    cout << endl << "4. Chuc nang thu tu";  // Sửa lại thứ tự chức năng
    cout << endl << "0. Thoat khoi chuong trinh";
    cout << endl << "================================";
}

// Định nghĩa hàm chọn một menu trong danh sách
int ChonMenu(int soMenu)
{
    int stt;
    do
    {
        system("cls");  // Xóa màn hình để tạo giao diện sạch sẽ hơn
        XuatMenu();
        cout << endl << "Nhap 1 so de chon menu: ";
        cin >> stt;
    } while (stt < 0 || stt > soMenu);

    return stt;
}

// Định nghĩa hàm xử lý menu tùy thuộc vào chức năng do người dùng chọn
void XuLyMenu(int menu)
{
    switch (menu)
    {
    case 1:
        cout << endl << "Ban da chon chuc nang 1";
        break;
    case 2:
        cout << endl << "Ban da chon chuc nang 2";
        break;
    case 3:
        cout << endl << "Ban da chon chuc nang 3";
        break;
    case 4:
        cout << endl << "Ban da chon chuc nang 4";
        break;
    default:
        cout << endl << "Thoat khoi chuong trinh";
        break;
    }

    if (menu > 0)
    {
        // Yêu cầu người dùng nhấn phím bất kỳ để tiếp tục
        cout << endl << endl << "Nhan 1 phim bat ky de tiep tuc";
        getch();  // Thay _getch() thành getch() từ conio.h
    }
}

// Định nghĩa hàm chính để chạy chương trình
void ChayChuongTrinh()
{
    int chon;
    const int soMenu = 4;  // Đặt số menu là hằng số để dễ quản lý
    do
    { 
        chon = ChonMenu(soMenu);
        XuLyMenu(chon);
    } while (chon > 0);
}
