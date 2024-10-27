#define MAX 100
typedef int MaTran[MAX][MAX];

void NhapMang(MaTran a, int n, int m);
void NhapTuDong(MaTran a, int n, int m);
void XuatMang(MaTran a, int n, int m);
void ChuyenVi(MaTran a, int n, int m);
int DinhThuc(MaTran a, int n);

void NhapMang(MaTran a, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl << "Dong thu : " << i << endl;
		for (int j = 0; j < m; j++)
		{
			cout << "a[" << i << " , " << j << "] = ";
			
			cin >> a[i][j];
 		}
	}
}

void NhapTuDong(MaTran a, int n, int m)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			a[i][j] = rand() % MAX - MAX / 2;
		}
	}
}

void XuatMang(MaTran a, int n, int m)
{
	cout << endl << "Cac phan tu cua ma tran : " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl << endl;
}

void ChuyenVi(MaTran a, int n, int m) {
	MaTran temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) 
		{
			temp[j][i] = a[i][j];
		}
	}
	for (int i = 0; i < m; i++) 
	{
		for (int j = 0; j < n; j++) 
		{
			a[i][j] = temp[i][j];
		}
	}
}


int DinhThuc(MaTran a, int n)
{
	return 0;
}