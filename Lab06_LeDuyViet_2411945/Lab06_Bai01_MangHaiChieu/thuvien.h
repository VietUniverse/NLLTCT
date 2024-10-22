#define SIZE 50
#define MAX 1000
#define TAB '\t'

typedef int MaTran[SIZE][SIZE];

void NhapMang(MaTran a, int m, int n);
void NhapTuDong(MaTran a, int m, int n);
void XuatMang(MaTran a, int m, int n);

void NhapMang(MaTran a, int m, int n)
{
	for (int i = 0; i < m;i++)
	{
		cout << endl << "Dong thu : " << i << endl;
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << " , " << j << "] = ";

			cin >> a[i][j];
		}
	}
}

void NhapTuDong(MaTran a, int m, int n)
{
	srand(time(NULL));
	for (int i = 0;i < m;i++)
	{
		for (int j = 0; j < n;j++)
		{
			a[i][j] = rand() % MAX - MAX / 2;
		}
	}
}

void XuatMang(MaTran a, int m, int n)
{
	cout << endl << "Cac phan tu cua ma tran : " << endl;
	for (int i = 0;i < m;i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << TAB;
		}
		cout << endl;
	}
	cout << endl << endl;
}



