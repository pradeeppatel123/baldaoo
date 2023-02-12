// 1. Write a function to calculate length of the string

/*#include <stdio.h>
int strLen(char *);
int main()
{
    char str[20];
    printf("Enter the string: ");
    fgets(str, 20, stdin);
    printf("Size of string is : %d", strLen(str));
    return 0;
}
int strLen(char *st)
{
    if (*st=='\0')
    return 0;
    return (1+strLen(++st));
}*/

// 2. Write a function to reverse a string.

/*#include <stdio.h>
#include <string.h>
void revstr(char *str1)
{
    int i, len, temp;
    len = strlen(str1);
    for (i = 0; i < len / 2; i++)
    {
        temp = str1[i];
        str1[i] = str1[len - i - 1];
        str1[len - i - 1] = temp;
    }
}

int main()
{
    char str[50]; // size of char string
    printf(" Enter the string: ");
    fgets(str,50,stdin);
    revstr(str);
    printf("After reversing the string: %s", str);
}*/

// 3. Write a function to compare two strings.
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    printf("Enter the first string: ");
    fgets(str1,20,stdin);
    fflush(stdin);
    printf("Enter the second string: ");
    fgets(str2,20,stdin);
    printf("%d",strcmp(str1,str2));
}*/

// 4. Write a function to transform string into uppercase
/*#include<stdio.h>
void strLow(char *);
int main()
{
    char str[20];
    printf("Enter the string: ");
    fgets(str,20,stdin);
    strLow(str);
    return 0;
}
void strLow(char *st)
{
    int i;
    for(i=0;st[i];i++)
    {
        if(st[i]>='a' && st[i]<='z')
        {
            st[i]=st[i]-32;
        }
    }
    printf("UpperCase string is = %s",st);
}*/

// 5. Write a function to transform a string into lowercase

/*#include<stdio.h>
void strLow(char *);
int main()
{
    char str[20];
    printf("Enter the string : ");
    fgets(str,20,stdin);
    strLow(str);
    return 0;
}
void strLow(char *st)
{
    int i;
    for(i=0;st[i];i++)
    {
        if(st[i]>='A'&&st[i]<='Z')
        {
            st[i]=st[i]+32;
        }
    }
    printf("LowerCase string is %s",st);
}*/

// 6. Write a function to check whether a given string is an alphanumeric string or not.
// (Alphanumeric string must contain at least one alphabet and one digit)

/*#include <stdio.h>
#include <string.h>
void AlphaNumbericOrNot(char str[20]);
int main()
{
    char str[20];
    printf("Enter a String : ");
    gets(str);
    AlphaNumbericOrNot(str);
    return 0;
}
void AlphaNumbericOrNot(char str[20])
{

    int i;
    int a = 0;
    int d = 0;
    for (i = 0; str[i]; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            a = 1;
        }
        if (str[i] >= '0' && str[i] <= '9')
        {
            d = 1;
        }
    }
    if (a == 1 && d == 1)
    {
        printf("%s : is aplphanumeric", str);
    }
    else
    {
        printf("%s : is not alphanumeric", str);
    }
}*/

// 7. Write a function to check whether a given string is palindrome or not.

/*#include <stdio.h>
#include <string.h>
int isPalindrone(char str[20]);
int main()
{
    char str[20];
    printf("Enter a string : ");
    gets(str);
    if (isPalindrone(str))
    {
        printf("Palindrone");
    }
    else
    {
        printf("Not a Palindrone");
    }
    return 0;
}

int isPalindrone(char str[20])
{
    int i;
    int n = strlen(str);

    for (i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            return 0;
        }
    }
    return 1;
}*/

// 8. Write a function to count words in a given string

/*#include<stdio.h>
#include<string.h>

int countWord(char s[40]);

int main(){
    char str[40];
    printf("Enter the string: ");
    gets(str);

    printf("Number of words in given string are: %d\n",countWord(str));
    return 0;
}

int countWord(char s[40]){
    int i;
    int count=0;

    for(i=0;s[i];i++){
        if(s[i]==' ' && s[i+1]!= ' '){
            count++;
        }
    }
    return count+1;
}*/

// 9. Write a function to reverse a string word wise. (For example if the given string is
// “Mysirg Education Services” then the resulting string should be “Services Education
// Mysirg” )

/*#include <stdio.h>

void reverse(char* begin, char* end)
{
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}

// Function to reverse words
void reverseWords(char* s)
{
    char* word_begin = s;

    // Word boundary
    char* temp = s;

    // Reversing individual words as
    // explained in the first step
    while (*temp) {
        temp++;
        if (*temp == '\0') {
            reverse(word_begin, temp - 1);
        }
        else if (*temp == ' ') {
            reverse(word_begin, temp - 1);
            word_begin = temp + 1;
        }
    }

    // Reverse the entire string
    reverse(s, temp - 1);
}

// Driver Code
int main()
{
    char s[] = "Mysirg Education Services";
    char* temp = s;

    // Driver code
    reverseWords(s);
    printf("%s", s);
    return 0;
}*/
// 10. Write a function to find the repeated character in a given string.

#include <stdio.h>
#include <string.h>

void duplicateChar(char str[20]);

int main()
{
    char s[20];
    printf("Enter a string: ");
    gets(s);
    duplicateChar(s);
    return 0;
}
void duplicateChar(char str[20])
{
    int count;

    printf("Duplicate characters in a given string: \n");
    // Counts each character present in the string
    for (int i = 0; i < strlen(str); i++)
    {
        count = 1;
        for (int j = i + 1; j < strlen(str); j++)
        {
            if (str[i] == str[j] && str[i] != ' ')
            {
                count++;
                // Set string[j] to 0 to avoid printing visited character
                str[j] = '0';
            }
        }
        // A character is considered as duplicate if count is greater than 1
        if (count > 1 && str[i] != '0')
            printf("%c\n", str[i]);
    }
    
}