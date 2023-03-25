#include <stdio.h>
int main()
{
    int a;
    printf("Enter 1 for triangular star pattern & 0 for reverse triangular pattern\n");
    scanf("%d", &a);

    if (a == 0)
    {

        int n;
        printf("Enter number of rows you want\n");
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            for (int j = n; j >= i; j--)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    else if (a == 1)
    {
        int n;
        printf("Enter number of rows you want\n");
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}