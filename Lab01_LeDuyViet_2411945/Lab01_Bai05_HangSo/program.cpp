#include <iostream>
#include <conio.h>

using namespace std;


// #define MAX 100
// #define KHOA "Cong nghe thong tin"
// #define PI 3.1415926
// #define TAB '\t'

int main()
{
    const int MAX = 100;
    const char KHOA[] = "Cong nghe thong tin";
    const float PI = 3.1415926;
    const char TAB = '\t';
    float r;

    cout << endl << "Nhap ban kinh hinh tron : ";
    cin >> r;
    
    float chuVi, dienTich;

    chuVi = 2 * PI * r;
    dienTich = PI * r * r;

    cout << endl << "Ban kinh : R = " << r
        << ", Chu vi : C = " << chuVi
        << ", Dien tich : S = " << dienTich;

    _getch();
    return 1;
}
