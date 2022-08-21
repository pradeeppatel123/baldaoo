//1. Write a C++ program to print Hello MySirG on the screen.

/*#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello MySirG";
    cout<<endl;
}*/

/*2. Write a C++ program to print Hello on the first line and MySirG on the second line
using endl.*/
/*#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello"<<endl;
    cout<<"MySirG";
    cout<<endl;
}*/

//3. Write a C++ program to calculate the sum of two numbers.
/*#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"sum is="<<a+b<<endl;
    cout<<endl;
}*/

//4. Write a C++ program to calculate the area of a circle
/*#include<iostream>
using namespace std;
int main()
{
    float r,Aoc=0;

    cout<<"Enter the Radius of circle"<<endl;
    cin>>r;
    Aoc=3.14*r*r;
    cout<<"Area of circle is= "<<Aoc<<endl;
    cout<<endl;
}*/

//5. Write a C++ program to calculate the volume of a cuboid.
/*#include<iostream>
using namespace std;
int main()
{
    float length ,width,height,voc=0;

    cout<<"Enter the length,width and height of cuboid"<<endl;
    cin>>length>>width>>height;
    voc=length*width*height;
    cout<<"The volume of a cuboid is= "<<voc<<endl;
    cout<<endl;
}*/

//6. Write a C++ program to calculate an average of 3 numbers.

/*#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    float avg=0.0;
    cout<<"Enter three numbers"<<endl;
    cin>>a>>b>>c;
    avg=(a+b+c)/3.0;
    cout<<"Average of three numbers is = "<<avg<<endl;
    cout<<endl;
}*/

//7. Write a C++ program to calculate the square of a number

/*#include<iostream>
using namespace std;
int main()
{
    int x;

    cout<<"Enter an integer"<<endl;
    cin>>x;
    cout<<"Squre of number is = "<<x*x<<endl;
    cout<<endl;
}*/

//8. Write a C++ program to swap values of two int variables without using third variable

/*include<iostream>
using namespace std;
int main()
{
    int x,y;

    cout<<"Enter two integer"<<endl;
    cin>>x>>y;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"value of x= "<<x<<" value of y= "<<y<<endl;
    cout<<endl;
}*/

//9. Write a C++ program to find the maximum of two numbers.

/*#include<iostream>
using namespace std;
int main()
{
    int x,y;

    cout<<"Enter two integer"<<endl;
    cin>>x>>y;
    if(x>y)
    cout<<"X is greater than y"<<endl;
    else
    cout<<"Y is greater than x"<<endl;
    cout<<endl;
}*/

//10. Write a C++ program to add all the numbers of an array of size 10.

#include<iostream>
using namespace std;
int main()
{
    int a[10],i,sum=0;
    cout<<"Enter 10 numbers "<<endl;
    for(i=0;i<10;i++)
    cin>>a[i];
    for(i=0;i<10;i++)
    sum=sum+a[i];

    cout<<"sum is= "<<sum<<endl;
    cout<<endl;
}