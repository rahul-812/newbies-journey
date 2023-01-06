#include <iostream>
using namespace std;

/**
 * @param n the n-th term of factorial number.
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
		return 1;

    return factorial(n-1) * n;
}

int main()
{
	cout << factorial(5);
	return 0;
}