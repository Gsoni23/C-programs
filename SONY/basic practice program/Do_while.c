#include <stdio.h>
// Govind Soni
// 29/12/2020
int main(int argc, char const *argv[])
{
    int num, index = 0;
    printf("Enter a Number\n");
    scanf("%d", &num);

    do
    {
        printf("%d\n", index);
        index = index + 1;
    } while (index <= num);

    return 0;
}
