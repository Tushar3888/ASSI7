#include <stdio.h>
int main()
{
    int n,i;
    int ar[100];
    int sum=0;
    float avg;
    printf("Enter the no of elements");
    scanf("%d",&n);
    printf("Enter &d elements \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Array elements are");
    for(i=0;i<n;i++)
    {
        printf("%d",&ar[i]);
        sum=sum+ar[i];
        }
        avg=sum/n;
        printf("\nSum = %d", sum);
        printf("\nAverage = %.2f\n", average);
        return 0;
}
