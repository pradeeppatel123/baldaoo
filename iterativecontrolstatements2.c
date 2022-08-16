//1. Write a program to print MySirG N times on the screen
/*#include<stdio.h>
int main()
    {
        int i=1,n;
        printf("Enter the value of N: ");
        scanf("%d",&n);
     while(i<=n){
        printf("MySirG\n");
        i++;
     }
    }
    */
//2. Write a program to print the first N natural numbers.

/*#include<stdio.h>
int main()
    {
        int i=1,n;
        printf("Enter the value of N: ");
        scanf("%d",&n);
        while(i<=n){
            printf("First 10 natural number is %d\n",i++);
           
        }
        return 0;
    }
    */
//3. Write a program to print the first N natural numbers in reverse order

/*#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    while(n>=1){
        printf("First 10 natural number reverse order is %d\n",n--);

    }
    return 0;
}*/

//4. Write a program to print the first N odd natural numbers

/*#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("First 10 odd natural number is %d\n",2*i-1);
        i++;
    }
}
*/

//5. Write a program to print the first N odd natural numbers in reverse order.

/*#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        printf("First 10 odd natural number in reverse order is %d\n",2*i-1);
    }
    return 0;
}
*/
//6. Write a program to print the first N even natural numbers

/*#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
    printf("First 10 even natural number is %d\n",i);
    return 0;
}
*/

//7. Write a program to print the first N even natural numbers in reverse order

/*#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the size of N: ");
    scanf("%d",&n);
    for(i=n;i>=2;i=i-2)
    printf("First 10 even natural number in reverse order is %d\n",i);
    return 0;
}*/

//8. Write a program to print squares of the first N natural numbers

/*#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the size of N: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("squares of the first 10 natural numbers is %d\n",i*i);
    return 0;
}*/

//9. Write a program to print cubes of the first N natural numbers

/*#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the size of N: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("Cubes of first 10 natural numbers %d is %d\n",i,i*i*i);
    return 0;
}*/

//10. Write a program to print a table of N.

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the size of N: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    printf("Table of %d is %d\n",n,n*i);
    return 0;
}