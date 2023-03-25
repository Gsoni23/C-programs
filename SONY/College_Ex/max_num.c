#include <stdio.h>

int main()
{
    int max, n;

    printf("Enter the length of array\n");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of a[%d]\n", i);
        scanf("%d", &a[i]);
    }
    printf("\n");
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
    printf(" \n");
    printf(" \n");
    max = a[0];
    for (int i = 0; i < n; i++)
    {

        if (max < a[i])
        {
            max = a[i];
        }
    }
    printf("The maximum value is %d\n", max);

    return 0;
}