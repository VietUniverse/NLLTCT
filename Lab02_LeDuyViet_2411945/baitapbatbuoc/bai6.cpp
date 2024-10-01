#include <iostream>
#include <math.h>

using namespace std;

double TinhChiSoBMI(double khoiLuong, double chieuCao);

#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    double m,h,BMI;
    cout << "Nhap can nang ";
    cin >> m;
    cout << "Nhap chieu cao ";
    cin >> h;

    BMI = TinhChiSoBMI(m,h);

    cout << "Chi so BMI la " << BMI;

    return 0;
}

double TinhChiSoBMI(double khoiLuong, double chieuCao)
{
    double BMI;
    BMI = khoiLuong / pow(chieuCao,2);
    return BMI;
}