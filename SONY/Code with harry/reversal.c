#include <stdio.h>
void reversal(int X[])
{
    int Y[5];
    for (int i = 0; i < 5; i++)
    {
        Y[i] = X[i];
    }

    for (int i = 0; i < 5; i++)
    {
        X[i] = Y[4 - i];
    }
}
int main()
{
    void reversal(int x[]);
    int A[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of A[%d]\n",i);
        scanf("%d",&A[i]);
    }
    printf("Array before reversal\n");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d ", A[i]);
    }
    printf("\n");

    reversal(A);

    printf("Array after reversal\n");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d ", A[i]);
    }

    return 0;
}