#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double M, N, T;
    int n;
    cout << "Nhap gia xe: ";
    cin >> M;
    cout << "Nhap so tien tra truoc: ";
    cin >> N;
    cout << "Nhap lai xuat %: ";
    cin >> T;
    cout << "Nhap so tien moi thang tra: ";
    cin >> n;

    double P = (M - N) / n + (T / 100) * (M - N);
    int monthsToPayOff = round((M - N) / P);
    double lastMonthPayment = M - (monthsToPayOff - 1) * P;

    cout << "So thang can tra het no: " << monthsToPayOff << endl;
    cout << "So tien trong thang cuoi cung: " << lastMonthPayment << endl;

    return 0;
}
