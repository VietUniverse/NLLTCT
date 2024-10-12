// ===================================================
// Nạp các tập tin thư viện hàm xây dựng sẵn
// ===================================================

#include <iostream>
#include <conio.h>

using namespace std;

// ===================================================
// Nạp các tập tin: thuvien.h, menu.h vào chương trình
// ===================================================
#include "thuvien.h"
#include "menu.h"

// ===================================================
// Định nghĩa hàm main
// ===================================================
int main()
{
	unsigned int n;
	cout << "Nhap so nguyen duong: ";
	cin >> n;
	ChayChuongTrinh(n);

	return 1;
}