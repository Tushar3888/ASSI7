int main()
{
    int a[100], n, i;
    int largest, smallest;
    int secondLargest, secondSmallest;
    int foundLarge = 0, foundSmall = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    largest = a[0];
    smallest = a[0];
    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
            largest = a[i];

        if(a[i] < smallest)
            smallest = a[i];
    }
    for(i = 0; i < n; i++)
    {
        if(a[i] < largest)
        {
            if(foundLarge == 0 || a[i] > secondLargest)
            {
                secondLargest = a[i];
                foundLarge = 1;
            }
        }

        if(a[i] > smallest)
        {
            if(foundSmall == 0 || a[i] < secondSmallest)
            {
                secondSmallest = a[i];
                foundSmall = 1;
            }
        }
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);

    if(foundLarge)
        printf("Second Largest = %d\n", secondLargest);
    else
        printf("Second Largest does not exist\n");

    if(foundSmall)
        printf("Second Smallest = %d\n", secondSmallest);
    else
        printf("Second Smallest does not exist\n");

    return 0;
}
