//1. Write a program to check whether a given number is positive or non-positive.

/*#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number is ");
    scanf("%d",&x);
    if(x>0){
        printf("Positive");
    }
    if(x<=0){
        printf("Non Positive");
    }
    return 0;
}*/


//2. Write a program to check whether a given number is divisible by 5 or not

/*#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number ");
    scanf("%d",&x);
    if(x%5==0)
      printf("number is divisible by 5");
      else
      printf("number is not divisible ");
      return 0;
}*/

/*3. Write a program to check whether a given number is an even number or an odd
number.*/

/*#include<stdio.h>
int main(){
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    x&1?printf("odd"):printf("even");
    return 0;
}*/

/*4. Write a program to check whether a given number is an even number or an odd
number without using % operator.*/

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

//5. Write a program to check whether a given number is a three-digit number or not.

/*#include<stdio.h>
int main(){
    int x;
    printf("Enter a number ");
    scanf("%d",&x);
    
    if(x>=100 && x<=999)
    printf("Number is three digit");
    else
    printf("number is not three digit");
    return 0;
}*/

/*6. Write a program to print greater between two numbers. Print one number of both are
the same.*/

/*#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two numbers ");
    scanf("%d %d",&x,&y);
    if(x>y)
    printf("x is greater than y");
    else if(y>x)
    printf("y is greater than x");
    else
    printf("both are eqal");
    return 0;
}*/


/*7. Write a program to check whether roots of a given quadratic equation are real &
distinct, real & equal or imaginary roots*/

/*#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,D;
    float x,y,realpart,imgpart;
    printf("Enter cofficient of x^2,x and constant terms ");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-(4*a*c);

    if(D<0){
        printf("both roots are imegnary ");
        realpart=-b/(2*a);
        imgpart=sqrt(-D)/(2*a);
        printf("x=%.2f+%.2fi and y=%.2f-%.2fi",realpart,imgpart,realpart,imgpart);
    }
    if(D==0){
        printf("both roots are equal ");
        x=-b/2*a;
        printf("Roots is %f",x);
    }
    if(D>0){
        printf("both roots are real and distinct ");
        x=(-b+sqrt(D))/(2*a);
        y=(-b-sqrt(D))/(2*a);
        printf("\nRoots are:%f,%f",x,y);

    }
    return 0;
}*/

//8. Write a program to check whether a given year is a leap year or not.

/*#include<stdio.h>
int main(){
    int year;
    
    printf("Enter the year ");
    scanf("%d",&year);

    if(year%4==0 )
    printf("Year is leep year");

    else if(year%400==0)
    printf("Year is leep year");

    else
    printf("Year is not a leep year");

    return 0;
}*/

/*9. Write a program to find the greatest among three given numbers. Print number once
if the greatest number appears two or three times.*/

/*#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c ||a>=b && a>c )
    printf("a is greater number");

    else if(b>a && b>c ||b>a && b>=c)
    printf("b is greater number");
    else if(c>a && c>b || c>=a && c>b)
    printf("c is greater number ");
    else 
    printf("All number are equal");
    return 0;
}*/

/*10. Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage.*/

/*#include<stdio.h>
int main()
{
    float cp,sp,pr,lo,prper,loper;
    printf("Enter the cost price and selling price ");
    scanf("%f%f",&cp,&sp);

    if(cp<sp){
        pr=sp-cp;
        prper=(pr*100)/cp;
        printf("profit percantage is %.2f",prper);
    }
    else if(cp>sp){
        lo=cp-sp;
        loper=(lo*100)/cp;
        printf("Loss percantage is %.2f",loper);
    }
    else
    printf("No proft and No loss");
    return 0;
}*/

/*11. Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.*/

/*#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter the five subject marks out of 100: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    
    if(a>=33 && b>=33 && c>=33 && d>=33 && e>=33)
     printf("Student are passed ");
    else
    printf("Student is failed");
    return 0;

}*/

//12. Write a program to check whether a given alphabet is in uppercase or lowercase.

/*#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character ");
    scanf("%c",&c);
    if(c>='A' && c<='Z')
    printf("character is uppercase");
    if(c>='a' && c<='z')
    printf("charecter is lowercase");

    return 0;
}*/

//13. Write a program to check whether a given number is divisible by 3 and divisible by 2.

/*#include<stdio.h>
int main()
{
    int x;
    printf("Enter a  number");
    scanf("%d",&x);

    if(x%3==0 && x%2==0)
    printf("Number is divisible by 3 and 2");

    else
    printf("Number is not divisible by 3 and 2");
    return 0;
}*/

//14. Write a program to check whether a given number is divisible by 7 or divisible by 3.

/*#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if(n%7==0 || n%3==0)
    printf("Number is divisible by 7 or divisible by 3");
    else
    printf("Number is not divisible by 7 or divisible by 3");
    return 0;

}*/

//15. Write a program to check whether a given number is positive, negative or zero.

/*#include<stdio.h>
int main()
{
    int x;
    printf("Enter  a number ");
    scanf("%d",&x);

    if(x>0)
    printf("Number is positive");
    else if(x<0)
    printf("Number is negative");
    else
    printf("Number is zero");

    return 0;
}*/

/*16. Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.*/

/*#include<stdio.h>
int main()
{
    char x;
    printf("Enter  a character ");
    scanf("%c",&x);

    if(x>='A' && x<='Z')
    printf("character is uppercase");
    else if(x>='a' && x<='z')
    printf("character is lowercase");
    else if(x>='0' && x<='9')
    printf("character is digit");
    else
    printf("character is special character");

    return 0;
}*/

/*17. Write a program which takes the length of the sides of a triangle as an input. Display
whether the triangle is valid or not.*/

/*#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the length of the slides of triangle : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b==c || b+c==a || a+c==b)
    printf("Triangle is valid");
    else
    printf("Triangle is not valid");
    return 0;
}*/

/*18. Write a program which takes the month number as an input and display number of
days in that month*/

/*#include<stdio.h>
int main()
{
    int x;
    printf("Enter a month number ");
    scanf("%d",&x);
    if(x==1 || x==3 || x==5 || x==7 || x==8 || x==10 || x==12)
    printf("Your enter month number days is 31");
    else if(x==4 || x==6 || x==9 || x==11)
    printf("Your enter month number days is 30");
    else
    printf("Your enter month number days is 28 or 29");
    return 0;
}*/