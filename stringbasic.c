// 1. Write a program to calculate the length of the string. (without using built-in method)

/*#include<stdio.h>
int main()
{
    char str[10];
    int i;
    printf("Enter a string ");
    fgets(str,10,stdin);
    for(i=0;str[i];i++);
    printf("%d",i);
}*/

// 2. Write a program to count the occurrence of a given character in a given string.

/*#include<stdio.h>
int main()
{
    char str[10],c;
    int i,count=0;
    printf("Enter a string ");
    fgets(str,10,stdin);
    printf("Enter a character ");
    scanf("%c",&c);
    for(i=0;str[i];i++)
    {
        if(str[i]==c)
        {
            count++;
        }
    }
     printf("occurrence character is %d",count);
    return 0;
}*/

// 3. Write a program to count vowels in a given string

/*#include<stdio.h>
int main()
{
    char str[10];
    int count=0,i;
    printf("Enter a string ");
    fgets(str,10,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'|| str[i]=='u'||str[i]=='A' || str[i]=='E' || str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            count++;
        }
    }
    printf("Number of vowels is %d ",count);
}*/

// 4. Write a program to convert a given string into uppercase
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i;
    printf("Enter a string ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
    {
       if(str[i]>='a' && str[i]<='z')
       {
        str[i]=str[i]-32;
       }
    }
    printf("%s",str);
    return 0;
}*/

// 5. Write a program to convert a given string into lowercase
/*#include<stdio.h>
int main()
{
    char str[20];
    int i;
    printf("Enter the string ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
    printf("\nLowerCase string is %s",str);
    return 0;
}*/

// 6. Write a program to reverse a string.

/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],c;
    int i,l;
    printf("Enter the string ");
    fgets(str,20,stdin);
    l=strlen(str);
    for(i=0;i<l/2;i++)
    {
        c=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=c;
    }
    printf("%s",str);
}*/
// 7. Write a program in C to count the total number of alphabets, digits and special
// characters in a string.

/*#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    int i, count1 = 0, count2 = 0, count3 = 0;
    printf("Enter a  string ");
    fgets(s, 20, stdin);
    for (i = 0; s[i]; i++)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
            count1++;
        else if (s[i] >= '0' && s[i] <= '9')
            count2++;
        else
            count3++;
    }
    printf("number of Alphabets is %d", count1);
    printf("\nnumber of digits is %d", count2);
    printf("\nNumber of special characters is %d", count3);
    return 0;
}*/

// 8. Write a program in C to copy one string to another string.

/*#include<stdio.h>
int main()
{
    char s[20],str[10];
    int i;
    printf("Enter a string ");
    fgets(s,20,stdin);
    for(i=0;s[i];i++)
    {
        str[i]=s[i];
    }
    str[i]='\0';
    printf("%s",str);
    return 0;
}*/

// 9. Write a C program to sort a string array in ascending order.

/*#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], ch;
    int i, j, l;

    printf("\n\nSort a string array in ascending order :\n");
    printf("Input the string : ");
    fgets(str, sizeof(str), stdin);
    l = strlen(str);

    for (i = 1; i < l; i++)
        for (j = 0; j < l - i; j++)
            if (str[j] > str[j + 1])
            {
                ch = str[j];
                str[j] = str[j + 1];
                str[j + 1] = ch;
            }
    printf("After sorting the string appears like : \n");
    printf("%s\n\n", str);
}*/

// 10. Write a program in C to Find the Frequency of Characters.
#include<stdio.h>
int main()
{
    char str[20];
    int i,count=0;
    printf("Enter the string ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
    {
        if((str[i]>='a' && str[i]<='z') ||(str[i]>='A' && str[i]<='Z'))
        {
            count++;
        }
    }
    printf("Total Frequency of Characters is %d",count);
    return 0;
}

