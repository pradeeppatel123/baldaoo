//1. Write a function to calculate LCM of two numbers. (TSRS)

/*#include<stdio.h>
int lCM(int ,int );
int main()
{
    int a,b,l;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    l=lCM(a,b);
    printf("Lcm is %d",l);
    return 0;
}
int lCM(int x ,int y)
{
    int l;
    for(l=x>y?x:y;l<=x*y;l=l+(x>y?x:y))
    if(l%x==0 && l%y==0)
    break;
    return(l);
}*/

//2. Write a function to calculate HCF of two numbers. (TSRS)

/*#include<stdio.h>
int HCF(int ,int );
int main()
{
    int a,b,h;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    h=HCF(a,b);
    printf("HCF is = %d",h);
    return 0;
}
int HCF(int x,int y)
{
    int H;
    for(H=x<y?x:y;H>0;H--)
    if(x%H==0 && y%H==0)
    break;
    return(H);
}*/

//3. Write a function to check whether a given number is Prime or not. (TSRS)
/*#include<stdio.h>
int primeOrNot(int );
int main()
{
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    primeOrNot(a);
    return 0;
}
int primeOrNot(int x)
{
    int i;
    for(i=2;i<=x-1;i++)
       if(x%i==0)
         break;
       if(i==x)
         printf("%d is prime",x);
       else
         printf("%d is not prime",x);
}*/

//4. Write a function to find the next prime number of a given number. (TSRS)

/*#include<stdio.h>
int nextPrime(int n);
int main()
{
    int x,nextprime;
    printf("Enter a number: ");
    scanf("%d",&x);
    nextprime=nextPrime(x);
    printf("Next prime number is %d",nextprime);
    return 0;
}
int nextPrime(int n)
{
    int i,j,flag=0;
    for(i=n+1;i<=100;i++)
    {
        flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            return(i);
            break;
        }
    }
}*/

//5. Write a function to print first N prime numbers (TSRN)

/*#include <stdio.h>
void prime(int x)
{
    int i,j;
    for(i=1;i<x;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }
        if(i==j)
        printf("%d ",i);
    }
}

int main()
{
    int n;
    printf("Enter a number ") ;
    scanf("%d",&n);
    prime(n);
}*/

//6. Write a function to print all Prime numbers between two given numbers. (TSRN)
/*#include<stdio.h>
void primeNumber(int ,int );
int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
   primeNumber(a,b);
    return 0;
}
void primeNumber(int x,int y)
{
    int i,j;
    for(i=x+1;i<=y-1;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }
        if(i==j)
        printf("%d ",i);
    }
}*/

//7. Write a function to print first N terms of Fibonacci series (TSRN)

/*#include<stdio.h>
void fibbo(int n);
int main()
{
    int x;
    printf("Enter a number ");
    scanf("%d",&x);
    fibbo(x);
    return 0;
}
void fibbo(int n)
{
    int a=-1,b=1,c=0,i;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}*/


//8. Write a function to print PASCAL Triangle. (TSRN)
/*#include<stdio.h>
int fact(int n)
{
    int f=1;
    while(n>=1)
    {
        f=f*n;
        n--;
    }
    return(f);
}
int combi(int n,int r)
{
    return(fact(n)/fact(n-r)/fact(r));
}
void printPascal(int line)
{
    int i,j,k,r;
    for(i=1;i<=line;i++)
    {
        k=1;r=0;
        for(j=1;j<=2*line-1;j++)
        {
            if(j>=line+1-i && j<=line-1+i && k)
            {
                printf("%4d",combi(i-1,r));
                k=0;r++;
            }
            else
            {
                printf("   ");
                k=1;
            }
        }
        printf("\n");
    }
}
int main()
{
    int line;
    printf("Enter the number of line\n");
    scanf("%d",&line);
    printPascal(line);
    return 0;
}*/

//9. Write a program in C to find the square of any number using the function.
/*#include<stdio.h>
int squre(int );
int main()
{
    int x;
    printf("Enter a number ");
    scanf("%d",&x);
    printf("%d",squre(x));
    return 0;
}
int squre(int n)
{
    return(n*n);
}*/
/*10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
function.*/

#include<stdio.h>
float sumOfSeries()
{
    int n,i;
    
    float sum=0,fact;
    
        fact=1;
        for(i=1;i<=5;i++)
        {
            fact=fact*i;
            sum=sum+(fact/(i*1.0));
        }
   
    return(sum);
}
int main()
{
    float sum;
    
    sum=sumOfSeries();
    printf("%.4f",sum);
    
}
