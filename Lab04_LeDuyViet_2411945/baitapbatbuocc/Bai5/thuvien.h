#define PRECISION 0.00001

double TimSin(double x);
double TimCos(double x);
double TimE(double x);
double Factorial(int x);


double TimE(double x)
{
	double res=1.0,curr_res = 1.0;
	int i = 1;
	do {
		res = curr_res;
		curr_res += pow(x, i) / Factorial(i);
		i++;
	} while (curr_res - res >= PRECISION);
	//cout << "hello";
	return res;
}

double Factorial(int x)
{
	double fact = 1;
	for (int i=1; i <= x; i++)
	{
		fact *= i;
	}
	return fact;
}

double TimSin(double x)
{
	double res = 0.0, curr_res = 0.0;
	int i = 1,check = 0;
	do {
		res = curr_res;
		if (check % 2 == 0)
		{ 
			curr_res += pow(x, i) / Factorial(i); 
		}
		else {
			curr_res -= pow(x, i) / Factorial(i);
		}
		i+=2;
		check++;
	} while (curr_res - res >= PRECISION);
	return res;
}

double TimCos(double x)
{
	double res = 0.0, curr_res = 0.0;
	int i = 0, check = 0;
	do {
		res = curr_res;
		if (check % 2 == 0)
		{
			curr_res += pow(x, i) / Factorial(i);
		}
		else {
			curr_res -= pow(x, i) / Factorial(i);
		}
		i += 2;
		check++;
	} while (curr_res - res >= PRECISION);
	return res;
}