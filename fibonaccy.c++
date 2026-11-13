#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

long long fib(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    auto start = high_resolution_clock::now();

    long long result = fib(n);

    auto end = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(end - start);

    cout << "Fibonacci(" << n << ") = " << result << endl;
    cout << "Execution time: " << duration.count()
         << " microseconds" << endl;

    return 0;
}