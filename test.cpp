#include <iostream>
#include <string>

using namespace std;

struct ThietBi
{
    string id;
    string name;
    int year;
};

typedef ThietBi DanhSachThietBi[100];

void NhapThietBi(ThietBi thietBi)
{

}

void SwapStr(ThietBi tb1, ThietBi tb2)
{
    ThietBi temp = tb1;
    tb1 = tb2;
    tb2 = tb1;
}

void ChenTB(DanhSachThietBi ds, int n, string y)
{
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
        {
            if (ds[i].year < ds[j].year)
                SwapStr(ds[i],ds[j]);
            else if (ds[i].year == ds[j].year)
                if (ds[i].name > ds[j].name)
                    SwapStr(ds[i],ds[j]);
        }
}
