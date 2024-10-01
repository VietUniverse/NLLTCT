#include <iostream>
#include <math.h>
using namespace std;

#define PI 3.1415926

double TinhDienTichMatCau(int r);
double TinhTheTichKhoiCau(int r);

int main()
{
    int r;
    double V,S;
    cout << "Nhap ban kinh hinh cau ";
    cin >> r;

    V = TinhTheTichKhoiCau(r);
    S = TinhDienTichMatCau(r);

    cout << "The tich mat cau la " << V << endl << "Dien tich mat cau la " << S;

    return 0;

}

double TinhTheTichKhoiCau(int r)
{
    double theTich;
    theTich = (4/3) * PI * pow(r,3);
    return theTich;
}

double TinhDienTichMatCau(int r)
{
    double dienTich;
    dienTich = 4 * PI * pow(r,2);
    return dienTich;
}