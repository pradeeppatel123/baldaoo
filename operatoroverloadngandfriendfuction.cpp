// 1. Define a class Complex with appropriate instance variables and member functions.
// Define following operators in the class:
// a. +
// b. -
// c. *
// d. ==

/*#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    Complex()
    {
    }
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    void display()
    {
        cout << "Real= " << real << " img= " << img << endl;
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
    Complex operator-(Complex c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.img = img - c.img;
        return temp;
    }
    Complex operator*(Complex c)
    {
        Complex temp;
        temp.real = real * c.real;
        temp.img = img * c.img;
        return temp;
    }
    Complex operator==(Complex c)
    {
        Complex temp;
        temp.real=real==c.real;
        temp.img=img==c.img;
        return temp;
    }
};
int main()
{
    Complex c1(5, 6), c2(6, 7), c3, c4, c5, c6;
    c3 = c1 + c2;
    c4 = c1 - c2;
    c5 = c1 * c2;
    c6 = c1 == c2;
    c1.display();
    c2.display();
    c3.display();
    c4.display();
    c5.display();
    c6.display();
    return 0;
}*/

// 2. Write a C++ program to overload unary operators that is increment and decrement.

/*#include <iostream>
using namespace std;

class Number
{
private:
    int num;

public:
    Number()
    {
    }
    Number(int n)
    {
        num = n;
    }
    void display()
    {
        cout << "Number= " << num << endl;
    }
    Number operator++() // Pre increment operator overloading
    {
        Number temp;
        temp.num = ++num;
        return temp;
    }
    Number operator++(int) // Post increment operator overloading
    {
        Number temp;
        temp.num = num++;
        return temp;
    }
    Number operator--()
    {
        Number temp;
        temp.num = --num;
        return temp;
    }
    Number operator--(int)
    {
        Number temp;
        temp.num = num--;
        return temp;
    }
};
int main()
{
    Number n(5);
    n.display();
    (++n).display();
    n.display();
    (--n).display();
    n.display();
    (n++).display();
    n.display();
    (n--).display();
    n.display();
}
* /

/*3. Write a C++ program to add two complex numbers using operator overloaded by a
friend function.*/

/*#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;
public:
    Complex()
    {

    }
    Complex(int r,int i)
    {
        real=r;
        img=i;
    }
    void dispaly()
{
    cout<<"Real= "<<real<<" Img= "<<img<<endl;
}
friend Complex operator+(Complex c1,Complex c2);
};
Complex operator+(Complex c1,Complex c2)
{
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}
int main()
{
    Complex c1(4,5),c2(7,6),add;
    c1.dispaly();
    c2.dispaly();
    add=c1+c2;
    add.dispaly();
    return 0;
}*/

// 4. Create a class Time which contains:
// - Hours
// - Minutes
// - Seconds
// Write a C++ program using operator overloading for the following:
// 1. = = : To check whether two Times are the same or not.
// 2. >> : To accept the time.
// 3. << : To display the time.
// Output -

/*#include <iostream>
#include <stdio.h>

using namespace std;

class Time
{
private:
    int hours, minutes, seconds;

public:
    Time()
    {
        hours = minutes = seconds = 0;
    }
    friend int operator>>(istream &input, Time &t) // Overloading >> Operator
    {
        cout << "\n Enter Hours   :  ";
        input >> t.hours;
        cout << "\n Enter Minutes :  ";
        input >> t.minutes;
        cout << "\n Enter Seconds :  ";
        input >> t.seconds;
        t.minutes = t.minutes + t.seconds / 60;
        t.seconds %= 60;
        t.hours = t.hours + t.minutes / 60;
        t.minutes %= 60;
        if (t.hours >= 25)
            return 1;
        else
            return 0;
    }
    friend void operator<<(ostream &Output, Time &t) // Overloading << Operator
    {
        Output << "\n Hours   :  " << t.hours;
        Output << "\n Minutes :  " << t.minutes;
        Output << "\n Seconds :  " << t.seconds;
    }
    int operator==(Time t1) // Overloading == Operator
    {
        int tot = hours * 3600 + minutes * 60 + seconds;
        int tot1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
        if (tot == tot1)
            return 1;
        else
            return 0;
    }
    ~Time() {}
};
int main()
{
    Time t, t1;
    cout << "\n Enter First Time ";
    cout << "\n -------------------- ";
    if (cin >> t)
    {
        cout << "\n Invalid Time ";
        return 0;
    }
    cout << "\n First Time ";
    cout << t;
    cout << "\n\n Enter Second Time ";
    cout << "\n -------------------- ";
    if (cin >> t1)
    {
        cout << "\n Invalid Time ";
        return 0;
    }
    cout << "\n Second Time ";
    cout << t1;
    if (t == t1)
        cout << "\n\n Times are Same ";
    else
        cout << "\n\n Times are Different ";
    return 0;
}
*/
// 5. Consider following class Numbers
// class Numbers

// {
// int x,y,z;
// public:
// // methods

// };
// Overload the operator unary minus (-) to negate the numbers.

/*#include <iostream>
using namespace std;

class Numbers
{
    int x, y, z;

public:
    void Data()
    {
        cout << "Enter three numbers: \n";
        cout << "-----------------------" << endl;
        cout << "First Number is : ";
        cin >> x;
        cout << "Second number is : ";
        cin >> y;
        cout << "Third number is : ";
        cin >> z;
        cout << "-----------------------" << endl;
    }
    void show()
    {
        cout<<x<<"\t"<<y<<"\t"<<z<<endl;
        cout << "---------------------" << endl;
    }
    void operator-()
    {
        x = -x;
        y = -y;
        z = -z;
    }
};
int main()
{
    Numbers n1;
    n1.Data();
    cout<<"\n Numbers are :\n\n";
    n1.show();
    -n1;
    cout<<"\n\n Negated Numbers are :\n\n";
    n1.show();
}*/

// 6. Create a class CString to represent a string.
// a) Overload the + operator to concatenate two strings.
// b) == to compare 2 strings.

/*#include <iostream>
#include <string.h>
using namespace std;

class CString
{
public:
    char str[20];

public:
    void get_string()
    {
        cout << "\n Enter String : ";
        cin >> str;
    }
    void display()
    {
        cout << str;
    }
    CString operator+(CString x) // Concatenating String
    {
        CString s;
        strcat(str, x.str);
        strcpy(s.str, str);
        return s;
    }
    int operator==(CString &t); // Comparing String
};
int CString::operator==(CString &t)
{
    for (int i = 0; str[i] != '_'; i++)
    {
        for (int j = 0; t.str[j] != '_'; j++)
        {
            if (str[i] == t.str[j])
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
    }
}
int main()
{
    CString str1, str2, str3;
    int result = 0;

    str1.get_string();
    str2.get_string();

    cout << "\n ----------------------------------------------";
    cout << "\n\n First String is           :  ";
    str1.display(); // Displaying First String

    cout << "\n\n Second String is          :  ";
    str2.display(); // Displaying Second String

    cout << "\n ----------------------------------------------";
    str3 = str1 + str2; // String is concatenated. Overloaded '+' operator
    cout << "\n\n Concatenated String is    :  ";
    str3.display();

    result = str1 == str2; // Comparing two strings. Overloaded '==' operator
    if (result == 0)
    {
        cout << "\n\n Both Strings are Equal";
    }
    else
    {
        cout << "\n\n Both Strings are Not Equal";
    }
    return 0;
}*/

// 7. Define a C++ class fraction
// class fraction
// {
// long numerator;
// long denominator;
// Public:
// fraction (long n=0, long d=0);
// }
// Overload the following operators as member or friend:
// a) Unary ++ (pre and post both)
// b) Overload as friend functions: operators << and >>.
// Output-

/*#include <iostream>
#include <stdio.h>
using namespace std;

class fraction
{
private:
    long num, deno;

public:
    fraction(long int n = 0, long int d = 0)
    {
        num = n;
        deno = d;
    }
    friend void operator>>(istream &in, fraction &f)
    {
        cout << "\n Numerator    :   ";
        in >> f.num;
        cout << "\n Denominator  :   ";
        in >> f.deno;
    }
    friend void operator<<(ostream &out, fraction &f)
    {
        out << f.num << "/" << f.deno;
    }
    fraction operator++()
    {
        ++num;
        ++deno;
        return (*this);
    }
    fraction operator++(int s)
    {
        fraction tmp = *this;
        this->num++;
        this->deno++;
        return tmp;
    }
};
int main()
{
    fraction f1, f2;
    cout << "\n f1    :  ";
    cout << f1;
    cout << "\n f2    :  ";
    cout << f2;
    cout << "\n\n Enter 1st Fraction Value \n";
    cin >> f1;
    cout << "\n f1++  :  ";
    f1++;
    cout << f1;
    cout << "\n ++f1  :  ";
    ++f1;
    cout << f1;
    cout << "\n\n Enter 2nd Fraction Value \n";
    cin >> f2;
    f2 = ++f1;
    cout << "\n f2 = ++f1";
    cout << "\n f1    :   ";
    cout << f1;
    cout << "\n f2    :   ";
    cout << f2;
    f2 = f1++;
    cout << "\n\n f2 = f1++";
    cout << "\n f1    :  ";
    cout << f1;
    cout << "\n f2    :  ";
    cout << f2;
    return 0;
}
*/
// 8. Consider a class Matrix
// Class Matrix
// {
// int a[3][3];
// Public:
// //methods;
// };
// Overload the - (Unary) should negate the numbers stored in the object.
// Output -

/*#include <iostream>
using namespace std;
class Matrix
{
    int a[3][3];

public:
    void accept()
    {
        cout << "Enter matrix elements(3 x 3): " << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    void display()
    {
        cout << "Matrix is : " << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << a[i][j] << "\t";
            }
            cout << endl;
        }
    }
    void operator-()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                a[i][j] = -a[i][j];
            }
        }
    }
};
int main()
{
    Matrix m;
    m.accept();
    m.display();
    -m;
    m.display();
}*/

// 9. Consider the following class mystring
// Class mystring
// {
// char str [100];
// Public:
// // methods
// };
// Overload operator “!” to reverse the case of each alphabet in the string
// (Uppercase to Lowercase and vice versa).

/*#include <iostream>
#include <string.h>
using namespace std;

class mystring
{
    char str[500];

public:
    void operator!(); // Overloaded '!' Operator
    void accept_string()
    {
        cout << "\n Enter String  :  ";
        cin >> str;
    }
    void display_string()
    {
        cout << str;
    }
};
void mystring::operator!()
{
    for (int i = 0; str[i] != '_'; i++)
    {
        if (str[i] >= 65 && str[i] <= 96)
        {
            str[i] = str[i] + 32;
        }
        else if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
    }
    cout << "\n\n Reverse Case String is  :  " << str;
}
int main()
{
    mystring s1;
    s1.accept_string();
    cout << "\n\n String is  :  ";
    s1.display_string();
    !s1;
    return 0;
}
*/
// 10.Class Matrix
// {
// int a[3][3];
// Public:
// //methods;
// };
// Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
// overloading).
// Output -

/*#include <iostream>
using namespace std;
class Matrix
{
    int a[3][3];

public:
void accept();
void display();
void operator +(Matrix );
};
void Matrix::accept()
    {
        cout << "Enter matrix elements(3 x 3): " << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }
    }
void Matrix::display()
    {
        cout << "Matrix is : " << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << a[i][j] << "\t";
            }
            cout << endl;
        }
    }
void Matrix::operator+(Matrix m)
    {
        int  sum[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                sum[i][j] = a[i][j]+m.a[i][j];
            }
        }
        cout<<"Addition matrix is : "<<endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << sum[i][j] << "\t";
            }
            cout << endl;
        }
    }
int main()
{
    Matrix m1,m2,m3;
    m1.accept();
    m1.display();
    m2.accept();
    m2.display();
    m1+m2;
    return 0;
}*/