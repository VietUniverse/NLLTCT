#include <iostream>
#include <cmath>
using namespace std;
double laisuat(double N, double L, int T);
int main() 
{
    double N, L;
    int T;
    cin >> N >> L >> T;
    cout << laisuat(N, L, T) << endl;
    return 0;
}
double laisuat(double N, double L, int T) {
    double ketqua = N * pow((1 + L /100), T);

    return ketqua;
}
