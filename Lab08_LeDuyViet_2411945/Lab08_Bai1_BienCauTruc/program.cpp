#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <conio.h>

using namespace std;

#include "thuvien.h"
#include "menu.h"

int main()
{
	MangNV cty = {
		{109,"Nguyen Thanh Van","1C Bui Thi Xuan",{12,3,1988}, 2.6f},
		{208,"Pham Van Nam","56Bis Nguyen Thi Nghia",{6,11,1990},2.3f},
		{327,"Tran Dinh Cong","20 Nguyen Cong Tru", {19,8,1983}, 3.7f},
		{436,"Pham Trung Hieu", "6 Phu Dong Thien Vuong", {16,2,1987}, 2.9f},
		{545,"Doan Chinh Thuan", "11B Dinh Tien Hoang" , {8,8,1988}, 1.6f}
	};
	int sonnv = 5;
	ChayChuongTrinh(cty, sonnv);
	return 0;
}