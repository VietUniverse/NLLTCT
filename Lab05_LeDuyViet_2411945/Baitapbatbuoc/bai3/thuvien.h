typedef int DaySo[100];

void InputArr(DaySo a, int n);
void SapMangTheoThuTu(DaySo a, int n, int thuTu);
int KiemTraNguyenTo(int n);
void SapSoDuongTangDan(DaySo a, int n);
void SapKhongCuoiTangDan(DaySo a, int n);
void SapKhongAmDuong(DaySo a, int n);
void SapLeChan(DaySo a, int n);
void SapLeChanKhongDoiViTri(DaySo a, int n);
void XaoTronMang(DaySo a, int n);
void SapNguyenToVaKhac(DaySo a, int n);

void InputArr(DaySo a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

void SapMangTheoThuTu(DaySo a, int n, int thuTu) {
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;

        if (thuTu) {
            while (j >= 0 && a[j] > key) {
                a[j + 1] = a[j];
                j--;
            }
        } else {
            while (j >= 0 && a[j] < key) {
                a[j + 1] = a[j];
                j--;
            }
        }

        a[j + 1] = key;
    }
}

int KiemTraNguyenTo(int n) {
    if (n < 2) 
        return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) 
            return 0;
    }
    return 1;
}

void SapSoDuongTangDan(DaySo a, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j] && a[i] > 0 && a[j] > 0)
                swap(a[i], a[j]);
        }
    }
}

void SapKhongCuoiTangDan(DaySo a, int n) {
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            if (i != j) {
                swap(a[i], a[j]);
            }
            j++;
        }
    }
    for (int i = 0; i < j - 1; i++) {
        for (int k = i + 1; k < j; k++) {
            if (a[i] > a[k]) {
                swap(a[i], a[k]);
            }
        }
    }
}
void SapKhongAmDuong(DaySo a, int n) {
    int left = 0, right = n - 1, i = 0;

    while (i <= right) {
        if (a[i] < 0) {
            swap(a[i], a[left]);
            left++;
            i++;
        }
        else if (a[i] > 0) {
            swap(a[i], a[right]);
            right--;
        }
        else {
            i++;
        }
    }
}

void SapLeChan(DaySo a, int n) {
    int left = 0, right = n - 1, i = 0;

    while (i <= right) {
        if (a[i] % 2 != 0) {
            swap(a[i], a[left]);
            left++;
            i++;
        }
        else {
            swap(a[i], a[right]);
            right--;
        }
    }
}

void SapLeChanKhongDoiViTri(DaySo a, int n) 
{
    int left = 0, right = n - 1;

    for (int i = left; i < right; i += 2) 
    {
        int minIndex = i;
        for (int j = i + 2; j <= right; j += 2) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
        swap(a[i], a[minIndex]);
    }

    for (int i = right; i > left; i -= 2) 
    {
        int maxIndex = i;
        for (int j = i - 2; j >= left; j -= 2) {
            if (a[j] > a[maxIndex]) {
                maxIndex = j;
            }
        }
        swap(a[i], a[maxIndex]);
    }
}
void XaoTronMang(DaySo a, int n) 
{
    srand(time(0));
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        swap(a[i], a[j]);
    }
}

void SapNguyenToVaKhac(DaySo a, int n) {
    int left = 0, right = n - 1, i = 0;

    while (i <= right) 
    {
        if (KiemTraNguyenTo(a[i])) 
        {
            swap(a[i], a[left]);
            left++;
            i++;
        }
        else {
            swap(a[i], a[right]);
            right--;
        }
    }
    for (int i = 0; i < left - 1; i++) 
    {
        for (int j = i + 1; j < left; j++) 
        {
            if (a[i] > a[j]) {
                swap(a[i], a[j]);
            }
        }
    }

    for (int i = left; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (a[i] < a[j]) {
                swap(a[i], a[j]);
            }
        }
    }
}
