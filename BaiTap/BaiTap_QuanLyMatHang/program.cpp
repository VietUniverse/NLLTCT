#include <iostream>
#include <string>
#include <conio.h>
#include <iomanip>

using namespace std;

#include "thuvien.h"
#include "menu.h"

int main()
{
	DanhSachMatHang ds = {
	{ "S1209","Sua Hop Vinamilk 220ml",30,7.9,"Sua" },
	{ "S1030","Sua Hop Vinamilk 110ml",9,4.8,"Sua" },
	{ "B1109","Banh Cosy 200g",7,22.1,"Banh" },
	{ "B1890","Banh que huong dau",14,11.8,"Banh" },
	{ "NN234","Coca Cola 330ml",30,9.9,"Nuoc" },
	};
	int n = 5;
	ChayChuongTrinh(ds, n);
	return 0;
}