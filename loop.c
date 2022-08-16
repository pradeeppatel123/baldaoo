//1. Write a program to calculate sum of first N natural numbers

/*#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the size of N: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    sum=sum+i;
    printf("Sum of first %d natural number is %d\n",n,sum);
    return 0;
}*/

//2. Write a program to calculate sum of first N even natural numbers

/*#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the size of N: ");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
    {
        sum=sum+i;
    }
    printf("Sum of first %d even natural numbers is %d",n,sum);
    
    return 0;
}
*/
//3. Write a program to calculate sum of first N odd natural numbers

/*#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the size of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    sum=sum+i;
    printf("Sum of first %d natural number is %d",n,sum);
    return 0;
}*/

//4. Write a program to calculate sum of squares of first N natural numbers

/*#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the size of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
      sum=sum+i*i;
    printf("sum of squares of first %d natural number is %d",n,sum);
    return 0;
}*/

//5. Write a program to calculate sum of cubes of first N natural numbers

/*#include<stdio.h>
int main()
{
    int i,n,cube=0;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    cube=i*i*i;
    printf("Cube of first %d natural number is %d\n",n,cube);
    }
    return 0;
}*/

//6. Write a program to calculate factorial of a number

/*#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of given numbers is %d",fact);
    return 0;
}*/

//7. Write a program to count digits in a given number

/*#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter a number ");
    scanf("%d",&n);
    do
    {
           n=n/10;
           count++;
    } while(n!=0);
    
    printf("number of digits is %d",count++);
    return 0;
}*/

/*8. Write a program to check whether a given number is a Prime number or
not*/

/*#include<stdio.h>
int main()
{
    int x,i;
    printf("Enter a number ");
    scanf("%d",&x);
    for(i=2;i<=x-1;i++)
        if(x%i==0)
        break;
    if(i==x)
    printf("%d is a prime number",x);
    else
    printf("%d is not a prime number",x);
     return 0;
}*/

//9. Write a program to calculate LCM of two numbers

/*#include<stdio.h>
int main()
{
    int x,y,L;
    printf("Enter two integers ");
    scanf("%d%d",&x,&y);
    for(L=x>y?x:y;L<=x*y;L=L+(x>y?x:y))
    if(L%x==0 && L%y==0)
    break;

    printf("LCM is %d",L);
}*/

//10. Write a program to reverse a given number

#include<stdio.h>
int main()
{
    int x,reverse=0,remainder;
    printf("Enter a number ");
    scanf("%d",&x);
    while(x>0)
    {
        remainder=x%10;
        reverse=reverse*10+remainder;
        x=x/10;
    }
    printf("Reverse to number id %d",reverse);
    return 0;
}