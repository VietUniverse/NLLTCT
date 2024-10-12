#include<iostream>

using namespace std;

double TinhBieuThuc(double x, double y, char k);

int main() {
    double x, y, kq;
    char k;

    do {
        cout << "Nhap vao hai so x, y (x, y khac 0)";
        cin >> x >> y;
    } while (x == 0 || y == 0);

    cout << "Nhap vao ky tu k (+, -, *, /):";
    cin >> k;

    kq = TinhBieuThuc(x, y, k);

    if (kq) {
        cout << "Ket qua cua phep tinh " << x << k << y << " la "
            << kq;
    }
    return 0;
}

double TinhBieuThuc(double x, double y, char k) {
    char plus = "+", minus = "-", multi = "*", divi = "/";

    if (k == plus) {
        return x + y;
    }

    else if (k == minus) {
        return x - y;
    }

    else if (k == multi) {
        return x * y;
    }

    else if (k == divi) {
        return x / y;
    }

    return 0;
}