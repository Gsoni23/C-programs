#include <stdio.h>

void twist(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

int main()
{
    int a, b;
    printf("Enter values of a & b\n");
    scanf("%d%d", &a, &b);

    printf("Values of a = %d & b = %d\n", a, b);

    twist(&a, &b);
    printf("Twisted Values of a = %d & b = %d\n", a, b);

    return 0;
}
