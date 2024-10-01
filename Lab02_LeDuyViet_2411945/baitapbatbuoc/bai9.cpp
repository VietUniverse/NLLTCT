#include <iostream>
#include <math.h>

using namespace std;
double TimMax(double x, double y);
double TimMax4(double a, double b, double c, double d);

int main()
{
    double a,b,c,d,mmax;

    cout << "Nhap bon so a, b, c, d : ";
    cin >> a >> b >> c >> d;

    mmax = TimMax4(a,b,c,d);
    
    cout << "So lon nhat trong 4 so la " << mmax;
    return 0;

}

double TimMax(double x, double y)
{
    double mmax;
    mmax = (x > y)? x:y;
    return mmax;
}

double TimMax4(double a, double b, double c, double d)
{
    double mmax;
    mmax = (TimMax(a,b) > TimMax(c,d))? TimMax(a,b) : TimMax(c,d);
    return mmax;
}