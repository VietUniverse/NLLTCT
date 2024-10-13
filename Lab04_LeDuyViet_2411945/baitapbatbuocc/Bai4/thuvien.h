

void XuatUoc(unsigned int n) {
	if (n <= 2) {
		cout << 1 << 2;
		return;
	}
	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0) {
			cout << i << " ";
		}
	}
	cout << n;
}

int DemUoc_TinhTongUoc(unsigned int n, int mode) { // mode 0 == return counter // mode 1 == return sum
	int counter = 0, sum = 0;
	if (n <= 2) {
		return (mode == 0) ? 2 : 3;
	}

	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0) {
			counter++;
			sum += i;
		}
	}
	return (mode == 0) ? counter + 1 : sum + n;
}

double TinhCanBacHai(unsigned int n) {
	return pow(n, 0.5);
}

unsigned int LonNhatLuyThua2(unsigned int n) {
	int i = 2;

	while (i * 2 <= n) {
		i *= 2;
	}

	return i;
}