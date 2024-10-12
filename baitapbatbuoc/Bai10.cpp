#include<iostream>

using namespace std;

void TimUocChung(int m, int n);
int TimUCLN(int m, int n);
int TimBCNN(int m, int n);

int main() {
    int n, m;

    cout << "Nhap n va m: ";
    cin >> n >> m;

    cout << "Cac uoc chung cua " << n << " va " << m << " la ";
    TimUocChung(m, n);

    cout << endl << "Uoc chung lon nhat cua " << n << " va " << m << " la " << TimUCLN(m, n);
    
    cout << endl << "Boi chung nho nhat cua " << n << " va " << m << " la " << TimBCNN(m, n);
    return 0;
}

void TimUocChung(int m, int n) {
    if (n > m) {
        for (int i = 1; i <= m; i++) {
            if (n % i == 0 && m % i == 0) {
                cout << i << " ";
            }
        }

    }

    else {
        for (int i = 1; i <= n; i++) {
            if (n % i == 0 && m % i == 0) {
                cout << i << " ";
            }
        }
    }
}
int TimUCLN(int m, int n) {
    if (n == 0 || m == 0) {
        return n + m;
    } 

    else {
        while(n != m) {
            if(n > m) {
                n -= m;
            }

            else {
                m -= n;
            }
        }
    }
    return n;
}

int TimBCNN(int m, int n) {
    return m * n / TimUCLN(m, n);
}

