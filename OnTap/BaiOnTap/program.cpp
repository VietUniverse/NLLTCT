#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>

using namespace std;

#include "thuvien.h"
#include "menu.h"

int main()
{
	int n = 0;
	DanhSachMatHang ds = {
		{.MaMatHang : ""}
	}
	ChayChuongTrinh(ds, n);
	return 0;
}