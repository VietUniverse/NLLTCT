#include <iostream>
#include <math.h>

using namespace std;

#define EPSILON 1e-15

double CanBacHai(double n);

int main() {
    double n;
    cin >> n;
    if (n < 0) {
        return 1;
    }
    cout << CanBacHai(n) << endl;
    return 0;
}
double CanBacHai(double n) {
    double t = n;
    while (fabs(t - n / t) > t * EPSILON) {
        t = (t + n / t) / 2.0;
    }
    return t;
}