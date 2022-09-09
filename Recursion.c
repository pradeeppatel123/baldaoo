// 1. Write a recursive function to print first N natural numbers

/*#include <stdio.h>
void firstN(int n);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    firstN(n);
}
void firstN(int n)
{
    if (n > 0)
    {
        firstN(n - 1);
        printf("%d ", n);
    }
}*/

// 2. Write a recursive function to print first N natural numbers in reverse order

/*#include <stdio.h>
void revNum(int n);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    revNum(n);
    return 0;
}
void revNum(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        revNum(n - 1);
    }
}*/

// 3. Write a recursive function to print first N odd natural numbers
/*#include<stdio.h>
void printOdd(int n);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    printOdd(n);
    return 0;
}
void printOdd(int n)
{
    if(n>0)
    {
        printOdd(n-1);
        printf("%d ",2*n-1);
    }
}*/

// 4. Write a recursive function to print first N odd natural numbers in reverse order

/*#include<stdio.h>
void printOdd(int n);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    printOdd(n);
    return 0;
}
void printOdd(int n)
{
    if(n>0)
    {
        printf("%d ",2*n-1);
        printOdd(n-1);
    }
}*/

// 5. Write a recursive function to print first N even natural numbers
/*#include <stdio.h>
void evenNum(int n);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    evenNum(n);
    return 0;
}
void evenNum(int n)
{
    if (n > 0)
    {
        evenNum(n - 1);
        printf("%d ", 2 * n);
    }
}*/

// 6. Write a recursive function to print first N even natural numbers in reverse order

/*#include <stdio.h>
void evenNum(int n);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    evenNum(n);
    return 0;
}
void evenNum(int n)
{
    if (n > 0)
    {
        printf("%d ", 2 * n);
        evenNum(n - 1);
    }
}*/

// 7. Write a recursive function to print squares of first N natural numbers

/*#include<stdio.h>
void printSquares(int n);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    printSquares(n);
    return 0;
}
void printSquares(int n)
{
    if(n>0)
    {
        printSquares(n-1);
        printf("%d ",n*n);
    }
}*/

// 8. Write a recursive function to print binary of a given decimal number

/*#include <stdio.h>
void printBinary(int n);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    printBinary(n);
    return 0;
}
void printBinary(int n)
{
    if (n > 0)
    {
        printBinary(n / 2);
        printf("%d ", n % 2);
    }
}*/

// 9. Write a recursive function to print octal of a given decimal number

/*#include<stdio.h>
void printOctal(int n);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    printOctal(n);
    return 0;
}
void printOctal(int n)
{
    if(n>0)
    {
        printOctal(n/8);
        printf("%d ",n%8);
    }
}*/

// 10. Write a recursive function to print reverse of a given number

#include<stdio.h>
void reverseNum(int n);
int main()
{
    int n;
    printf("Enter a  number ");
    scanf("%d",&n);
    reverseNum(n);
    return 0;
}
void reverseNum(int n)
{
    if(n>0)
    {
        printf("%d",n%10);
        reverseNum(n/10);
    }
}