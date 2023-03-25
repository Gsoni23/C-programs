#include <stdio.h>

int factorial(int a)
{
    if (a == 1 || a == 0)
    {
        return 1;
    }
    else
    {
        return (a * factorial(a - 1));
    }
}

int main(int argc, char const *argv[])
{
    //for(int a=1;a<=5;a++){
    //    printf("Factorial is %d\n",)
    //}
    int b;
    printf("Enter the number you want the factorial of\n");
    scanf("%d", &b);
    printf("The factorial of %d is %d", b, factorial(b));

    return 0;
}
