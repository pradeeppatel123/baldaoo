/*1. Pallindrome Integer

Problem Statement
Given an integer x , return true if x is palindrome integer.
An integer is a palindrome when it reads the same backward as forward.
For example, 121 is a palindrome while 123 is not.

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

Example 2:

Input: x = -121
Output: false

CP Problem Statement : 1 2
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. There
fore it is not a palindrome.

Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

Constraints:
-231 <= x <= 231 - 1

Note : Solve it without converting the integer to a string.
*/
#include <iostream>
using namespace std;
bool pallindromenum(int n)
{
    int reverse = 0;
    int num = n;
    while (num != 0)
    {
        reverse = (10 * reverse) + (num % 10);
        num = num / 10;
    }
    if (reverse == n)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    cin >> n;
    if (n < 0)
    {
        cout << "False\n";
        return 0;
    }
    if (pallindromenum(n))
    {
        cout << "True\n";
    }
    else
    {
        cout << "False\n";
    }
    return 0;
}
