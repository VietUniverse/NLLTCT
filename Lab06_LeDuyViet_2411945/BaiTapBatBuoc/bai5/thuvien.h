#define MAX 100

typedef int MaTran[MAX][MAX];

void NhapMang(MaTran a, int n);
void NhapTuDong(MaTran a, int n);
void XuatMang(MaTran a, int n);
int TinhTong(MaTran a, int n);

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

int TinhTong(MaTran a, int n)
{
	int res;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			res += a[i][j];
		}
	}
	return res;
}

int TinhTichBoi3(MaTran a, int n)
{
	int res;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] % 3 == 0)
				res *= a[i][j];
		}
	}
}

