#include <iostream>
#include <cstring>
using namespace std;

/**
 * This function will modify the original string.
 * 
 * @param n The string to be reversed.
 * @returns The reversed form of given string.
 */
char* reverse(char* s)
{
    // for holding chars temporarily
    char temp;

    // tow pointer technique
    int left = 0, right = strlen(s) - 1;

    while(left < right)
    {
        // swapping chars
        temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }

    return s;
}

int main()
{
    char str[50];
    cout << "Enter string : ";
    cin.getline(str, 50);

    cout << "Reversed string : " << reverse(str);
    
    return 0;
}