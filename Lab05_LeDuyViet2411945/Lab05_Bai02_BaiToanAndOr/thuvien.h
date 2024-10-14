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
		a[i] = rand() % MAX;
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

int ChuaX(DaySo a, int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			return 1;
		}
	}
	return 0;
}

int LaMangTang(DaySo a, int n)
{
	for (int i = 0;i < n - 1;i++)
	{
		if (a[i] > a[i + 1])
			return 0;
	}
	return 1;
}

int TimMax(DaySo a, int n)
{
	int max = a[0];
	for (int i = 1; i < n;i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	return max;
}

int TimViTriMax(DaySo a, int n)
{
	int vt = 0, max = a[0];
	for (int i = 1; i < n;i++)
	{
		if (max < a[i])
		{
			max = a[i];
			vt = i + 1;
		}
	}
	return vt;
}
