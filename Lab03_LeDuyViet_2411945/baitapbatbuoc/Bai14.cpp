#include<iostream>

using namespace std;

float HanhTrinhXeLua(double S, double V, int T, float P);
int main() {
    double M, N, S, gio;
    int T;

    cin >> M >> N >> T >> S;
    gio = HanhTrinhXeLua(M, N, T, S) ; 

    cout << gio;
    return 0;
}

float HanhTrinhXeLua(double S, double V, int T, float P) {
    return (S / V) + (T * P / 60);
}