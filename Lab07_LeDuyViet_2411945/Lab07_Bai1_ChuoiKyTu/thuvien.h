#define MAX 100

typedef char Chuoi[MAX];

unsigned int ChieuDai(Chuoi a);

unsigned int ChieuDai(Chuoi a)
{
	unsigned int dem = 0;
	while (a[dem] != NULL)
		dem++;
	return dem;
}

