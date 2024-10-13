int Fibonacci(int n);
void FirstNFibonacci(int n);
void FibonacciInRange(int n);

int Fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    int a = 0, b = 1, fib;
    for (int i = 2; i <= n; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }
    return b;
}
void FirstNFibonacci(int n) {
    int a = 0, b = 1, fib;
    cout << n << " so Fibonacci dau tien la: ";
    for (int i = 1; i <= n; i++) {
        cout << b << " ";
        fib = a + b;
        a = b;
        b = fib;
    }
    cout << endl;
}
void FibonacciInRange(int n) {
    int a = 0, b = 1, fib = 1;
    cout << "Cac so Fibonacci trong doan [1..." << n << "] la: ";
    while (fib <= n) {
        cout << fib << " ";
        fib = a + b;
        a = b;
        b = fib;
    }
    cout << endl;
}
