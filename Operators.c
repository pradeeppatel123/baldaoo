//1. Write a program to print unit digit of a given number

/*#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number ");
    scanf("%d",&x);
    x=x%10;
    printf("unit digit is %d",x);
    return 0;
}*/

//2. Write a program to print a given number without its last digit.

/*#include<stdio.h>
int main(){
    int x;
    printf("Enter a number ");
    scanf("%d",&x);
    x=x/10;
    printf("number without its last number is %d",x);
    return 0;
}*/

//3. Write a program to swap values of two int variables
/*#include<stdio.h>
int main(){
    int x,y,temp;
    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);
    temp=x;
    x=y;
    y=temp;
   
    printf("value of x is %d and y is %d",x,y);
    return 0;
}*/

//4. Write a program to swap values of two int variables without using a third variable.

/*#include<stdio.h>
int main(){
    int x,y;       
    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);
   x=x+y;
   y=x-y;
   x=x-y;
    printf("value of x is %d and y is %d",x,y);
    return 0;
}*/

//5. Write a program to input a three-digit number and display the sum of the digits.

/*#include<stdio.h>
int main()
{
    int n,r,sum=0;
    printf("Enter three digits number");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("sum is %d",sum);
    return 0;
}*/

//6. Write a program which takes a character as an input and displays its ASCII code.

/*#include<stdio.h>
int main(){
   char x;
   printf("Enter a character: ");
   scanf("%c",&x);
   printf("ASCII CODE is=%d",x);
   return 0; 
}*/

/*7. Write a program to check whether the given number is even or odd using a bitwise
operator.*/

/*#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number ");
    scanf("%d",&x);
    if(x&1)
    printf("number is odd");
    else
    printf("number is even");

    return 0;

}*/

//8. Write a program to print size of an int, a float, a char and a double type variable

/*#include<stdio.h>
int main()
{
     int x=sizeof(int);
     int y=sizeof(float);
     int z=sizeof(double);
     int a=sizeof(char);
     printf("int size is %d\n",x);
     printf("float size is %d\n",y);
     printf("double size is %d\n",z);
     printf("char size is %d\n",a);
     return 0;
}*/

/*9. Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340)*/
/*#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number ");
    scanf("%d",&x);
    x=x/10;
    x=x*10;
    printf("last digit as zero number is=%d",x);
    return 0;
}*/

/*10. Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)*/

/*#include<stdio.h>
int main()
{
    int num,digit;
    printf("Enter a number and digit\n");
    scanf("%d%d",&num,&digit);
    num=num*10;
    num=num+digit;
    printf("resulting number is=%d",num);
    return 0;
}*/

/*11. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.*/

/*#include<stdio.h>
int main()
{
    int inr;
    float usd;
    usd=76.23;
    printf("amount of inr: ");
    scanf("%d",&inr);
    usd=inr/usd;
    printf("your converted amount usd is %.2f",usd);
    return 0;
}*/

/*12. Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right.*/
#include<stdio.h>
int main()
{
    int x,digit,rotate=0;
    printf("enter a number");
    scanf("%d",&x);
    while(x>0)
    {
        digit = x%10;
        rotate = 10*rotate +digit;
        x=x/10; 
    }
    printf("rotate number is %d",rotate);
    return 0;
}