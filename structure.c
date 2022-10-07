// 1. Define a structure Employee with member variables id, name, salary

/*#include<stdio.h>
#include<string.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
int main()
{
    struct Employee e={13,"pradeep",50000};
    printf("Employee id is %d\nEmployee name is:- %s\nEmployee salary is %.2f",e.id,e.name,e.salary);
    return 0;
}*/

// 2. Write a function to take input employee data from the user. [ Refer structure from
// question 1 ]

/*#include<stdio.h>
#include<string.h>
struct Employee
{
   int id;
   char name[20];
   float salary;
};
struct Employee input()
{
    struct Employee e;
    printf("Enter the id ,name and salary: ");
    scanf("%d",&e.id);
    fflush(stdin);
    fgets(e.name,20,stdin);
    e.name[strlen(e.name)-1]='\0';
    scanf("%f",&e.salary);
    return e;
}

int main()
{
    struct Employee e1;
    e1=input();
    printf("\n%d %s %.2f",e1.id,e1.name,e1.salary);
    return 0;
}*/

// 3. Write a function to display employee data. [ Refer structure from question 1 ]

/*#include<stdio.h>
#include<string.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
void display(struct Employee e)
{
    printf("\n%d %s %.2f",e.id,e.name,e.salary);
}
struct Employee input()
{
    struct Employee e;
    printf("Enter the id ,name and salary: ");
    scanf("%d",&e.id);
    fflush(stdin);
    fgets(e.name,20,stdin);
    e.name[strlen(e.name)-1]='\0';
    scanf("%f",&e.salary);
    return e;
}
int main()
{
    struct Employee e;
    e=input();
    display(e);
    return 0;
}*/

// 4. Write a function to find the highest salary employee from a given array of 10
// employees. [ Refer structure from question 1]

/*#include<stdio.h>
#include<string.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
void display(struct Employee e)
{
    printf("\n%d %s %.2f",e.id,e.name,e.salary);
}
struct Employee input()
{
    struct Employee e;
    printf("Enter the id ,name and salary: ");
    scanf("%d",&e.id);
    fflush(stdin);
    fgets(e.name,20,stdin);
    e.name[strlen(e.name)-1]='\0';
    scanf("%f",&e.salary);
    return e;
}
void highestSalary(struct Employee e[],int size)
{
    int i;
    float high;
    high=e[0].salary;
    for(i=1;i<=size-1;i++)
    {
        if(e[i].salary>high)
        {
           high=e[i].salary;
        }
    }
   for(i=0;i<size;i++)
     {
          if(e[i].salary==high)
          printf("\n %d\t%s\t%.2f",e[i].id,e[i].name,e[i].salary);
     }
}
int main()
{
    struct Employee e[10];
    int i;
    for(i=0;i<=9;i++)
    e[i]=input();
    highestSalary(e,10);
    printf("\n");
    return 0;
}*/

// 5. Write a function to sort employees according to their salaries [ refer structure from question 1]

/*#include <stdio.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
void display(struct Employee e)
{
    printf("\n%d %s %f", e.id, e.name, e.salary);
}
struct Employee input()
{
    struct Employee e;
    printf("Enter the Employee id ,name and salary");
    scanf("%d", &e.id);
    fflush(stdin);
    fgets(e.name, 20, stdin);
    scanf("%f", &e.salary);
    return e;
}
void sortBySalary(struct Employee e[], int size)
{
    int r, i;
    struct Employee temp;
    for (r = 1; r <= size - 1; r++)
    {
        for (i = 0; i <= size - 1 - r; i++)
        {
            if (e[i].salary > e[i + 1].salary)
            {
                temp = e[i];
                e[i] = e[i + 1];
                e[i + 1] = temp;
            }
        }
    }
}
int main()
{
    struct Employee e[10];
    int i;
    for (i = 0; i <= 9; i++)
        e[i] = input();
    sortBySalary(e, 10);
    for (i = 0; i <= 9; i++)
        display(e[i]);
    printf("\n");
    return 0;
}*/

// 6. Write a function to sort employees according to their names [refer structure from question 1]

/*#include <stdio.h>
#include <string.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
void display(struct Employee e)
{
    printf("\n%d %s %.2f", e.id, e.name, e.salary);
}
struct Employee input()
{
    struct Employee e;
    printf("Enter the Employee id ,name and salary");
    scanf("%d", &e.id);
    fflush(stdin);
    fgets(e.name, 20, stdin);
    e.name[strlen(e.name) - 1] = '\0';
    scanf("%.2f", &e.salary);
    return e;
}
void sortByName(struct Employee e[], int size)
{
    int r, i;
    struct Employee temp;
    for (r = 1; r <= size - 1; r++)
    {
        for (i = 0; i <= size - 1 - r; i++)
        {
            if (strcmp(e[i].name, e[i + 1].name) > 0)
            {
                temp = e[i];
                e[i] = e[i + 1];
                e[i + 1] = temp;
            }
        }
    }
}
int main()
{
    struct Employee e[3];
    int i;
    for (i = 0; i <= 2; i++)
        e[i] = input();
    sortByName(e, 3);
    for (i = 0; i <= 2; i++)
        display(e[i]);
    printf("\n");
    return 0;
}*/

// 7. Write a program to calculate the difference between two time periods.

/*#include <stdio.h>
struct TIME
{
    int seconds;
    int minutes;
    int hours;
};

void differenceBetweenTimePeriod(struct TIME start, struct TIME stop, struct TIME *diff)
{
    while (stop.seconds > start.seconds)
    {
        --start.minutes;
        start.seconds += 60;
    }
    diff->seconds = start.seconds - stop.seconds;
    while (stop.minutes > start.minutes)
    {
        --start.hours;
        start.minutes += 60;
    }
    diff->minutes = start.minutes - stop.minutes;
    diff->hours = start.hours - stop.hours;
}
int main()
{
    struct TIME startTime, stopTime, diff;

    printf("Enter the start time. \n");
    printf("Enter hours, minutes and seconds: ");
    scanf("%d %d %d", &startTime.hours,&startTime.minutes,&startTime.seconds);

    printf("Enter the stop time. \n");
    printf("Enter hours, minutes and seconds: ");
    scanf("%d %d %d", &stopTime.hours,&stopTime.minutes,&stopTime.seconds);

    // Difference between start and stop time
    differenceBetweenTimePeriod(startTime, stopTime, &diff);
    printf("\nTime Difference: %d:%d:%d - ", startTime.hours,startTime.minutes,startTime.seconds);
    printf("%d:%d:%d ", stopTime.hours,stopTime.minutes,stopTime.seconds);
    printf("= %d:%d:%d\n", diff.hours,diff.minutes,diff.seconds);
    return 0;
}*/

// 8. Write a program to store information of 10 students and display them using structure.

/*#include <stdio.h>
struct student
{
    int id;
    char name[20];
    int age;
};
struct student input()
{
    struct student s;
    printf("Enter the student id:-  ");
    scanf("%d", &s.id);
    fflush(stdin);
    printf("Enter the student name:- ");
    fgets(s.name, 20, stdin);
    s.name[strlen(s.name) - 1] = '\0';
    printf("Enter the student age:- ");
    scanf("%d", &s.age);
    return s;
}
void display(struct student s)
{
    printf("\n %d %s %d ", s.id, s.name, s.age);
}

int main()
{
    struct student s[10];
    int i;
    for (i = 0; i <= 9; i++)
        s[i] = input();
    printf("Display the students data:- ");
    for (i = 0; i <= 9; i++)
        display(s[i]);
    return 0;
}*/

// 9. Write a program to store information of n students and display them using structure

/*#include <stdio.h>
struct student
{
    int id;
    char name[20];
    int age;
};
struct student input()
{
    struct student s;
    printf("Enter the student id:-  ");
    scanf("%d", &s.id);
    fflush(stdin);
    printf("Enter the student name:- ");
    fgets(s.name, 20, stdin);
    s.name[strlen(s.name) - 1] = '\0';
    printf("Enter the student age:- ");
    scanf("%d", &s.age);
    return s;
}
void display(struct student s)
{
    printf("\n %d %s %d ", s.id, s.name, s.age);
}

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student s[n];
    int i;
    for (i = 0; i <= n-1; i++)
        s[i] = input();
    printf("Display the students data:- ");
    for (i = 0; i <= n-1; i++)
        display(s[i]);
    return 0;
}*/

// 10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
// Physics (each out of 100) using a structure named Marks having elements roll no.,
// name, chem_marks, maths_marks and phy_marks and then display the percentage
// of each student.

#include <stdio.h>
#include<string.h>
struct marks
{
    int rollno;
    char name[20];
    int chem_marks, maths_marks, phy_marks;
};
struct marks input()
{
    struct marks s;
    printf("Enter the student roll number:- ");
    scanf("%d", &s.rollno);
    fflush(stdin);
    printf("Enter the student name:- ");
    fgets(s.name, 20, stdin);
    s.name[strlen(s.name) - 1] = '\0';
    printf("Enter the student Chemestry marks:- ");
    scanf("%d", &s.chem_marks);
    printf("Enter the student Mathematics marks:- ");
    scanf("%d", &s.maths_marks);
    printf("Enter the student Physics marks:- ");
    scanf("%d", &s.phy_marks);
    return s;
}
void display(struct marks s)
{
    float percantge = 0.0;
    percantge = (s.chem_marks + s.maths_marks + s.phy_marks) / 3;

    printf("%d\n%s\n%.2f\n", s.rollno, s.name, percantge);
}
int main()
{
    struct marks s[5];
    int i;
    for (i = 0; i <= 4; i++)
        s[i] = input();
    for (i = 0; i <= 4; i++)
        display(s[i]);

    return 0;
}