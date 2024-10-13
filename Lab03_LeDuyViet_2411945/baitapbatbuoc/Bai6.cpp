#include<iostream>
#include<math.h>

using namespace std;

int KiemTraNguyenTo(int N);
int Xuat_DemNguyenTo(int N);
int TongUocNguyenTo(int N);
void PhanTichThuaSoNT(int N);

int main() {
    int N, soLuongNguyenTo, tongUocNguyenTo;

    cout << "Nhap vao so nguyen N: ";
    cin >> N;

    if (KiemTraNguyenTo(N)) {
        cout << N << " la so nguyen to" << endl;
    }
    
    else {
        cout << N << " khong la so nguyen to" << endl;
    }

    soLuongNguyenTo = Xuat_DemNguyenTo(N);

    cout << "So luong so nguyen to trong khoang tu 1 - " << N << " la " << soLuongNguyenTo;

    tongUocNguyenTo = TongUocNguyenTo(N);

    cout << endl << "Tong cac uoc so nguyen to cua " << N << " la " << tongUocNguyenTo << endl;
    PhanTichThuaSoNT(N);

    return 0;
    
}

int KiemTraNguyenTo(int N) {
    if (N == 1) {
        return false;
    }

    else if (N == 2) {
        return true;
    }

    for (int i = 2; i <= sqrt(N); i++) {
        if (N % i == 0) {
            return false;
        } 
    }

    return true;
}

int Xuat_DemNguyenTo(int N) {
    int counter = 0;

    for (int i = 1; i <= N; i++) {
        if (KiemTraNguyenTo(i)) {
            cout << i << "\t";
            counter++;
        }   
        if (counter % 5 == 0) {
            cout << "\n";
        }

    }
    return counter;
}

int TongUocNguyenTo(int N) {
    int tong = 0;

    for (int i = 1; i <= N / 2; i++) {
        if (N % i == 0 && KiemTraNguyenTo(i)) {
            tong += i;        
        } 
    }

    return tong;
}

void PhanTichThuaSoNT(int N) {
    cout << "Phan tich thua so " << N << " = ";

    if (N == 0 || N == 1) {
        cout << 0;
    }

    else if (N == 2) {
        cout << 2;
    }

    else {
        int A = N, count = 0;

        for (int i = 2; i <= sqrt(N); i++) {
            while (A % i == 0) {
                if (count != 0) {
                    cout << ".";
                }
                    
                A /= i;
                cout << i;

                count++;
            }    

        }

    }

}