// =======================================================
// Định nghĩa các hằng số và kiểu dữ liệu mới
// =======================================================

double TinhTongR(unsigned int n);
double TinhTongS(unsigned int n);
double TinhTongT(unsigned int n);

// =======================================================
// Khai báo nguyên mẫu các hàm xử lý
// =======================================================


// =======================================================
// Định nghĩa các hàm xử lý
// =======================================================

// Định nghĩa hàm tính tổng 1 + 1/2 + 1/3 + ... + 1/n
// Input : n = một số nguyên dương
// Output: Tổng 1 + 1/2 + 1/3 + ... + 1/n
double TinhTongR(unsigned int n)
{
	double sum = 0;

	for (int i = 1; i <= n; i++)
		sum += 1.0 / i;

	return sum;
}

double TinhTongS(unsigned int n)
{
	double sum = 0;
	for (int i = 1; i <= n; i++)
		sum += (i + 1.0) / pow(i, 2);

	return sum;
}

double TinhTongT(unsigned int n)
{
	double sum = 0;

	for (int i = 1; i <= n; i++)
		if (i % 2 == 0)
			sum += i / (i + 1.0);
		else
			sum -= i / (i + 1.0);

	return sum;
}
