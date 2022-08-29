// 1. Define a function to check whether a given number is a Prime number or not.

/*#include<iostream>
using namespace std;
void primeOrNot(int & );
int main()
{
    int x;
    cout<<"Enter a number";
    cin>>x;
    primeOrNot(x);
    return 0;
}
void primeOrNot(int &n)
{
    int i;
    for( i=2;i<=(n-1);i++)
    {
        if(n%i==0)
        break;
    }
    if(i==n)
    cout<<"Number is prime"<<endl;
    else
    cout<<"Number is not prime";

}*/

// 2. Define a function to find the highest value digit in a given number.
/*#include<iostream>
using namespace std;
void highestd(int n)
{
    int digit,max=0;
    while(n>0)
    {
       digit=n%10;
       if(max<digit)
       {
             max=digit;
       }
       n=n/10;
    }
    cout<<"highest value digit is "<<max<<endl;
}
int main()
{
    int x;
    cout<<"Enter a number "<<endl;
    cin>>x;
    highestd(x);
    return 0;
}*/

// 3. Define a function to calculate x raised to the power y.

/*#include<iostream>
using namespace std;
int power(int x,int y)
{
     int result=1;
     while(y!=0)
     {
        result *= x;
        --y;
     }
     return(result);
}
int main()
{
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"power of x raised y is "<<power(a,b)<<endl;
    return 0;
}*/

// 4. Define a function to print Pascal Triangle up to N lines.

/*#include<iostream>
using namespace std;
int fact(int );
int combi(int ,int);
void printPascal(int line);
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
                cout<<"  "<<combi(i-1,r);
                k=0;r++;
            }
            else
            {
                cout<<"   ";
                k=1;
            }
        }
        cout<<endl;
    }
}
int main()
{
    int line;
    cin>>line;
    printPascal(line);
}*/
/*5. Define a function to check whether a given number is a term in a Fibonacci series or
not.*/
/*#include<iostream>
using namespace std;
int cNumFibb(int num);
int main()
{
    int x;
    cin>>x;
    cNumFibb(x);
    return 0;
}
int cNumFibb(int num)
{
     int a=0,b=1,c=0,i;
    while(c<num)
    {
       c=a+b;
       a=b;
       b=c;
    }
    if(c==num)
    cout<<"Number is under fibbonacci series"<<endl;
    else
    cout<<"number is not under fibbonacci series";
}*/

// 6. Define a function to swap data of two int variables using call by reference

/*#include<iostream>
using namespace std;
int swapNum(int &,int &);
int main()
{
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    swapNum(a,b);
    return 0;
}

int swapNum(int &x,int &y)
{
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"swapped number is "<<x<<" "<<y<<endl;
    
}*/

// 7. Write a function using the default argument that is able to add 2 or 3 numbers.
/*#include<iostream>
using namespace std;
int add(int ,int ,int=0);
int main()
{
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    cout<<"Sum is "<<add(a,b)<<endl;
    int c;
    cout<<"Enter three numbers";
    cin>>a>>b>>c;
    cout<<"sum is three numbers is "<<add(a,b,c);
    return 0;
}
int add(int x,int y,int z)
{
    return(x+y+z);
}*/

/*8. Define overloaded functions to calculate area of circle, area of rectangle and area of
triangle*/
 /*#include<iostream>
 using namespace std;
 int area(int );
 int area(int ,int );
 int areaoftriangle(int ,int  );
 int main()
 {
    int r,a,b,c,h,br;
    cout<<"Enter the radius of circle";
    cin>>r;
    cout<<"Area of circle is"<<" "<<area(r)<<endl;
    cout<<"Enter the height and breght of rectangle";
    cin>>h>>br;
    cout<<"Area of rectangle is "<<" "<<area(h,br)<<endl;
    cout<<"Enter the base and height of triangle";
    cin>>a>>b;
    cout<<"Area of triangle is "<<" "<<areaoftriangle(a,b)<<endl;
    return 0;
 }
 int area(int r)
 {
    return(3.14*r*r);
 }
 int area(int h ,int br)
 {
    return(h*br);
 }
 int areaoftriangle(int a,int b)
 {
    return((a*b)/2);
 }*/

/*9. Write functions using function overloading to find a maximum of two numbers and
both the numbers can be integer or real.*/
/*#include<iostream>
using namespace std;
int max(int ,int );
float max(float ,float );
int main()
{
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    cout<<"Max number is"<<" "<<max(a,b)<<endl;
    float x,y;
    cout<<"Enter two real numbers";
    cin>>x>>y;
    cout<<"Max number is"<<" "<<max(x,y);
    return 0;
}
int max(int a,int b)
{
    if(a>b)
    return(a);
    else
    return(b);
}
float max(float x,float y)
{
    if(x>y)
    return(x);
    else
    return(y);
}*/

// 10. Write functions using function overloading to add two numbers having different data
// types.

/*#include<iostream>
using namespace std;
int add(int ,int);
float add(float,float);
float add(int,float);
int main()
{
    int a,b,c;
    cin>>a>>b;
    cout<<"Sum is"<<add(a,b)<<endl;
    float x,y,z;
    cin>>x>>y;
    cout<<"Sum is "<<add(x,y)<<endl;
    cin>>c>>z;
    cout<<"sum is"<<add(c,z)<<endl;
    return 0;
}
int add(int a,int b)
{
    return(a+b);
}
float add(float x,float y)
{
    return(x+y);
}
float add(int c,float z)
{
    return(c+z);
}*/