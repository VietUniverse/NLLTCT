unsigned int TimLuyThua(unsigned int b, unsigned int n);
void DoiCoSo(unsigned int n, unsigned int b);
void Xuat(int so);

void Xuat(int so)
{
    cout << so;
}
unsigned int TimLuyThua(unsigned int b, unsigned int n)
{
    unsigned int luyThua; int i = 1;
    while (pow(b, i) <= n)
    {
        luyThua = pow(b, i);
        i++;
    }
    return luyThua;
}


void DoiCoSo(unsigned int n, unsigned int b)
{
    unsigned int v = TimLuyThua(b, n);
    int so;
    while (v > 0)
    {
        if (n < v)
            Xuat(0);
        else {
            so = n / v;
            switch (so)
            {
            case 10:
                cout << "A";
                break;
            case 11:
                cout << "B";
                break;
            case 12:
                cout << "C";
                break;
            case 13:
                cout << "D";
                break;
            case 14:
                cout << "E";
                break;
            case 15:
                cout << "F";
                break;
            case 16:
                cout << 10;
                break;
            default:
                Xuat(so);
                break;
            }
            n = n - so * v;
        }
        v = v / b;
    }
}