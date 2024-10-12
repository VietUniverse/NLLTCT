#include <iostream>
#include <math.h>

using namespace std;

double SumH(int n);
double SumS(int n);
double SumT(int n);
double SumU(int n);
double SumF(int n);

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "H: " << SumH(n) << endl;
    cout << "S: " << SumS(n) << endl;
    cout << "T: " << SumT(n) << endl;
    cout << "U: " << SumU(n) << endl;
    cout << "F: " << SumF(n) << endl;
    return 0;

}

double SumH(int n)
{
    double res = 0;
    for(int i = 1; i <= n; i++)
    {
        res += 1/i;
    }
    return res;
}

double SumS(int n)
{
    double res=0;
    for(int i = 1; i <= n; i++)
    {
        res += (i+1)/pow(i,2);
    }
    return res;
}

double SumT(int n)
{
    double res=0;
    for(int i = 1; i <= n; i++)
    {
        res += pow(-1,i)*i/(n+1);
    }
    return res;
}

double SumU(int n)
{
    double res = 0;
    for(int i = 1; i <= n; i++)
    {
        res += 1 / (i * (i + 1)); 
    }
    return res;
}

double SumF(int n)
{
    double res = 0, temp = 1; 
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            temp *= j;
        }

        res += temp;
    }
    return res;
}