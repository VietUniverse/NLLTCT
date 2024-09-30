#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float x,y;
    int n;
    cin >> x >> y >> n;
    cout << pow(x,n) + pow(y,n);
    return 0;
}