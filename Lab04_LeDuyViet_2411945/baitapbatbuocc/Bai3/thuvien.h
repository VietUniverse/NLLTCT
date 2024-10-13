int KiemTraNguyenTo(int N);
int Xuat_DemNguyenTo(int N);
int TongUocNguyenTo(int N);
void PhanTichThuaSoNT(int N);

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
        cout << "Khong co thua so nguyen to";
        return;
    }

    int A = N;
    bool first = true;

    for (int i = 2; i <= sqrt(N); i++) {
        while (A % i == 0) {
            if (!first) {
                cout << ".";
            }
            cout << i;
            A /= i;
            first = false;
        }
    }

    if (A > 1) {
        if (!first) {
            cout << ".";
        }
        cout << A;
    }

    cout << endl;
}
