void PrintMenu();
unsigned int ChooseOption();
void Process(unsigned int option, unsigned int n);
void run();


void PrintMenu() {
	cout << endl << "================================= CHON CHUC NANG ================================";
	cout << endl << "1. Xuat tat ca cac uoc so cua n";
	cout << endl << "2. Dem so luong cac uoc so cua n";
	cout << endl << "3. Tinh tong cac uoc so cua n";
	cout << endl << "4. Tinh can bac 2 cua n";
	cout << endl << "5. SO lon nhat nho hon hoac bang n ma la luy thua cua 2";
	cout << endl << "0. Thoat chuong trinh";
	cout << endl << "=================================================================================";
}

unsigned int ChooseOption() {

	unsigned int option;

	cout << endl << "Nhap chuc nang muon chon: ";
	cin >> option;

	while (option > 5 || option < 0) {
		cout << "Vui long chon lai! ";
		cin >> option;
	}

	return option;

}

void Process(unsigned int option, unsigned int n) {

	switch (option) {
	case 1:
		XuatUoc(n);
		break;

	case 2:
		cout << DemUoc_TinhTongUoc(n, 0);
		break;

	case 3:
		cout << DemUoc_TinhTongUoc(n, 1);
		break;

	case 4:
		cout << TinhCanBacHai(n);
		break;

	case 5:
		cout << LonNhatLuyThua2(n);
		break;

	default:
		break;

	}
}

void run() {
	unsigned int option = 0;
	int n = 0;

	for (;;) {
		system("cls");
		PrintMenu();
		option = ChooseOption();

		if (option != 0) {
			cout << "Nhap vao so n: ";
			cin >> n;
		}
		else {
			break;
		}

		Process(option, n);

		_getch();
	}

}