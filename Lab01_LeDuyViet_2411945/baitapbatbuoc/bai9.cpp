#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a,b,h,p,canhBen,chuVi,dienTich;
    cin >> a >> b >> h;
    p = (a-b) /2;
    canhBen = sqrt(pow(p,2) + pow(h,2));
    chuVi = a + b + 2*canhBen;
    dienTich = ((a + b) * h)/2;
    cout << chuVi << ' ' << dienTich;
    return 0;
}