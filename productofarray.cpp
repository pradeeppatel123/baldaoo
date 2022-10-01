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
int array(int arr1[],int s)
{
    int pre[s];
    int sup[s];
    pre[0]=arr1[0];
    for(int i=1;i<s;i++){
       pre[i]=pre[i-1]*arr1[i];
    }
    sup[s-1]=arr1[s-1];
     for(int i=s-2;i>=0;i--){
       sup[i]=sup[i+1]*arr1[i];
    }
    
    for(int i=0;i<s;i++){
        if(i==0){
            arr1[i]=sup[i+1];
        }
        else if(i==s-1){
            arr1[i]=pre[i-1];
        }
        else{
            arr1[i]=pre[i-1]*sup[i+1];
        }
    }

    for(int i=0;i<s;i++){
        cout<<arr1[i]<<" ";
    }
    
}
int main()
{
    int a[] = {1,2,3,4};
    int size = sizeof(a) / sizeof(a[0]);
    array(a,size);
    
    return 0;
}
