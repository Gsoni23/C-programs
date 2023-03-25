#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("\n\nWelcome to ABC Pvt Ltd...\n\n");
    char *a;
    int n = 5;
    a = (char *)malloc(n * sizeof(char));
    for (int i = 1; i < 4; i++)
    {
        int m;
        printf("Employee:%d\n", i);

        printf("Enter number of characters in your EID\n");
        scanf("%d", &m);
        a = (char *)realloc(a, (m + 1) * sizeof(char));
        printf("Enter your EID\n");
        for (int i = 0; i <= m; i++)
        {
            scanf("%c", &a[i]);
        }
        printf("\n");
        printf("Your EID is");
        for (int i = 0; i <= m; i++)
        {
            printf("%c", a[i]);
        }
        printf("\n\n");
    }
    free(a);
    return 0;
}