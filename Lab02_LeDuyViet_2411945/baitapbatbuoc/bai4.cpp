#include <iostream>
#include <math.h>

using namespace std;

#define PI 3.1415926

double TinhTheTich(int r, int h);
double TinhDienTichXungQuanh(int r, int h);
double TinhDienTichToanPhan(int r, int h, double Sxq);

int main()
{
    int r,h;
    double V, Sxq, Stp;
    cout << "Nhap ban kinh day ";
    cin >> r;
    cout << "Nhap chieu cao ";
    cin >> h;

    V = TinhTheTich(r,h);
    Sxq = TinhDienTichXungQuanh(r,h);
    Stp = TinhDienTichToanPhan(r,h,Sxq);

    cout << "The tich cua hinh tru la " << V << endl << "Dien tich xung quanh cua hinh tru la " << Sxq << endl << "Dien tich toan phan cua hinh tru la " << Stp;

    return 0;


}

double TinhTheTich(int r, int h)
{
    double theTich;
    theTich = pow(r,2) * h * PI;
    return theTich;
}

double TinhDienTichXungQuanh(int r, int h)
{
    double Sxq;
    Sxq = 2 * PI * r * h;
    return Sxq;
}

double TinhDienTichToanPhan(int r, int h, double Sxq)
{
    double Stp;
    Stp = Sxq + 2 * PI * pow(r,2);
    return Stp;
}