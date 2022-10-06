/*1. Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number*/
/*#include<iostream>
using namespace std;
class Complex
{
  private:
    int real;
    int img;
  public:
    void set(int r,int i)
    {
        real=r;
        img=i;
    }
    void print(Complex c)
    {
        cout<<real<<"+"<<img<<"i"<<endl;
        cout<<c.real<<"+"<<c.img<<"i"<<endl;
    }
    void add(Complex c)
    {
        cout<<real+c.real<<"+"<<img+c.img<<"i"<<endl;
    }
};
int main()
{
    Complex c1,c2,c3;
    c1.set(5,2);
    c2.set(2,3);

    c1.print(c2);
    c1.add(c2);

    return 0;
}*/
/*2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time.*/

/*#include <iostream>
using namespace std;
class Time
{
private:
    int hour;
    int minute;
    int second;

public:
    void set(int hr, int min, int sec)
    {
        hour = hr;
        minute = min;
        second = sec;
    }
    void display()
    {
        cout << hour << "hr" << minute << "min" << second << "sec" << endl;
    }
};
int main()
{
    Time t1;
    t1.set(3, 45, 20);
    t1.display();
    return 0;
}*/

/*3. Define a class Factorial and define an instance member function to find the Factorial
of a number using class.*/

/*#include <iostream>
using namespace std;
class Factorial
{
private:
    int num;
    int factorial = 1;

public:
    void set(int x)
    {
        num = x;
    }
    void calculateFactorial();
    void show()
    {
        cout << "Factorial : " << factorial << endl;
    }
};
void Factorial::calculateFactorial()
{

    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }
}

int main()
{
    Factorial factorial;
    factorial.set(5);
    factorial.calculateFactorial();
    factorial.show();
}*/

/*4. Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class.*/

/*#include <iostream>
using namespace std;
class LargestNumber
{
private:
    int a, b, c;

public:
void set(int num1,int num2,int num3)
{
    a=num1;
    b=num2;
    c=num3;
}
    void display();
};
void LargestNumber ::display()
{
    if (a > b && b> c)
        cout << "Number a is greater " << a << endl;
    else if (b> a && b > c)
        cout << "Number b is greater " << b << endl;
    else
        cout << "Number c is greater " << c<<endl;
}
int main()
{
    LargestNumber l1, l2, l3;
   l1.set(2,3,4);
   l2.set(5,6,3);
   l3.set(6,3,1);
   l1.display();
   l2.display();
   l3.display();
   return 0;
} */

/*5. Define a class ReverseNumber and define an instance member function to find
Reverse of a Number using class.*/

/*#include <iostream>
using namespace std;
class ReverseNumber
{
private:
    int num;

public:
    void set(int x)
    {
        num = x;
    }
    void showRevNum();
};
void ReverseNumber ::showRevNum()
{
    int rev = 0, dig;
    while (num > 0)
    {
        dig = num % 10;
        rev = rev * 10 + dig;
        num = num / 10;
    }
    cout << "Reverse number is " << rev << endl;
}
int main()
{
    ReverseNumber r1, r2;
    r1.set(324);
    r2.set(4567);
    r1.showRevNum();
    r2.showRevNum();
}*/

/*6. Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called.*/

/*#include <iostream>
using namespace std;

class Square
{
private:
    int n, r;
    float n1, r1;
    static int b;

public:
    void input();
    void cal();
    void display();
};
int Square ::b=0;
void Square ::input()
{
    cout<<"Enter an integer"<<endl;
    cin>>n;
    cout<<"Enter an float number"<<endl;
    cin>>n1;
    b++;
}
void Square ::cal()
{
    r=n*n;
    r1=n1*n1;
    b++;
}
void Square ::display()
{
    cout<<"Square of integer is = "<<r<<endl;
    cout<<"Square of float number is = "<<r1<<endl;
    cout<<"Number of function call is = "<<b;
}
int main()
{
    Square s;
    s.input();
    s.cal();
    s.display();
    return 0;
}*/

/*7. Define a class Greatest and define instance member function to find Largest among
3 numbers using classes.*/

/*#include <iostream>
using namespace std;
class Greatest
{
private:
    int a, b, c;

public:
    void set(int num1, int num2, int num3)
    {
        a = num1;
        b = num2;
        c = num3;
    }
    void display();
};
void Greatest ::display()
{
    if (a > b && b > c)
        cout << "Number a is greater " << a << endl;
    else if (b > a && b > c)
        cout << "Number b is greater " << b << endl;
    else
        cout << "Number c is greater " << c << endl;
}
int main()
{
    Greatest g1,g2,g3;
    g1.set(2, 3, 4);
    g2.set(5, 6, 3);
    g3.set(6, 3, 1);
    g1.display();
    g2.display();
    g3.display();
    return 0;
}*/

/*8. Define a class Rectangle and define an instance member function to find the area of
the rectangle.*/

/*#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
    int Aor = 0;

public:
    void set(int l, int b)
    {
        length = l;
        breadth = b;
    }
    void cal()
    {
        Aor = length * breadth;
    }
    void display()
    {
        cout << "Area of Rectangle is = " << Aor << endl;
    }
};

int main()
{
    Rectangle r;
    r.set(10, 20);
    r.cal();
    r.display();
    return 0;
}*/

/*9. Define a class Circle and define an instance member function to find the area of the
circle.*/

/*#include <iostream>
using namespace std;

class Circle
{
private:
    int r;
    float Aoc = 0.0;
    static float pai;

public:
    void set(int radious)
    {
        r = radious;
    }
    void cal();
    void display();
};
float Circle::pai = 3.14;

void Circle::cal()
{
    Aoc = pai * r * r;
}
void Circle::display()
{
    cout << "Area of Circle is = " << Aoc << endl;
}

int main()
{
    Circle c;
    c.set(5);
    c.cal();
    c.display();
    return 0;
}*/

/*10. Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc.*/

#include <iostream>
using namespace std;

class Area
{
private:
    int a;
    int length, breadth;
    int r;
    int Aos = 0, Aor = 0;
    float Aoc = 0.0;
    static float b;

public:
    void setArm(int arm)
    {
        a = arm;
    }
    void set(int l, int b)
    {
        length = l;
        breadth = b;
    }
    void setRadious(int radious)
    {
        r = radious;
    }
    void areaOfSquare()
    {
        Aos = a * a;
    }
    void areaOfRectangle()
    {
        Aor = length * breadth;
    }
    void displayAreaOfSquare()
    {
        cout << "Area of Square is = " << Aos << endl;
    }
    void displayAreaOfRectangle()
    {
        cout << "Area of Rectagle is = " << Aor << endl;
    }
    void areaOfCircle();
    void displayAreaOfCircle();
};
float Area::b = 3.14;
void Area ::areaOfCircle()
{
    Aoc = b * r * r;
}
void Area ::displayAreaOfCircle()
{
    cout << "Area of Circle is = " << Aoc << endl;
}

int main()
{
    Area s, r, c;
    s.setArm(10);
    s.areaOfSquare();
    s.displayAreaOfSquare();

    r.set(4, 7);
    r.areaOfRectangle();
    r.displayAreaOfRectangle();

    c.setRadious(6);
    c.areaOfCircle();
    c.displayAreaOfCircle();

    return 0;
}
