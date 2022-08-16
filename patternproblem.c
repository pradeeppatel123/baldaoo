 /*
 *
 * *
 * * *
 * * * *
 * * * * *
 */

/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
} */

/*
        *
      * *
    * * *
  * * * *
* * * * *
*/
/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/

/*
* * * * *
* * * *
* * *
* * 
*
*/

/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/


/*
* * * * *
  * * * *
    * * *
      * *
        *
 */

/* #include<stdio.h>
  int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
 }*/
 /*
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

*/
/* #include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/

/*
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/

/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=i && j<=10-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
/*
* * * * * * * * * * 
* * * *     * * * *
* * *         * * * 
* *             * *
*                 *

*/

/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(j<=6-i || j>=5+i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/

/*
   1
  121
 12321
1234321
*/


/*#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
            {
            printf("%d",k);
            j<4?k++:k--;
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/


/*
1234321
 12321
  121
   1
   */

/*#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
            {
            printf("%d",k);
            j<4?k++:k--;
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
/*
1 2 3 4 3 2 1
1 2 3   3 2 1
1 2       2 1
1           1
*/
/*#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j<=5-i || j>=3+i)
            {
            printf("%d",k);
            j<4?k++:k--;
            }
            else
            {
              printf(" ");
              if(j==4)
              k--;
    
            }
        }
        printf("\n");
    }
    return 0;
}*/

/*
        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A
*/

/*#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        k='A';
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
            {
            printf("%c",k);
            j<5?k++:k--;
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
/*
A B C D C B A
  A B C B A 
    A B A 
      A 
      */
/*#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k='A';
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
            {
            printf("%c",k);
            j<4?k++:k--;
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
/*
ABCDEFGFEDCBA
ABCDEF FEDCBA
ABCDE   EDCBA
ABCD     DCBA
ABC       CBA
AB         BA
A           A
*/
/*#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=7;i++)
    {
        k='A';
        for(j=1;j<=13;j++)
        {
            if(j<=8-i || j>=6+i)
            {
            printf("%c",k);
            j<7?k++:k--;
            }
            else
            {
              printf(" ");
              if(j==7)
              k--;
    
            }
        }
        printf("\n");
    }
    return 0;
}*/
/*
*
* *
*   *
*     *
* * * * *
*/

/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==1||j==i||i==5)
               printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
/* 
            *
          * *
        *   *
      *     *
    * * * * * 
    */

 /*  #include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==6-i || i==5 || j==5 )
               printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
/*
        * 
      *   *
    *       *
  *           *
* * * * * * * * *
*/
/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j==6-i || j==4+i || i==5 )
               printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
/*
* * * * * * * * *
  *           *
    *       *
      *   *
        *
*/

/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if( i==1 || j==10-i|| j==i)
               printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
/*
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/


/*#include<stdio.h>
int main()
{
    int i,j,k=0;
    for(i=1;i<=9;i++)
    {
        i<=5?k++:k--;
        for(j=1;j<=9;j++)
        {
            if(j>=6-k && j<=4+k)
               printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
/*
 *******   ******* 
********* *********
******MySirG*******
 ***************** 
  ***************  
   *************
    ***********
     *********
      *******
       *****
        ***        
         *
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<19;j++)
        {
            if(((j>=2-i)&&(j<=6+i))||((j>=12-i)&&(j<=16+i)))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<19;j++)
        {
            if(i==0 && j==6)
            printf("MySirG");
            if(i==0 && (j>=6)&& (j<=11))
            continue;
            if(j>=i && j<=18-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}
