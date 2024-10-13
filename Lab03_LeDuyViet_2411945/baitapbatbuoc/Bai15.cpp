#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;
void TraGop(long m, long n, long x, int t);

int main() {
    long m,n,x; int t;
    cout << "Nhap gia xe: ";
    cin >> m;
    cout << "Nhap so tien tra truoc: ";
    cin >> n;
    cout << "Nhap lai xuat %: ";
    cin >> t;
    cout << "Nhap so tien moi thang tra: ";
    cin >> x;
    TraGop(m,n,x,t);
    _getch;
    return 0;
}
void TraGop(long m, long n, long x, int t)
{
    long debt = m - n; int count = 0; long lastPayment;
    while (debt > 0)
    {
        if (debt - x > 0){
            debt -= x;
            debt += debt*t/100;
            count ++;
        }
        else{
            lastPayment = debt;
            break;
        }
    }
    cout << "\nSo thang can de tra het no la: " << count;
    cout << "\nThang cuoi can phai tra so tien la: " << lastPayment;
}
