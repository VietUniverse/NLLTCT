#include <iostream>
using namespace std;
double BMI(double CanNang, double ChieuCao);
int main() 
{
    double w, h, a;
    cout << "Can nang va chieu cao la: ";
    cin >> w >> h;
    a = BMI(w, h);
    if (a < 15)
        cout << "Doi khat";
    else if (a < 17.5)
        cout << "Bieng an";
    else if (a < 18.5)
        cout << "Thieu can";
    else if (a < 25)
        cout << "Ly tuong";
    else if (a < 30)
        cout << "Thua can";
    else if (a < 40)
        cout << "Beo phi";
    else
        cout << "Tre em bi beo phi";
    return 0;
}
double BMI(double CanNang, double ChieuCao) 
{
    return (CanNang / (ChieuCao * ChieuCao));
}
