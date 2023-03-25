#include <stdio.h>
int main()
{
    int i, j;
    int A[2][2];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter value of A[%d][%d]\n", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf(" %d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}