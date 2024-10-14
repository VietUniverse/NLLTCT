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

