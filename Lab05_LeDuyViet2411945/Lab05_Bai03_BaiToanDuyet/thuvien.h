#pragma once
#define MAX 1000
#define TAB '\t'

typedef int DaySo[MAX];


void NhapMang(DaySo a, int n);
void NhapTuDong(DaySo a, int n);
void XuatMang(DaySo a, int n);

void NhapMang(DaySo a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void NhapTuDong(DaySo a, int n)
{
	srand(time(NULL));

	for (int i = 0; i < n;i++)
	{
		a[i] = rand() % MAX - MAX / 2;
	}
}

void XuatMang(DaySo a, int n)
{
	cout << endl << "Cac phan tu cua mang : " << endl;

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << TAB;
	}
	cout << endl << endl;
}

int DemX(DaySo a, int n, int x)
{
	int count = 0;
	
	for (int i = 0;i < n;i++)
	{
		if (a[i] == x)
		{
			count++;
		}
	}
	return count;
}

int TinhTong(DaySo a, int n)
{
	int sum = 0;
	for (int i = 0; i < n;i++)
	{
		sum += a[i];
	}
	return sum;
}

int LaSoNT(int n)
{
	if (n < 2) return 0;
	int m = (int)sqrt((double)n);

	for (int i = 2; i < m; i++)
		if (n % i == 0)
			return 0;
	return 1;
}

int DemVaXuatSoNT(DaySo a, int n)
{
	int dem = 0;

	for(int i = 0; i<n;i++)
		if (LaSoNT(a[i]))
		{
			cout << a[i] << TAB;
			dem += 1;
		}
	cout << endl;
	return dem;
}

void HoanVi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void SapDuongAmKhong(DaySo a, int n)
{
	int condition;

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < i ; j++)
		{
			condition = (a[i] > 0 && a[j] > 0 && a[i] > a[j]) || (a[i] < 0 && a[j] != 0 && a[i] < a[j]) || (a[i] == 0 && a[j] != 0);
			if (condition) HoanVi(a[i], a[j]);
		}
	}
}

