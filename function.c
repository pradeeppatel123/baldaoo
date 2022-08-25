//1. Write a function to calculate the area of a circle. (TSRS)

/*#include<stdio.h>
float aOc(float );
int main()
{
    float r;
    float A;
    printf("Enter the radius of circle: ");
    scanf("%f",&r);
    A=aOc(r);
    printf("Area of circle is %.2f",A);
    return 0;
}
float aOc(float r)
{
    float aoc;
    aoc=3.14*r*r;
    return (aoc);
 }*/

//2. Write a function to calculate simple interest. (TSRS)

/*#include<stdio.h>
float simpleIntrest(int p,int r,int t);
int main()
{
    int p,r,t;
    float si=0;
     printf("Eneter the value of compound ,rate and time:");
     scanf("%d%d%d",&p,&r,&t);
     si=simpleIntrest(p,r,t);
     printf("The simple intrest is %.2f",si);
     return 0;
}
float simpleIntrest(int p,int r,int t)
{
    float si=0;
    si=(p*r*t)/100.00;
    return(si);
}*/

/*3. Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS)*/

/*#include<stdio.h>
int oddOEven(int );
int main()
{
    int x;
    printf("Enter the number\n");
    scanf("%d",&x);
    oddOEven(x);
    printf("%d",oddOEven(x));
    return 0;
}
int oddOEven(int x)
{
    if(x%2==0)
    return(1);
    else
    return(0);
}*/

//4. Write a function to print first N natural numbers (TSRN)

/*#include<stdio.h>
void nNatural(int );
int main()
{
    int n,i;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    nNatural(n);
    return 0;
}
void nNatural(int n)
{
    int i;
    printf("The %d natural number is:",n);
    for(i=1;i<=n;i++)
    printf("%d ",i);
}*/

//5. Write a function to print first N odd natural numbers. (TSRN)

/*#include<stdio.h>
void nOddNatural(int );
int main()
{
    int n,i;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    nOddNatural(n);
    return 0;
}
void nOddNatural(int n)
{
    int i;
    printf("The %d  natural number is:",n);
    for(i=1;i<=n;i++)
    printf("%d ",2*i-1);
}*/

//6. Write a function to calculate the factorial of a number. (TSRS)
/*#include<stdio.h>
int fact(int );
int main()
{
    int n;//factorial;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    //factorial=fact(n);
    printf("The factorial is %d",fact(n));
    return 0;
}
int fact(int n)
{
    int i,factorial=1;
    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    return(factorial);
}*/

/*7. Write a function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS)*/
/*8. Write a function to calculate the number of arrangements one can make from n items
and r selected at a time. (TSRS)*/
/*9. Write a function to check whether a given number contains a given digit or not.
(TSRS)*/
/*10. Write a function to print all prime factors of a given number. For example, if the
number is 36 then your result should be 2, 2, 3, 3. (TSRN)*/