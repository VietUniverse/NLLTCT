#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int dai, rong, chuVi, dienTich;
    cout << endl << "Nhap chieu dai cua HCN : ";
    cin >> dai;
    cout << endl << "Nhap chieu rong cua HCN : ";
    cin >> rong;

    chuVi = (dai+rong)*2;
    dienTich = dai*rong;

    cout << endl
        << "Chieu dai cua HCN la: " << dai << ","
        << "Chieu rong cua HCN la: " << rong;
        
    cout << endl << "Chu vi cua HCN la : " << chuVi;
    cout << endl << "Dien tich cua HCN : " << dienTich;

    

    _getch();

    return 1;
}