#include <iostream>
using namespace std;

/**
 * @param n the number to be reversed.
 */
int reverse(int n) {
    int digit, reversed = 0;

    while (n != 0)
    {
        digit = n % 10;
        reversed = reversed * 10 + digit;    
        n = n / 10;
    }
    
    return reversed;
}

int main()
{
    cout << reverse(-136);
    return 0;
}