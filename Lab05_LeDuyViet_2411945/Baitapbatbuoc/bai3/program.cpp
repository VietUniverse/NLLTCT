#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

#include "thuvien.h"
#include "menu.h"

int main()
{
	DaySo a;
	int n;
	cout << "Nhap so phan tu cua mang ";
	cin >> n;
	InputArr(a, n);
	ChayChuongTrinh(a, n);
	return 0;
}