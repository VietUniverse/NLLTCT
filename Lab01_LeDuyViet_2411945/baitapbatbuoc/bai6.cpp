#include <iostream>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    x++;
    cout << x << endl;
    x--;
    cout << x << endl;
    ++x;
    cout << x << endl;
    --x;
    cout << x << endl;
    x /= y;
    cout << x << endl;
    y = x % y;
    cout << x << '\t' << y << endl;
    x *= y;
    cout << x;
    return 0;
}