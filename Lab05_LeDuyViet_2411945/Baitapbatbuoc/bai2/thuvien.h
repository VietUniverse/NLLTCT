#define MAX 100
typedef int DaySo[MAX];

void InputArr(DaySo a, int n);
int DemSoLe(DaySo a, int n);
int DemSoChiaHet(DaySo a, int n);
int DemXViTriLe(DaySo a, int n, int x);
int So3ChuSo(int n);
int DemSo3ChuSo(DaySo a, int n);
int DemSoNgoaiDoan(DaySo a, int n, int min, int max);
int SoChinhPhuong(int n);
int DemSoChinhPhuong(DaySo a, int n);
int DemKXuatHien(DaySo a, int n, int k);
int DemLanXuatHien(DaySo a, int n, int x, int vt);

void InputArr(DaySo a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

int DemSoLe(DaySo a, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
			count += 1;
	}
	return count;
}

int DemSoChiaHet(DaySo a, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 3 == 0 && a[i] % 4 != 0)
			count += 1;
	}
	return count;
}

int DemXViTriLe(DaySo a, int n, int x)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x && i % 2 != 0)
			count += 1;
	}
	return count;
}

int So3ChuSo(int n)
{
	int count = 0;
	while (n > 0)
	{
		count += 1;
		n /= 10;
	}
	if (count == 3)
		return 1;
	return 0;
}

int DemSo3ChuSo(DaySo a, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (So3ChuSo(a[i]))
			count += 1;
	}
	return count;
}

int DemSoNgoaiDoan(DaySo a, int n, int min, int max)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min || a[i] > max)
			count += 1;
	}
	return count;
}

int SoChinhPhuong(int n)
{
	if (pow((int)sqrt(n), 2) == n)
		return 1;
	return 0;
}

int DemSoChinhPhuong(DaySo a, int n)
{	
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (SoChinhPhuong(a[i]))
			count += 1;
	}
	return count;
}

int DemKXuatHien(DaySo a, int n,int k)
{
	int count = 0, check = 0, test = 0;
	while (check < n)
	{
		for (int i = 0; i < n; i++)
		{
			if (a[check] == a[i])
				test += 1;
		}
		check += 1;
		if (test >= k)
			count += 1;
	}
	return count;
}

int DemLanXuatHien(DaySo a, int n, int x, int vt)
{
	int count = 0;
	for (int i = vt - 1; i < n; i++)
	{
		if (a[i] == x)
			count += 1;
	}
	return count;
}