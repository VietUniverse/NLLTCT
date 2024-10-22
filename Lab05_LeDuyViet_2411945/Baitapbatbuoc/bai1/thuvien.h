typedef int DaySo[100];

int IsPrime(int n);
int	FindPosition(DaySo a, int n, int x);
int FindLastPrime(DaySo a, int n);
int FindTheMostExist(DaySo a, int n);
int FindTheSmallest(DaySo a, int n);
int IsPerfect(int n);
void FindThePerfect(DaySo a, int n);
int FindTheBiggestNegative(DaySo a, int n);
int FindTheSmallestPositive(DaySo a, int n);
int FindTheClosest(DaySo a, int n, int x);

void InputArr(DaySo a,int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}


int IsPrime(int n)
{
	if (n < 2)
		return 0;
	for (int i = 2; i <= (int)sqrt(n); i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int	FindPosition(DaySo a, int n, int x)
{
	for (int i = 0; i < n;i++)
	{
		if (a[i] == x)
			return i + 1;
	}
	return -1;
}

int FindLastPrime(DaySo a, int n)
{
	int res = -1;
	for (int i = 0; i < n; i++)
	{
		if (IsPrime(a[i]))
			res = i + 1;
	}
	return res;
}

int FindTheMostExist(DaySo a, int n)
{
	DaySo temp = { 0 };
	int max = 0, pos = 0;
	for (int i = 0; i < n; i++)
	{
		temp[a[i]] += 1;
	}
	for (int i = 0; i < 100; i++)
	{
		if (max < temp[i])
		{
			max = temp[i];
			pos = i;
		}
	}
	cout << endl << "Phan tu xuat hien nhieu nhat la " << pos;
	return max;
}

int FindTheSmallest(DaySo a, int n)
{
	int res = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] < res)
		{
			res = a[i];
		}
	}
	return res;
}

int IsPerfect(int n)
{
	int sum = 0;
	for (int i = 1; i <= (int)sqrt(n); i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	if (sum == n)
		return 1;
	return 0;
}

void FindThePerfect(DaySo a, int n)
{
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (IsPerfect(a[i]))
			cout << a[i] << "\t";
	}
}

int FindTheBiggestNegative(DaySo a, int n)
{
	int max = -1000000000;
	for (int i = 1; i < n; i++)
	{
		if (a[i] < 0 && a[i] > max)
			max = a[i];
	}
	return max;
}

int FindTheSmallestPositive(DaySo a, int n)
{
	int min = 10000000000;
	for (int i = 1; i < n; i++)
	{
		if (a[i] > 0 && a[i] < min)
			min = a[i];
	}
	return min;
}

int FindTheClosest(DaySo a, int n, int x)
{
	int diff = (a[0] - x > 0) ? a[0] - x : x - a[0], check = -1;
	for (int i = 1; i < n; i++)
	{
		if (a[i] - x > 0)
		{
			if (a[i] - x < diff)
			{
				diff = a[i] - x;
				check = 1;
			}
		}
		else {
			if (x - a[i] < diff)
			{
				diff = x - a[i];
				check = 0;
			}
		}
	}
	if (check == 1)
		return diff + x;
	else if (check == 0)
		return x - diff;
	return check;
}