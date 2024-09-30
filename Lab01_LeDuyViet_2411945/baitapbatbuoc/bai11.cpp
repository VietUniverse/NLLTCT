#include <iostream>
#include <math.h>
using namespace std;

#define PI 3.1415926
 
int main()
{
    int R, h, chuVi, dienTich, Sxq, Stp,V;
    cout << "Nhap R va h ";
    cin >> R >> h;

    chuVi = 2 * PI * R;
    dienTich = PI * pow(R,2);
    Sxq = 2 * PI * R * h;
    Stp = Sxq + 2 * PI * pow(R,2);
    V = dienTich * h;
    cout << "Chu Vi day " << chuVi << endl 
    << "Dien tich day " << dienTich << endl 
    << "Dien tich xung quanh " << Sxq << endl 
    << "Dien tich toan phan " << Stp << endl 
    << "The tich " << V; 
    return 0;
}