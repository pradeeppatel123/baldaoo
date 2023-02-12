// 1. Write a function to swap values of two in variables of calling function. (TSRS)
/*#include<stdio.h>
int swap(int *p,int *q);
int main()
{
    int a,b;
    printf("Enter two number ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("swapped value a is %d and b is %d",a,b);
    return 0;
}
int swap(int *p,int *q)
{
int temp;
 temp=*p;
 *p=*q;
 *q=temp;
}*/

// 2. Write a function to swap strings of two char arrays of calling functions. (TSRS)

/*#include<stdio.h>
#include<string.h>
int swap(char* str1, char* str2)
{
    int len = strlen(str1);
    for(int i=0; i<len; i++)
    {
        char temp = str1[i];
        str1[i] = str2[i];
        str2[i] = temp;
    }
}
int main()
{
    char str1[10] ;
    char str2[10] ;
    fgets(str1,10,stdin);
    fgets(str2,10,stdin);
    printf("%s : %s", str1, str2);
    swap(str1, str2);
    printf("%s : %s", str1, str2);
}*/

// 3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]

/*#include <stdio.h>
void sort(int *ptr, int size);

int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);

    int s[n], i;
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &s[i]);
    }
    sort(s, n);
    return 0;
}
void sort(int *ptr, int size)
{
    int i, j, temp;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (*(ptr + i) > *(ptr + j))
            {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
    printf("Sorted array is = ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", *(ptr + i));
    }
}*/

// 4. Write a program in C to demonstrate how to handle the pointers in the program.

/*#include <stdio.h>
int main()
{
    int *ab;
    int m;
    m = 29;
    printf("\n\n Pointer : How to  handle the pointers in the program :\n");
    printf("------------------------------------------------------------\n");
    printf(" Here in the declaration ab = int pointer, int m= 29\n\n");

    printf(" Address of m : %p\n", &m);
    printf(" Value of m : %d\n\n", m);
    ab = &m;
    printf(" Now ab is assigned with the address of m.\n");
    printf(" Address of pointer ab : %p\n", ab);
    printf(" Content of pointer ab : %d\n\n", *ab);
    m = 34;
    printf(" The value of m assigned to 34 now.\n");
    printf(" Address of pointer ab : %p\n", ab);
    printf(" Content of pointer ab : %d\n\n", *ab);
    *ab = 7;
    printf(" The pointer variable ab is assigned the value 7 now.\n");
    printf(" Address of m : %p\n", &m); 
    printf(" Value of m : %d\n\n", m);
    return 0;
}*/

// 5. Write a program to find the maximum number between two numbers using a pointer

/*#include <stdio.h>

int main()
{
    int a, b, *p, *q;
    p = &a;
    q = &b;
    printf("Enter the first element : ");
    scanf("%d", p);
    printf("Enter the second element : ");
    scanf("%d", q);

    if (*p > *q)
    {
        printf("First element is greater than second element");
    }
    else
    {
        printf("Second element is greater than first element");
    }
    return 0;
}*/

// 6. Write a program to calculate the length of the string using a pointer
/*#include<stdio.h>
void length(char *p)
{
    int i;
    for(i=0;*(p+i);i++);
    printf("%d",i);
}
int main()
{
    char str[20];
    printf("Enter the string ");
    fgets(str,20,stdin);
    length(str);
    return 0;
}*/

/* 7. Write a program to count the number of vowels and consonants in a string using a  pointer.*/

/*#include <stdio.h>
#include <string.h>
int main()
{
    char s[20], *p;
    int vowels = 0, consonants = 0;

    printf("Enter  the string : ");
    fgets(s, 20, stdin);
    p = s;
    while (*p)
    {
        if ((*p >= 65 && *p <= 90) || (*p >= 97 && *p <= 122))
        {

            if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u' || *p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U')
                vowels++;
            else
                consonants++;
        }
        p++;
    }
    printf("vowels = %d\n", vowels);
    printf("consonants = %d\n", consonants);

    return 0;
}*/

// 8. Write a program to compute the sum of all elements in an array using pointers.

/*#include<stdio.h>
int main()
{
    int a[20],i,n,*p,sum=0;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements of an array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    printf("\nArray element is:\n");
    for(i=0;i<n;i++)
    {
         printf("%d ",*(p+i));
    }

    // sum of array elements

    for(i=0;i<n;i++)
    {
        sum=sum+*(p+i);
    }
    printf("\nsum of array elements = %d",sum);
}*/

// 9. Write a program to print the elements of an array in reverse order.

/*#include<stdio.h>
void reversArray(int *p,int size);

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int a[n],i;
    printf("Enter the array element : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     reversArray(a,n);
    return 0;
}
void reversArray(int *p,int size)
{
    int i;
    printf("Reverse arary is : ");
    for(i=size-1;i>=0;i--)
    {
        printf("%d ",*(p+i));
    }
}*/
// 10. Write a program to print a string in reverse using a pointer


#include <stdio.h>
int main()
{
    char str1[50];
    char revstr[50];
    char *stptr = str1;
    char *rvptr = revstr;
    int i=-1;
 	printf("\n\n Pointer : Print a string in reverse order :\n"); 
	printf("------------------------------------------------\n");	
    printf(" Input a string : ");
    scanf("%s",str1);
    while(*stptr)
    {
     stptr++;
     i++;
    }
    while(i>=0)
    {
     stptr--;
     *rvptr = *stptr;
     rvptr++;
     --i;
    }
    *rvptr='\0';
    printf(" Reverse of the string is : %s\n\n",revstr);
    return 0;
}
