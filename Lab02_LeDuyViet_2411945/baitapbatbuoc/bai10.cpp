#include <iostream>
#include <math.h>

using namespace std;

double TinhDoCao(double phi, double delta, double h);
double TinhPhuongVi(double phi, double delta, double h, double altitude);

int main()
{
    double phi,delta,h,alt,azim;

    cout << "Nhap vi do cua ngoi sao ";
    cin >> phi;
    cout << "Nhap xich vi do cua ngoi sao ";
    cin >> delta;
    cout << "Nhap mui gio ";
    cin >> h;

    alt = TinhDoCao(phi,delta,h);
    azim = TinhPhuongVi(phi,delta,h,alt);

    cout << "Do cao cua ngoi sao la " << alt << endl << "Phuong vi cua ngoi sao la " << azim;

    return 0;
}

double TinhDoCao(double phi, double delta, double h)
{
    double altitude;
    altitude = asin(sin(phi) * sin(delta) + cos(phi) * cos(delta) * cos(h));
    return altitude;
}

double TinhPhuongVi(double phi, double delta, double h, double altitude)
{
    double azimuth;
    azimuth = acos((cos(phi) * sin(delta) - sin(phi) * cos(delta) * cos(h)) / cos(altitude));
    return azimuth;
}