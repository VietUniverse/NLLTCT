#include <iostream>

using namespace std;

#define MAX 3600
#define SIXTY 60

void DoiThoiGian(unsigned int n);

int main()
{
    int n;
    cout << "Nhap so giay : ";
    cin >> n;
    DoiThoiGian(n);
}

void DoiThoiGian(unsigned int n)
{
    int gio,phut,giay;
    char data;
    gio = n / MAX;
    phut = (n%MAX)/SIXTY;
    giay = (n%MAX)%SIXTY;
    cout << gio << ':' << phut << ':' << giay;
    return;
}