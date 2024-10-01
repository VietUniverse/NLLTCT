#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

#define PI 3.1415926

double TinhChuViHinhTron(double r);
double TinhDienTichHinhTron(double r);

int main()
{
    double r;
    double chuVi,dienTich;

    cout << "Nhap ban kinh R : ";
    cin >> r;

    chuVi = TinhChuViHinhTron(r);
    dienTich = TinhDienTichHinhTron(r);

    cout << endl << "Chu vi hinh tron la : " << chuVi << endl << "Dien tich hinh tron la : " << dienTich;
    return 0;
}

double TinhChuViHinhTron(double r)
{
    double cv;
    cv = 2 * r * PI;
    return cv;
}

double TinhDienTichHinhTron(double r)
{
    double dt;
    dt = pow(r,2) * PI;
    return dt;
}