#include <iostream>
#include <math.h>

using namespace std;

int ISBN(int n);
int DemChuSo(int n);

int main()
{
    int n;
    cout << "Nhap 9 chu so dau: ";
    cin >> n;

    if (DemChuSo(n) != 9) {
        cout << "So nhap vao phai co dung 9 chu so!" << endl;
        return 1;
    }

    int checkDigit = ISBN(n);
    
    cout << "Chu so cuoi cung cua ISBN la: ";

    if (checkDigit == 10)
    {
        cout << "X" << endl;
        cout << "So ISBN la: " << n << "X" << endl;
    }
    else
    {
        cout << checkDigit << endl;
        cout << "So ISBN la: " << n * 10 + checkDigit << endl;
    }

    return 0;
}

int DemChuSo(int n)
{
    int count = 0;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return count;
}


int ISBN(int n)
{
    int summ = 0, temp = n;

    for (int i = 1; i <= 9; i++)
    {
        int digit = temp / (int)pow(10, 9 - i) % 10; 
        summ += digit * i;                           
    }

    int checkDigit = summ % 11;

    return checkDigit;
}
