#include <stdio.h>
int main()
{
    int a[100][100], b[100][100], r1, c1, r2, c2, i, j,k,prod[100][100];
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2)
    {
        printf("Incompatible matrix dimensions for multiplication\n");
        return 0;
    }
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            prod[i][j] = 0;
            for (k = 0; k < c1; k++)
            {
                prod[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Product of the matrices:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", prod[i][j]);
        }
        printf("\n");
    }
    return 0;
}
