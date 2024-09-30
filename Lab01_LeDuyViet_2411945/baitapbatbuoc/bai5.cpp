#include <iostream>
using namespace std;

int main()
{
    int n,gio,phut,giay;
    const int MAX = 3600, SIXTY = 60;
    cin >> n;
    gio = n / MAX;
    phut = (n%MAX)/SIXTY;
    giay = (n%MAX)%SIXTY;
    cout << gio << ':' << phut << ':' << giay;
    return 0;
}