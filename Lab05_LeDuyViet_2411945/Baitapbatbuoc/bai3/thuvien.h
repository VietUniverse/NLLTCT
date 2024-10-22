typedef int DaySo[100];

int DemSoLe(DaySo a, int n);
int DemSoChiaHet(DaySo a, int n);
int DemXViTriLe(DaySo a, int n, int x);
int DemSo3ChuSo(DaySo a, int n);
int DemSoNgoaiDoan(DaySo a, int n, int min, int max);
int DemSoChinhPhuong(DaySo a, int n);
int DemKXuatHien(DaySo a, int n, int k);
int DemLanXuatHien(DaySo a, int n, int x, int vt);

int KiemTraNguyenTo(int n)
{
    if (n < 2) 
       return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) 
            return 0;
    }
    return 1;
}

void SapSoDuongTangDan(DaySo a, int n) {
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j] && a[i] > 0 && a[j] > 0)
                swap(a[i], a[j]);
        }

    }
}

void SapKhongCuoiTangDan(DaySo a, int n)
{
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
void SapKhongAmDuong(DaySo & a, int n) 
{
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

void SapLeChan(DaySo a, int n) 
{
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

    for (int i = left; i < right; i += 2) {
        int minIndex = i;
        for (int j = i + 2; j <= right; j += 2) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
        swap(a[i], a[minIndex]);
    }

    for (int i = right; i > left; i -= 2) {
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

void SapNguyenToTang(DaySo a, int n) {
    bool isPrime[1000];
    memset(isPrime, true, sizeof(isPrime));

    int left = 0, right = n - 1, i = 0;

    while (i <= right) {
        if (isPrime[a[i]]) {
            swap(a[i], a[left]);
            left++;
            i++;
        }
        else {
            swap(a[i], a[right]);
            right--;
        }
    }
    for (int i = left; i < right; i++) {
        int minIndex = i;
        for (int j = i + 1; j < right; j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
        swap(a[i], a[minIndex]);
    }
}
