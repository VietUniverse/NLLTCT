#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string>
using namespace std;
#include "thuvien.h"
#include "menu.h"
int main()
{
	DSMatHang ds = {
		{"1209","Sua Hop Vinamilk 220ml",30,7.9,"Sua"},
		{"1030","Sua Hop Vinamilk 110ml",9,4.8,"Sua"},
		{"1109","Banh Cosy 200g",7,22.1,"Banh"},
		{"1890","Banh que huong dau",14,11.8,"Banh"},
		{"1234","Coca Cola 330ml",30,9.9,"Nuoc"},

	};
	ChayChuongTrinh(ds,5);
	return 1;

}