#include <stdio.h>

int main()
{
    int a[100][100], transpose[100][100];
    int n, i, j;
    int symmetric = 1, skew = 1;

    printf("Enter the order of square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            transpose[i][j] = a[j][i];
        }
    }

    printf("\nTranspose of the matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] != transpose[i][j])
            {
                symmetric = 0;
            }

            if(a[i][j] != -transpose[i][j])
            {
                skew = 0;
            }
        }
    }
    if(symmetric == 1)
    {
        printf("\nThe matrix is Symmetric.\n");
    }
    else if(skew == 1)
    {
        printf("\nThe matrix is Skew-Symmetric.\n");
    }
    else
    {
        printf("\nThe matrix is neither Symmetric nor Skew-Symmetric.\n");
    }

    return 0;
}
