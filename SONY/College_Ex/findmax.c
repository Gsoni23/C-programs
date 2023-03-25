#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Enter three numbers\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("%d is the largest number\n", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is the largest number\n", b);
    }
    else if (c > a && c > b)
    {
        printf("%d is the largest number\n", c);
    }
    else if (a == b && b == c && a == c)
    {
        printf("All are same\n");
    }
    return 0;
}
