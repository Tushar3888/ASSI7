#include <stdio.h>

int main()
{
    int a[100][100];
    int n, i, j;
    int mainSum = 0, secondarySum = 0;
    int upper = 1, lower = 1, diagonal = 1;

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
        mainSum = mainSum + a[i][i];
        secondarySum = secondarySum + a[i][n - 1 - i];
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i > j && a[i][j] != 0)
            {
                upper = 0;
                diagonal = 0;
            }
            if(i < j && a[i][j] != 0)
            {
                lower = 0;
                diagonal = 0;
            }
        }
    }

    printf("\nSum of main diagonal = %d\n", mainSum);
    printf("Sum of secondary diagonal = %d\n", secondarySum);
    if(diagonal == 1)
    {
        printf("The matrix is a Diagonal Matrix.\n");
    }
    else if(upper == 1)
    {
        printf("The matrix is an Upper Triangular Matrix.\n");
    }
    else if(lower == 1)
    {
        printf("The matrix is a Lower Triangular Matrix.\n");
    }
    else
    {
        printf("The matrix is none of these.\n");
    }

    return 0;
}
