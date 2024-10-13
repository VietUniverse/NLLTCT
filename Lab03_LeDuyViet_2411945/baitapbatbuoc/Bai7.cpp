#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

void TinhUocSo(unsigned int n);

int main()
{
    unsigned int n;
    cout << "Nhap vao n: ";
    cin >> n;
    TinhUocSo(n);
    _getch;
    return 1;
}
void TinhUocSo(unsigned int n)
{
    int sum, dem = 0, luyThua;
    cout << "Cac uoc so cua n la: ";
    for (unsigned int i = 1;i <= n;i++)
    {
        if (n % i == 0)
            {
                cout << i;
                if (n != i)
                    cout << ", ";
                dem ++;
                sum += i;
            }
        if (pow(2,i) <= n)
            luyThua = pow(2,i);
    }
    cout << "\nSo luong uoc so la: " << dem << endl;
    cout << "Tong cac uoc so la: " << sum << endl;
    cout << "Can bac 2 cua n la: " << pow(n,0.5) << endl;
    cout << "So lon nhat nho hon hoac bang n ma la luy thua cua 2 la: " << luyThua;
}
