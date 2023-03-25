#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 75;
    int *ptr = &a;

    printf("Value of a is %d\n", *ptr);
    printf("Value of a is %d\n", a);
    printf("Address of a is %p\n", &a);
    printf("Address of a is %p\n", ptr);
    printf("Address of a is %d\n", ptr);
    printf("Address of pointer is %p\n", &ptr);
    return 0;
}
