#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c;
    float p,chuVi,dienTich;
    cin >> a >> b >> c;
    chuVi = a+b+c;
    p = chuVi/2.0;
    dienTich = sqrt(p*(p-a)*(p-b)*(p-c));
    cout << dienTich << "\n" << chuVi;
    return 0;
}