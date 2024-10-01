#include <iostream>
#include <math.h>

using namespace std;

double TinhCanhBen(int dayLon, int dayBe, int chieuCao);
double TinhChuVi(int dayLon, int dayBe, double canhBen);
double TinhDienTich(int dayLon, int dayBe, int chieuCao);

int main()
{
    int a,b,h;
    double canhBen, chuVi, dienTich;
    
    cout << "Nhap day lon ";
    cin >> a;
    cout << endl << "Nhap day be ";
    cin >> b;
    cout << endl << "Nhap chieu cao ";
    cin >> h;

    canhBen = TinhCanhBen(a,b,h);

    chuVi = TinhChuVi(a,b,canhBen);

    dienTich = TinhDienTich (a,b,h);

    cout << endl << "Chu vi hinh thang la " << chuVi << endl << "Dien tich hinh thang la " << dienTich;


}

double TinhCanhBen(int dayLon, int dayBe, int chieuCao)
{
    double canhBen;
    canhBen = sqrt(pow((dayLon - dayBe)/2,2) + pow(chieuCao,2));
    return canhBen;
}

double TinhChuVi(int dayLon, int dayBe, double canhBen)
{
    double chuVi;
    chuVi = dayLon + dayBe + canhBen;
    return chuVi;
}

double TinhDienTich(int dayLon, int dayBe, int chieuCao)
{
    double dienTich;
    dienTich = (dayLon + dayBe) /2 *chieuCao;
    return dienTich;
}