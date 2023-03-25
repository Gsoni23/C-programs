#include <stdio.h>

int func()
{
    static int a = 5;
    a++;
    return a;
}
int main()
{
    int val = func();
    printf("Value is %d\n", val);
    val = func();
    printf("Value is %d\n", val);
    val = func();
    printf("Value is %d\n", val);

    return 0;
}