// 1. Write a function to find the greatest number from the given array of any size. (TSRS)

/*#include<stdio.h>
int max(int a[ ],int );
int main()
{
    int a[20],i,greater;
    greater=max(a,5);
    printf("Greater element is %d",greater);
    return 0;
}
int max(int a[20],int x)
{
    int i,max;
    printf("Enter the number of element in an array: ");
    for(i=0;i<x;i++)
    {
    scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<x;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    return (max);
}*/

// 2. Write a function to find the smallest number from the given array of any size. (TSRS)
/*#include<stdio.h>
int min(int a[ ],int );
int main()
{
    int a[20],i,smallest;
    smallest=min(a,5);
    printf("Greater element is %d",smallest);
    return 0;
}
int min(int a[20],int x)
{
    int i,min;
    printf("Enter the number of element in an array: ");
    for(i=0;i<x;i++)
    {
    scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<x;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    return (min);
}*/

// 3. Write a function to sort an array of any size. (TSRS)

/*#include<stdio.h>
int sortArray(int a[ ],int );
int main()
{
    int a[20];
    sortArray(a,5);
    return 0;
}
int sortArray(int a[ ],int x)
{
    int i,j,temp;
    printf("Enter elements of an array: ");
    for(i=0;i<x;i++)
    scanf("%d",&a[i]);
    for(i=0;i<x;i++)
    {
        for(j=i+1;j<x;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The sorted array is : ");
    for(i=0;i<x;i++)
    printf("%d ",a[i]);
}*/

/*4. Write a function to rotate an array by n position in d direction. The d is an indicative
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )*/

/*#include<stdio.h>
#define LEFT 0
#define RIGHT 1
void display(int a[ ],int n);
void rotate_array(int a[ ],int n,int dir,int shift_count);
int main()
{
    int a[ ]={10,20,30,40,50,60,70,80};
    display(a,8);
    rotate_array(a,8,LEFT,3);
    display(a,8);
}
void display(int a[ ],int n)
{
    int i;
    printf("\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
void rotate_array(int a[ ],int n,int dir,int shift_count)
{
    int i,temp;
    if(dir==RIGHT)
    {
        while(shift_count)
        {
            temp=a[n-1];
            for(i=n-1;i>=1;i--)
            a[i]=a[i-1];
            a[0]=temp;
            shift_count--;
        }
    }
    else
    {
        while(shift_count)
        {
            temp=a[0];
            for(i=0;i<=n-2;i++)
            a[i]=a[i+1];
            a[n-1]=temp;
            shift_count--;
        }
    }
}*/

/*5. Write a function to find the first occurrence of adjacent duplicate values in the array.
Function has to return the value of the element.*/
/*#include <stdio.h>
void sortArray(int a[], int n);
void occurace(int a[], int n);
int main()
{
    int a[10], i, j, n, temp, count = 0;
    printf("Enter the size of array ");
    scanf("%d", &n);
    printf("ENter the array element ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Array element is ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    sortArray(a, n);
    occurace(a, n);
}
void sortArray(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nThe sorted array is : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
void occurace(int a[], int n)
{
    int i, j, count = 0;
    for (i = 0; i < n; i++)
    {
        count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
                count++;
            else
                break;
        }
        if (count > 1)
        {
            printf("\n\nOccurance %d is = %d", a[i], count);
            i += (count - 1);
        }
    }
}*/

/*6. Write a function in C to read n number of values in an array and display it in reverse
order.*/

/*#include <stdio.h>
void printArray(int arr[], int);
void reverseArray(int arr[], int);
int main()
{
    int a[10], i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the values of arrays ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printArray(a, n);
    reverseArray(a, n);
    return 0;
}
void printArray(int arr[], int n)
{
    int i;
    printf("Values of arrays is ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
void reverseArray(int arr[], int n)
{
    int i = 0;
    printf("\n\nReverse values of arrays is ");
    for (i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);
}*/

// 7. Write a function in C to count a total number of duplicate elements in an array.

/*#include <stdio.h>
void findDuplicate(int a[], int n);
int main()
{
    int a[20], i, n;
    printf("Enter the number of array element ");
    scanf("%d", &n);
    printf("Enter the array  element ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Array element is ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    findDuplicate(a, n);
    return 0;
}
void findDuplicate(int a[], int n)
{
    int i, j, count = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
                count++;
            break;
        }
    }
    printf("\n\nThe total number of Duplicate element is = %d", count);
}*/

// 8. Write a function in C to print all unique elements in an array.

/*#include<stdio.h>
void allUniqueElements(int arr[],int size);
int main()
{
    int a[20],n,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter the array element ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    allUniqueElements(a,n);
    return 0;

}
void allUniqueElements(int arr[],int size)
{
    int i,j,count;
    printf("The all unique element are: ");
    for(i=0;i<size;i++)
    {
         count=0;
        for(j=0;j<size+1;j++)
        {
            if(i!=j)
            {
              if(arr[i]==arr[j])
              {
                count++;
              }
            }
        }
        if(count==0)
        {
            printf("%d ",arr[i]);
        }
    }

}*/

/*9. Write a function in C to merge two arrays of the same size sorted in descending
order.*/

/*#include <stdio.h>

void margeArray(int arr1[], int arr2[], int n1, int n2);
int main()
{
    int a1[100], a2[100], n1, n2, i, size;
    printf("Enter the size of first array");
    scanf("%d", &n1);
    printf("Enter the element of first array");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a1[i]);
    }
    printf("Enter the size of  second array");
    scanf("%d", &n2);
    printf("Enter the element of second array");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &a2[i]);
    }
    margeArray(a1, a2, n1, n2);
    return 0;
}
void margeArray(int arr1[100], int arr2[100], int n1, int n2)
{
    int size;
    int a3[200], i, j, k;

    size = n1 + n2;
    for (i = 0; i < n1; i++)
    {
        a3[i] = arr1[i];
    }

    for (j = 0; j < n2; j++)
    {
        a3[i] = arr2[j];
        i++;
    }

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (a3[j] <= a3[j + 1])
            {
                k = a3[j];
                a3[j] = a3[j + 1];
                a3[j + 1] = k;
            }
        }
    }
    printf("Sorted array in decending order is\n ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a3[i]);
    }
}*/
// 10. Write a function in C to count the frequency of each element of an array.

#include <stdio.h>

void frequencyOfElemnet(int arr[], int size);
int main()
{
    int a[20], n, i;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter the element of an array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    frequencyOfElemnet(a, n);
    return 0;
}
void frequencyOfElemnet(int arr[20], int size)
{
    int count = 0, i, j, freq[20];

    for (i = 0; i < size; i++)
    {
        count = 1;
        if (arr[i] != -1)
        {
            for (j = i + 1; j < size; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    arr[j] = -1;
                }
            }
            freq[i] = count;
        }
    }

    printf("\nFrequency of all elements of array : \n");
    for (i = 0; i < size; i++)
    {
        if (arr[i] != -1)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }
}