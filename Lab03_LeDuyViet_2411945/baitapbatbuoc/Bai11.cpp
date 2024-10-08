#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
int SinhSo(int k);
void DoanSo(int so, int k);

int main()
{
    int so,k;
    cout << "Nhap vao so lan doan k: ";
    cin >> k;
    cout << "Nhap vao so suy doan: ";
    cin >> so;
    DoanSo(so, k);
    _getch;
    return 1;
}
int SinhSo(int k)
{
    srand(time(NULL));
    return rand() % (int)pow(2,k);
}
void DoanSo(int so, int k)
{

    int ketQuaCuaMay = SinhSo(k);
    while (k > 0)
    {
        if (so == ketQuaCuaMay)
            {
                cout << "Chuc mung chien thang";
                break;
            }
        else if (so > ketQuaCuaMay)
            {
                cout << "So can doan nho hon";
                cout << "\nNhap lai so suy doan: ";
                cin >> so;
                k--;
            }
        else
            {
                cout << "So can doan lon hon";
                cout << "\nNhap lai so suy doan: ";
                cin >> so;
                k--;
            }
        if (k == 1){
            cout << "Ban da thua";
            break;
        }
    }
}

