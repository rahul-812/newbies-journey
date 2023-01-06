#include <iostream>
using namespace std;

/**
 * @param n the n-th term of factorial number.
 */
int factorial(int n)
{
    int product = 1;

    if (n == 0)
        return 1;

    do
        product = product * n;
    while (--n);

    return product;
}

int main()
{
    cout << factorial(2);
    return 0;
}
