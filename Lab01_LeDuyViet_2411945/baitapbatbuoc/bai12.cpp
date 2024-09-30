#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    const float pi = 3.1415926;
    int r,S;
    float V;
    cout << "Nhap R ";
    cin >> r;
    S = 4 * pi * pow(r,2);
    V = (4/3) * pi * pow(r,3);
    cout << "Dien tich la " << S << endl << "The tich la " << V;
    return 0;
}