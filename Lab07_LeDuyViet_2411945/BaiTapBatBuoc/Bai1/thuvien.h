#define MAX 100

typedef char Chuoi[MAX];

void XoaX(Chuoi a, char x);
void NoiChuoi(Chuoi a, Chuoi b);
int ChieuDai(Chuoi a);
void DaoChuoi(Chuoi a);
int Palindrome(Chuoi a);
void GhepChuoi(Chuoi a);
void SwapCase(Chuoi a);

void XoaX(Chuoi a, char x)
{
    for (int i = 0; i < ChieuDai(a); i++)
    {
        if (a[i] == x)
            a[i] = a[i+1];
    }
}

void NoiChuoi(Chuoi a, Chuoi b)
{
	int i = ChieuDai(a);
    for (int j = 0; b[j] != NULL; j++) 
        a[i++] = b[j];
    a[i] = NULL;
}

int ChieuDai(Chuoi a)
{
	int len = 0,i = 0;
	while (a[i] != NULL)
	{
		len += 1;
		i++;
	}
	return len;
}

void DaoChuoi(Chuoi a)
{
	Chuoi res;
	int len = ChieuDai(a) - 1,j = 0;
	for (int i = len; a[i] != NULL; i--)
		res[j++] = a[i];
	a = res;
}

int Palindrome(Chuoi a)
{
    int left = 0;
    int right = ChieuDai(a) - 1;
    int isPalindrome = 1;

    while (left < right) 
    {
        while (left < right && !(a[left] >= 'a' && a[left] <= 'z') && !(a[left] >= 'A' && a[left] <= 'Z') && !(a[left] >= '0' && a[left] <= '9')) {
            left++;
        }
        while (left < right && !(a[right] >= 'a' && a[right] <= 'z') && !(a[right] >= 'A' && a[right] <= 'Z') && !(a[right] >= '0' && a[right] <= '9')) {
            right--;
        }

        char leftChar = (a[left] >= 'A' && a[left] <= 'Z') ? a[left] + 32 : a[left];
        char rightChar = (a[right] >= 'A' && a[right] <= 'Z') ? a[right] + 32 : a[right];

        if (leftChar != rightChar) {
            isPalindrome = 0;
            break;
        }

        left++;
        right--;
    }
    return isPalindrome;
}

void GhepChuoi(Chuoi a)
{
    char temp = a[0];
    int len = ChieuDai(a);
    a[len] = temp;
}

void SwapCase(Chuoi a)
{
    int i = 0, check = 0;
    while (a[i] != NULL)
    {
        if (a[i] >= 'A' && a[i] <= 'Z' && check % 2 == 0)
            a[i] -= 32;
        else if (a[i] >= 'a' && a[i] == 'z' && check % 2 != 0)
            a[i] += 32;
        i++;
    }
}
