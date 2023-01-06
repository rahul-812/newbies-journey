#include <iostream>
using namespace std;

/**
 * @param n the n-th term of fibonacci series number.
 */
int fibonacci(int n)
{
    int a = 0, b = 1, c = 0;

    // 0 1 1 2 3 5 8 13 21 ...
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c; 
    }
    
    return b;
}

int main()
{
    cout << fibonacci(5);
    return 0;
}