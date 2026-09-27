#include <stdio.h>
int main()
{
    int a[100][100],n,m,i,j;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    printf("Enter number of columns: ");
    scanf("%d",&m);
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Row wise sums:\n");
    for(i=0;i<n;i++)
    {
        int sum = 0;
        for(j=0;j<m;j++)
        {
            sum += a[i][j];
        }
        printf("Sum of row %d: %d\n", i+1, sum);
    }
    printf("Column wise sums:\n");
    for(j=0;j<m;j++)
    {
        int sum = 0;
        for(i=0;i<n;i++)
        {
            sum += a[i][j];
        }
        printf("Sum of column %d: %d\n", j+1, sum);
    }
    return 0;
}
