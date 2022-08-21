//1. Write a program to print Hello Students on the screen.

/*#include<stdio.h>
int main()
{
    printf("Hello Students");
    printf("\n");
    return 0;
}*/

//2. Write a program to print Hello in the first line and Students in the second line.

/*#include<stdio.h>
int main()
{
    printf("Hello \nStudents");
    printf("\n");
    return 0;
}*/

//3. Write a program to print “MySirG” on the screen. (Remember to print in double quotes)

/*#include<stdio.h>
int main()
{
    printf("\"MySirG\"");
    printf("\n");
    return 0;
}*/

/*4. WAP to find the area of the circle. Take radius of circle from user as input and print the
result in below given format.
Expected output format – “Area of circle is A having the radius R”. Replace A with area
& R with radius.*/
/*#include<stdio.h>
int main(){
    float A,R,Pi;
    Pi=3.14;
    printf("Enter the Radius of circle: ");
    scanf("%f",&R);
    A=Pi*R*R;
    printf("Area of circle is %.2f having the radius %.2f ",A,R);
    return 0;
}*/

//5. WAP to calculate the length of String using printf function.
/*#include<stdio.h>
int main()
{
    int x=printf("MySirG");
    printf("%d",x);
    return 0;
}*/

/*6. WAP to print the name of the user in double quotes.
Expected output format – “Hello , Amit Kumar”*/

/*#include<stdio.h>
int main()
{
    printf("\"Hello , Amit Kumar\"");
    printf("\n");
    return 0;
}*/

//7. WAP to print “%d” on the screen.

/*#include<stdio.h>
int main()
{
    printf("\"%%d\"");
    printf("\n");
    return 0;
}*/

//8. WAP to print “\n” on the screen.
/*#include<stdio.h>
int main()
{
    printf("\"\\n\"");
    printf("\n");
    return 0;
}*/

//9. WAP to print “\\” on the screen.

/*#include<stdio.h>
int main()
{
    printf("\"\\\\\"");
    printf("\n");
    return 0;
}*/

/*10. WAP to take date as an input in below given format and convert the date format and
display the result as given below.
User Input date format – “DD/MM/YYYY” (27/11/2022)
Output format –
“Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)*/

/*#include<stdio.h>
int main(){
    int day,month,year;
    printf("DD/MM/YYYY");
    scanf("%d/%d/%d",&day,&month,&year);
    printf("Day-%d,Month-%d,Year-%d",day,month,year);
    return 0;
}*/

/*11. WAP to take time as an input in below given format and convert the time format and
display the result as given below.
User Input date format – “HH:MM”
Output format – “HH hour and MM Minute”
Example –
“11:25” converted to “11 Hour and 25 Minute”*/

/*#include<stdio.h>
int main(){
    int hour,minute;
    printf("HH:MM\n");
    scanf("%d:%d",&hour,&minute);
    printf("%d Hour and %d Minute",hour,minute);
    return 0;
}*/

/*12. Find output of below code:
int main()
{
int x = printf(“ineuron”);
printf(“%d”,x);
return 0;
}*/
//output:- ineuron7