#include <stdio.h>

/*Govind Soni
Fibonacci series*/

int main()
{
    int recursive(int n);
    int iterative(int n);
    int G;
    printf("Enter the place of fibonacci series you want\n");
    scanf("%d", &G);

    printf("The vale of fibonacci series by iterative at %d is equal to %d\n", G, iterative(G));
    printf("The vale of fibonacci series by recursive at %d is equal to %d\n", G, recursive(G));
    return 0;
}

int recursive(int n)
{

    if (n == 1 || n == 2)
    {
        return n - 1;
    }

    else
    {
        return recursive(n - 1) + recursive(n - 2);
    }
}

int iterative(int n)
{
 int a,b;
 a=0;
 b=1;
    for (int i = 1; i < n ; i++)
    {
        b=a+b;
        a=b-a;
    }
    return a;
}

