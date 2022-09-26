/*2. Product of Array Except Self

Problem Statement
Given an integer array nums , return an array answer such that answer[i] is equal to the
product of all the elements of nums except nums[i] .
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
You must write an algorithm that runs in O(n) time and without using the division
operation

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]

Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
*/

#include <iostream>
using namespace std;
void productOfArray(int a[], int size)
{
    int p[size], product = 1;
    for (int i = 0; i < size; i++)
    {
        product = product * a[i];
    }
    for (int i = 0; i < size; i++)
    {
        p[i] = product / a[i];
        cout << p[i] << " ";
    }
}
int main()
{
    int a[] = {1, 2, 3, 4};
    int size = sizeof(a) / sizeof(a[0]);
    productOfArray(a, size);
    return 0;
}
