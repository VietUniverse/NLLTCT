#include <iostream>
#include <math.h>

using namespace std;

float LaiSuat(float n, float L, int t);

int main() 
{
    float n, L;
    int t;
    cin >> n >> L >> t;
    cout << LaiSuat(n, L, t) << endl;
    return 0;
}
float LaiSuat(float n, float L, int t) {
    float ketqua = n * pow((1 + L /100), t);
    return ketqua;
}
