#include <iostream>
#include <cmath>
const double epsilon = 1e-15;
using namespace std;
double canbachai(double n);
int main() {
    double n;
    cin >> n;
    if (n < 0) {
        return 1;
    }
    cout << canbachai(n) << endl;
    return 0;
}
double canbachai(double n) {
    double t = n;
    while (fabs(t - n / t) > t * epsilon) {
        t = (t + n / t) / 2.0;
    }
    return t;
}