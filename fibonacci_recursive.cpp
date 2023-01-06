#include <iostream>
using namespace std;

/**
 * @param n the n-th term of fibonacci series number.
 */
int fibonacci(int n)
{
    if (n <= 0)
        throw invalid_argument("0 or less");
    if (n <= 1)
        return 0;
    else if (n == 2)
        return 1;

    return fibonacci(n - 2) + fibonacci(n - 1);   
}

int main()
{
    cout << fibonacci(0);
    return 0;
}