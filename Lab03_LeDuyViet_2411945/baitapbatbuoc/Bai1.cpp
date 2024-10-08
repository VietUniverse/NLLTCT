#include <iostream>
using namespace std;
void GiaiPhuongTrinhBacHai(double a, double b, int &SoNghiem);
int main() {
    double a, b;
    int SoNghiem;
    cout << "Nhap he so a: ";
    cin >> a;
    cout << "Nhap he so b: ";
    cin >> b;
    GiaiPhuongTrinhBacHai(a, b, SoNghiem);
    if (SoNghiem == 0)
    {
        cout << " Phuong trinh vo so nghiem ";
    }
    else if ( SoNghiem == 1)
    {
        cout << " Phuong trinh vo nghiem ";
    }
    else
    {
        cout << " Phuong trinh co 1 nghiem la : " << (-b) / a ;
    }
    return 0;
}
void GiaiPhuongTrinhBacHai(double a, double b, int &SoNghiem) 
{
    if (a == 0 && b == 0) {
        SoNghiem = 0; //có vô số nghiệm
    } 
    else if (a == 0 && b != 0) 
    {
        SoNghiem = 1; //có vô nghiệm
    } else {
        SoNghiem = 2; //có 1 nghiệm
    }
}