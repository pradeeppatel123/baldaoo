/* 1. Define a class Complex to represent a complex number with instance variables  a and
 b to store real and imaginary parts. Also define following member functions
 a. void setData(int,int)
 b. void showData()
 c. Complex add(Complex) */

/* #include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    void setData(int r, int i)
    {
        real = r;
        img = i;
    }
    Complex add(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
    void showData()
    {
        cout << "real= " << real << " img= " << img << endl;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.setData(4, 6);
    c2.setData(5, 3);
    c1.showData();
    c2.showData();
    c3 = c1.add(c2);
    c3.showData();
    return 0;
} */

/* 2. Define a class Time to represent a time with instance variables h,m and s to store
hour, minute and second. Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time)
*/

/* #include <iostream>
using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;

public:
    void setTime(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }
    void showTime()
    {
        cout << hour << ":" << minute << ":" << second << endl;
    }
    void normalize()
    {
        minute = minute + second / 60;
        second = second % 60;
        hour = hour + minute / 60;
        minute = minute % 60;
    }
};

int main()
{
    Time t1;
    t1.setTime(5,125,180);
    t1.showTime();

    t1.normalize();
    t1.showTime();

    return 0;
} */

/*3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.*/

/*#include<iostream>
using namespace std;

class Cube
{
private:
    int a,V;
public:
    Cube(int edge)
    {
        a=edge;
    }
    void calVolumeOfCube()
    {
        V=a*a*a;
    }
    void display()
    {
        cout<<"Volume of Cube is = "<<V<<endl;
    }
};

int main()
{
    Cube c(5);
    c.calVolumeOfCube();
    c.display();

    return 0;
}*/

// 4. Define a class Counter and Write a program to Show Counter using Constructor.

/*#include <iostream>
using namespace std;

class Counter
{
private:
    int count;

public:
    Counter()
    {
        count = 0;
    }
    void inc_count()
    {
        count++;
    }
    int get_count()
    {
        return count;
    }
};
int main()
{
    Counter c;
    cout << "Before calling function= ";
    cout<<c.get_count()<<endl;

    c.inc_count();
    cout << "After calling function= ";
    cout<<c.get_count();
    return 0;
}*/

/* 5. Define a class Date and write a program to Display Date and initialise date object using Constructors.*/

/*#include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }

    void displayDate()
    {
        cout << day << "/" << month << "/" << year;
    }
};
int main()
{
    Date d(05, 07, 2002);
    d.displayDate();
    return 0;
}*/

/* 6. Define a class student and write a program to enter student details using constructor  and define member function to display all the details.*/

/*#include<iostream>
using namespace std;

class student
{
private:
    int id_no;
    char name[20];
    int age;
public:
    student()
    {
        int id;
        id_no=id;
        char n[20];
        name[20]=n[20];
        int a;
        age=a;
    }
    void display()
    {
        cout<<"id_no:-"<<id_no<<" name:-"<<name<<" age:-"<<age;
    }
    student input()
    {
        student s;
        cout<<"Enter the student id:- ";
        cin>>id_no;
        fflush(stdin);
        cout<<"Enter the student name:- ";
        fgets(name,20,stdin);
        cout<<"Enter the student age:- ";
        cin>>age;

        return s;
    }
};
int main()
{
    student s[20];
    int n;
    cout<<"Enter the number of students "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    s[i].input();
    for(int i=0;i<n;i++)
    s[i].display();
    return 0;
}*/

/* 7. Define a class Box and write a program to enter length, breadth and height and
initialise objects using constructor also define member functions to calculate volume of the box.*/

/*#include<iostream>
using namespace std;

class Box
{
private:
    int length;
    int breadth;
    int height;
    int Vob=0;
public:
    Box(int l,int b,int h)
    {
        length=l;
        breadth=b;
        height=h;
    }
    void calVolumeOfBox()
    {
        Vob=length*breadth*height;
    }
    void display()
    {
        cout<<"Volume of Box is = "<<Vob<<endl;
    }
};

int main()
{
    Box b(5,6,3);
    b.calVolumeOfBox();
    b.display();

    return 0;
}*/
    
/* 8. Define a class Bank and define member functions to read principal , rate of interest and year. Another member functions to calculate simple interest and display it.Initialise all details using constructor.*/


/*#include<iostream>
using namespace std;

class Bank
{
private:
    int principle;
    int year;
    float si=0.0;
    static int Roi;
public:
    Bank(int p,int y)
    {
        principle=p;
        year=y;
    }
    void calSimpleIntrest();
    void display();
};
int Bank::Roi=5;
void Bank::calSimpleIntrest()
{ 
    si=(principle*Roi*year)/100;
}
void Bank::display()
{
    cout<<"Simple intrest is = "<<si<<endl;
}
int main()
{
    Bank b(5000,3);
    b.calSimpleIntrest();
    b.display();

    return 0;
}*/

/* 9. Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit.*/

/*#include<iostream>
using namespace std;

class Bill
{
private:
    int bill_no;
    char b_h_name[20];
    int units;
    double bill;
public:
    void get()
    {
        cout<<"Enter the bill_no:- ";
        cin>>bill_no;
        fflush(stdin);
        cout<<"Enter bill holder name:- ";
        fgets(b_h_name,20,stdin);
        cout<<"Enter the electricity bill in units:- ";
        cin>>units;
    }
    void calculateBill()
    {
        if(units<=100)
        {
            bill=units*1.20;
        }
        else if(units<=200)
        {
            bill=100*1.20+ (units-100)*2;
        }
        else
        {
            bill=100*1.20 + 200*2 + (units-200)*3;
        }
    }
    void put()
    {
        cout<<"Bill number is= "<<bill_no<<endl;
        cout<<"Bill holder name is= "<<b_h_name<<endl;
        cout<<"Electricity bill in units= "<<units<<endl;
        cout<<"Total Electricity Bill is= "<<bill<<endl;
    }
};
int main()
{
    Bill b;
    b.get();
    b.calculateBill();
    b.put();

    return 0;
}*/

/* 10. Define a class StaticCount and create a static variable. Increment this variable in a function and call this 3 times and display the result.*/

#include<iostream>
using namespace std;
class StaticCount
{
private:
    static int num;
public:
    void increment();
    void display();
};
int  StaticCount::num=0;

void StaticCount::increment()
{
    num++;
}
void StaticCount::display()
{
    cout<<"Result is= "<<num;
}
int main()
{
    StaticCount n;
    n.increment();
    n.increment();
    n.increment();
    n.display();

    return 0;
}