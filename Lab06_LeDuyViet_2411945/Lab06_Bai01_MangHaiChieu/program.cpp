#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

#include "thuvien.h"
#include "menu.h"

int main()
{
	MaTran mt;
	int soDong = 0, soCot = 0;
	ChayChuongTrinh(mt, soDong, soCot);
	_getch();

	return 0;
}