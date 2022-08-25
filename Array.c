/*1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
array values from the user.*/

/*#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    printf("Enter 10 numbers ");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
        sum+=a[i];
    }
    printf("Sum is %d",sum);
    return 0;
}*/

/*2. Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user.*/

/*#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    float avg=0;
    printf("Enter 10 numbers ");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
        sum+=a[i];
        avg=sum/10.00;
    }
    printf("Average is  %.2f",avg);
    return 0;
}*/

/*3. Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.*/

/*#include<stdio.h>
int main()
{
    int a[10],i,sumeven=0,sumodd=0;
    printf("Enter 10 numbers ");

    for(i=0;i<10;i++)
    scanf("%d",&a[i]);

    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
            sumeven=sumeven+a[i];
        else
            sumodd=sumodd+a[i];
    }
    printf("Sum of even numbes is %d\n",sumeven);
    printf("Sum of odd numbes is %d",sumodd);

    return 0;
}*/

/*4. Write a program to find the greatest number stored in an array of size 10. Take array
values from the user.*/
/*#include<stdio.h>
int main()
{
    int a[10],i,max;
    printf("Enter 10 numbers ");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);

    max=a[0];
    for(i=1;i<10;i++)
    {
       if(a[i]>=max)
       {
        max=a[i];
       }

    }
    printf("greatest number is %d",max);
    return 0;
}*/

/*5. Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.*/
/*#include<stdio.h>
int main()
{
    int a[10],i,min;
    printf("Enter 10 numbers ");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);

    min=a[0];
    for(i=1;i<10;i++)
    {
       if(a[i]<=min)
       {
        min=a[i];
       }

    }
    printf("Smallest number is %d",min);
    return 0;
}*/

/*6. Write a program to sort elements of an array of size 10. Take array values from the
user.*/

#/*include<stdio.h>
int main()
{
    int a[10],i,j,temp;
    printf("Enter 10 numbers ");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
          if(a[i]>a[j])
          {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
          }
        }
    }
    printf("shorted array is ");
    for(i=0;i<10;i++)
    printf("%d ",a[i]);
    return 0;
}*/

//7. Write a program to find second largest in an array.Take array values from the user.
/*#include<stdio.h>
int main()
{
    int a[10],i,large,second_large;
    printf("Enter 10 numbers ");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    large=a[0];
    for(i=1;i<10;i++)
    {
        if(a[i]>large)
        large=a[i];        
    }
    second_large=a[1];
    for(i=0;i<10;i++)
    {
        if(a[i]!=large)
        {
            if(a[i]>second_large)
            second_large=a[i];
        }
    }
    printf("Second largest number is %d",second_large);
    return 0;
}*/

/*8. Write a program to find the second smallest number in an array.Take array values
from the user.*/
/*#include<stdio.h>
int main()
{
    int a[10],i,small,second_small;
    printf("Enter 10 numbers ");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    small=a[0];
    for(i=1;i<10;i++)
    {
        if(a[i]<small)
        small=a[i];        
    }
    second_small=a[1];
    for(i=0;i<10;i++)
    {
        if(a[i]!=small)
        {
            if(a[i]<second_small)
            second_small=a[i];
        }
    }
    printf("Second smallest number is %d",second_small);
    return 0;
}*/

/*9. Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user.*/
/*#include<stdio.h>
int main()
{
    int a[10],i,n;
    printf("Enter the value of n");
    scanf("%d",&n);
    printf("Enter the arrays elements ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=n-1;i>=0;i--)
    {
    printf("%d",a[i]);
    }
    return 0;
}*/

/*10. Write a program in C to copy the elements of one array into another array.Take array
values from the user.*/
#include<stdio.h>
int main()
{
    int a1[10],a2[10],i,n;
    printf("Enter the value of n");
    scanf("%d",&n);
    printf("Enter the arrays elements ");
    for(i=0;i<n;i++)
    scanf("%d",&a1[i]);
    for(i=0;i<n;i++)
    {
    a2[i]=a1[i];
    }
    printf("copied array is ");
    for(i=0;i<n;i++)
    printf("%d ",a2[i]);
    return 0;
}