// 1. Write a program to calculate the sum of two matrices each of order 3x3.

/*#include<stdio.h>

int main()
{
    int a1[3][3],a2[3][3],sum[3][3];
    int i,j;

    printf("Enter first matrix element: ");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    printf("Enter second matrix element: ");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }
    // addition of two arrays
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
           sum[i][j]=a1[i][j]+a2[i][j];
        }
    }
    printf("Addition of two matrix is :\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/

// 2. Write a program to calculate the product of two matrices each of order 3x3.

/*#include<stdio.h>
int main() {
    int a[3][3], b[3][3], c[3][3], i, j, k;

    printf("Enter the elements of Matrix-A: \n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", & a[i][j]);
        }
    }

    printf("Enter the elements of Matrix-B: \n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", & b[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = 0;
            for (k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("The product of the two matrices is: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/

// 3. Write a program in C to find the transpose of a given matrix.

// #include <stdio.h>
// #define N 4
// void transpose(int arr1[][N], int arr2[][N])
// {
//     int i, j;
//     for (int i = 0; i < N; i++)
//     {
//         for (j = 0; j < N; j++)
//         {
//             arr2[i][j] = arr1[j][i];
//         }
//     }
// }
// int main()
// {
//     int A[N][N] = {{1, 1, 1, 1},
//                    {2, 2, 2, 2},
//                    {3, 3, 3, 3},
//                    {4, 4, 4, 4}};
//     int i, j;
//     int B[N][N];
//     transpose(A, B);
//     printf("REsult array is : \n");
//     for (i = 0; i < N; i++)
//     {
//         for (j = 0; j < N; j++)
//         {
//             printf("%d ", B[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// 4. Write a program in C to find the sum of right diagonals of a matrix.

/*#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;

    printf("Enter the matrix element :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           if(i==j)
           {
            sum +=a[i][j];
           }
        }
    }
    printf("Sum of right diagnoals matrix is = %d",sum);
    return 0;
}*/

// 5. Write a program in C to find the sum of left diagonals of a matrix.

/*#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;

    printf("Enter the matrix element :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           if(i==2-j)
           {
            sum +=a[i][j];
           }
        }
    }
    printf("Sum of left diagnoals matrix is = %d",sum);
    return 0;
}*/

// 6. Write a program in C to find the sum of rows and columns of a Matrix.

// #include <stdio.h>
// #define N 3
// void printArray(int arr[N][N])
// {
//     int i, j;
//     for (i = 0; i < N; i++)
//     {
//         for (j = 0; j < N; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }
// void sumRow(int arr[N][N])
// {
//     int sumRow[N];
//     int i, j;
//     for (i = 0; i < N; i++)
//     {
//         sumRow[i] = 0;
//         for (j = 0; j < N; j++)
//         {
//             sumRow[i] = sumRow[i] + arr[i][j];
//         }
//         printf("Sum of Row no %d is =%d\n", i, sumRow[i]);
//     }
// }
// void sumColumn(int arr[N][N])
// {
//     int sumColumn[N];
//     int i, j;
//     for (i = 0; i < N; i++)
//     {
//         sumColumn[i] = 0;
//         for (j = 0; j < N; j++)
//         {
//             sumColumn[i] = sumColumn[i] + arr[j][i];
//         }
//         printf("SUm of Column no %d is =%d\n", i, sumColumn[i]);
//     }
// }
// int main()
// {
//     int arr[N][N] = {{1, 2, 3},
//                      {4, 5, 6},
//                      {7, 8, 9}};
//     printArray(arr);
//     sumRow(arr);
//     sumColumn(arr);
// }

// 7. Write a program in C to print or display the lower triangular of a given matrix.

/*#include<stdio.h>
int main()
{
    int a[3][3],i,j;

    printf("Enter the matrix element :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The lower triangular of a given matrix is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           if(i<j)
           {
            printf("0\t");
           }
           else
           {
            printf("%d \t",a[i][j]);
           }
        }
        printf("\n");
    }

    return 0;
}*/
// 8. Write a program in C to print or display an upper triangular matrix.

/*#include<stdio.h>
int main()
{
    int a[3][3],i,j;

    printf("Enter the matrix element :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The Upper triangular of a given matrix is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           if(i>j)
           {
            printf("0\t");
           }
           else
           {
            printf("%d \t",a[i][j]);
           }
        }
        printf("\n");
    }

    return 0;
}*/

// 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.

/*#include <stdio.h>

void main()
{
    int array[10][10];
    int i, j, m, n;
    int counter = 0;

    printf("ENter the order of matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter the cofficients of the matrix: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &array[i][j]);
            if (array[i][j] == 0)
            {
                counter++;
            }
        }
    }
    printf("\n Matrix is:-\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%3d", array[i][j]);
        }
        printf("\n");
    }
    if (counter > ((m * n) / 2))
    {
        printf("The given matrix is sparse matrix\n");
    }
    else
    {
        printf("The given matrix is not sparse matrix \n");
    }
    printf("There are %d number of zeros ", counter);
}
*/

// 10. Write a program in C to find the row with maximum number of 1s.

#include <stdio.h>

int main()
{

    int mat[4][4] = {{0, 0, 0, 1},
                     {0, 1, 1, 1},
                     {1, 1, 1, 1},
                     {0, 0, 0, 0}};

    int max_count = 0, index = -1;

    for (int i = 0; i < 4; i++)
    {
        int count = 0;
        for (int j = 0; j < 4; j++)
        {
            if (mat[i][j] == 1)
                count++;
        }
        if (count > max_count)
        {
            max_count = count;
            index = i;
        }
    }

    printf("Index of row with maximum 1s is %d", index);
}
