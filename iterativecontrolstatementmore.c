//1. Write a program to find the Nth term of the Fibonnaci series. 
/*#include<stdio.h>
int main()
{
    int n,i,a=-1,b=1,c;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    
}*/


//2. Write a program to print first N terms of Fibonacci series

/*#include<stdio.h>
int main()
{
    int n,a=-1,b=1,c,i;
    printf("Enter a number ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("first %d terms of fibonacci series is : ",n);
        printf("%d\n",c);
        a=b;
        b=c;
    }
    return 0;
}*/

/*3. Write a program to check whether a given number is there in the Fibonacci
series or not.*/

/*#include<stdio.h>
int main()
{
    int i,first_num=0,second_num=1,third_num=0 ,n,num;
    printf("Enter the positive number");
    scanf("%d",&num);
    while(third_num<num)
    {
        third_num=first_num+second_num;
        first_num=second_num;
        second_num=third_num;
    }
    

    if(third_num==num)
    printf("your enterd number is under fibbonacci series");
    else
    printf("your enterd number is not under fibbonacci series");

    return 0;
}*/


//4. Write a program to calculate HCF of two numbers

/*#include<stdio.h>
int main()
{
    int a,b,H;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
     for(H=a<b?a:b;H>=1;H--)
     if(a%H==0 && b%H==0)
     break;
    printf("HCF is %d",H);
    return 0;
}*/

/*5. Write a program to check whether two given numbers are co-prime
numbers or not */

/*#include<stdio.h>
int main()
{
    int a,b,i,min;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);

    min=a<b?a:b;
    for(i=2;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
        break;
    }
     if(i==min+1)
    printf("%d and %d are coprime ",a,b);
    else
    printf("%d and %d are not coprime",a,b);
    return 0;
}*/

//6. Write a program to print all Prime numbers under 100

/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<100;i++)
    {
      for(j=2;j<=i;j++)
      {
        if(i%j==0)
        break;
      }
      if(i==j)
        printf(" %d",i);
           
    }
    return 0;
}*/

//7. Write a program to print all Prime numbers between two given numbers

/*#include<stdio.h>
int main()
    {
        int x,y,i,j;
        printf("Enter two numbers");
        scanf("%d%d",&x,&y);

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
        return 0;
    }*/

//8. Write a program to find next Prime number of a given number

/*#include<stdio.h>
 int main()    
{
   int n,i,j,flag=0;

   printf("enter the num\n");

   scanf("%d",&n);

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
         printf("next prime is:%d",i);
         break;
      }
   }

   return 0;

}*/

/*9. Write a program to check whether a given number is an Armstrong number
or not */

/*#include <stdio.h>
int main() {
    int num,r,x, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    x=num;
     while(x!=0)
    {
        r = x% 10;
        
       result += r*r*r;
        
       x=x/10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}*/

//10. Write a program to print all Armstrong numbers under 1000

#include<stdio.h>
int main()
{
    int n,x,rem,arm;
   
    for(n=1;n<1000;n++)
    {
        arm=0;
        x=n;
        while(x>0)
        {
           rem=x%10;
           arm=arm+(rem*rem*rem);
           x=x/10;
        }
         if(arm==n)
          printf("%d ",n);
    }  
}

