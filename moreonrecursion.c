// 1. Write a recursive function to calculate sum of first N natural numbers

/*#include<stdio.h>
int sumN(int n);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("%d",sumN(n));
    return 0;
}
int sumN(int n)
{
    int sum;
    if(n==0)
    return 0;
    sum=n+sumN(n-1);
    return(sum);
}*/

// 2. Write a recursive function to calculate sum of first N odd natural numbers

/*#include<stdio.h>
int sumOdd(int n);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("%d",sumOdd(n));
    return 0;
}
int sumOdd(int n)
{
    int sum;
    if(n==1)
    return 1;
    sum=2*n-1+sumOdd(n-1);
    return(sum);

}*/

// 3. Write a recursive function to calculate sum of first N odd natural numbers

/*#include <stdio.h>
int sumOdd(int n);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    printf("%d", sumOdd(n));
    return 0;
}
int sumOdd(int n)
{
    int sum;
    if (n == 1)
        return 1;
    sum = 2 * n - 1 + sumOdd(n - 1);
    return (sum);
}*/

// 4. Write a recursive function to calculate sum of squares of first n natural numbers

/*#include <stdio.h>
int sumSquares(int n);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    printf("%d", sumSquares(n));
    return 0;
}
int sumSquares(int n)
{
    int sum;
    if (n == 1)
        return 1;
    sum = n * n + sumSquares(n - 1);
    return (sum);
}*/

// 5. Write a recursive function to calculate sum of digits of a given number
/*#include <stdio.h>
int sumDigits(int n);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    printf("%d", sumDigits(n));
    return 0;
}
int sumDigits(int n)
{
    int sum;
    if (n == 0)
        return 0;
    sum = (n % 10) + sumDigits(n / 10);
    return (sum);
}*/

// 6. Write a recursive function to calculate factorial of a given number
/*#include <stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    printf("%d", fact(n));
    return 0;
}
int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return (n * fact(n - 1));
}*/

// 7. Write a recursive function to calculate HCF of two numbers

/*#include <stdio.h>
int HCF(int x, int y);
int main()
{
    int a, b;
    printf("Enter two numbers ");
    scanf("%d%d", &a, &b);
    printf("%d", HCF(a, b));
    return 0;
}
int HCF(int x, int y)
{
    while (x != y)
    {
        if (x > y)
        {
            return (HCF(x - y, y));
        }
        else
        {
            return (HCF(x, y - x));
        }
    }
    return x;
}*/

// 8. Write a recursive function to print first N terms of Fibonacci series

/*#include<stdio.h>
int fibo(int n);
int main()
{
    int n,i;
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    printf("%d ",fibo(i));
    return 0;
}

int fibo(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return(fibo(n-1)+fibo(n-2));
}*/

// 9. Write a program in C to count the digits of a given number using recursion.

/*#include <stdio.h>
int count(int n);
int main()
{
    int n, c;
    printf("Enter a number ");
    scanf("%d", &n);
    c = count(n);
    printf("%d ", c);
    return 0;
}
int count(int n)
{
    if (n < 10)
        return 1;
    return (1 + count(n / 10));
}*/

// 10. Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>
int Power(int base ,int power);
int main()
{
    int base ,power,result=1;
    printf("Enter the value of base and power ");
    scanf("%d %d",&base,&power);
    result=Power(base,power);
    printf("Power is %d",result);
    return 0;
}
int Power(int base ,int power)
{
    
    if(power==0)
    return 1;
    return(base*Power(base,power-1));
}
