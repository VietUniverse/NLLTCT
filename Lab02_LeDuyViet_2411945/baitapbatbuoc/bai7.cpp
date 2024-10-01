#include <iostream>
#include <math.h>

using namespace std;

double TinhKhoangCach(double xa, double ya, double xb, double yb);

int main()
{
    double xa,ya,xb,yb,d;

    cout << "Nhap toa do diem B ";
    cin >> xa >> ya;

    cout << "Nhap toa do diem A ";
    cin >> xb >> yb;

    d = TinhKhoangCach(xa,ya,xb,yb);

    cout << "Khoang cach giua 2 diem A va B la " << d;

    return 0;
}

double TinhKhoangCach(double xa, double ya, double xb, double yb)
{
    double d;
    d = sqrt(pow(xb-xa,2) + pow(yb-ya,2));
    return d;
}