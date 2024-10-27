#define MAX 100
typedef int MaTran[100][100];

void NhapMang(MaTran a, int n);
void NhapTuDong(MaTran a, int n);
void XuatMang(MaTran a, int n);
int SumS(MaTran a, int n);
int SumT(MaTran a, int n);

void NhapMang(MaTran a, int n)
{
	for (int i = 0; i <n;i++)
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
	for (int i = 0;i < n;i++)
	{
		for (int j = 0; j < n;j++)
		{
			a[i][j] = rand() % MAX - MAX / 2;
		}
	}
}

void XuatMang(MaTran a, int n)
{
	cout << endl << "Cac phan tu cua ma tran : " << endl;
	for (int i = 0;i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << '\t';
		}
		cout << endl;
	}
	cout << endl << endl;
}

int SumS(MaTran a, int n)
{
	int res = 0,temp;
	for (int i = 0; i < n; i++)
	{
		temp = a[i][0];
		for (int j = 1; j < n; j++)
		{
			if (a[i][j] > temp)
				temp = a[i][j];
		}
		res += temp;
	}
	return res;
}

int SumT(MaTran a, int n)
{
	int res = 0, temp;
	for (int j = 0; j < n; j++)
	{
		temp = a[0][j];
		for (int i = 0; i < n; i++)
		{
			if (a[i][j] < temp)
				temp = a[i][j];
		}
		res += temp;
	}
	return res;
}