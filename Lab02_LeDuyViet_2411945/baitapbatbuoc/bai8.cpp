#include <iostream>
#include <math.h>

using namespace std;

double WindChill(double t, double v);

int main()
{
    double t,v,w;

    cout << "Nhap nhiet do ";
    cin >> t;
    cout << "Nhap van toc gio ";
    cin >> v;

    w = WindChill(t,v);

    cout << "Do lanh cua gio la " << w;

    return 0;
}

double WindChill(double t, double v)
{
    double w;
    w = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v,0.16);
    return w;
}