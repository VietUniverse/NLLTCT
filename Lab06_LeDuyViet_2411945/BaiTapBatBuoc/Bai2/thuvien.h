#define MAX 100

typedef int MaTran[100][100];

void NhapMang(MaTran a, int n);
void NhapTuDong(MaTran a, int n);
void XuatMang(MaTran a, int n);

void NhapMang(MaTran a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl << "Dong thu : " << i << endl;
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << " , " << j << "] = ";

			cin >> a[i][j];
		}
	}
}

void NhapTuDong(MaTran a, int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % MAX - MAX / 2;
		}
	}
}

void XuatMang(MaTran a, int n)
{
	cout << endl << "Cac phan tu cua ma tran : " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl << endl;
}

void XoanOc(MaTran a, int n) {
	int res = 1, left = 0, right = n - 1, top = 0, bottom = n - 1;
	while (res <= n * n) {
		for (int i = left; i <= right && res <= n * n; i++)
			a[top][i] = res++;
		top++;

		for (int i = top; i <= bottom && res <= n * n; i++)
			a[i][right] = res++;
		right--;

		for (int i = right; i >= left && res <= n * n; i--)
			a[bottom][i] = res++;
		bottom--;

		for (int i = bottom; i >= top && res <= n * n; i--)
			a[i][left] = res++;
		left++;
	}
}

