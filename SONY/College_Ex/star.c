#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, p;

    printf("Enter the no. of stars you want to print\n");
    scanf("%d", &p);

    for (i = 1; i <= p; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
