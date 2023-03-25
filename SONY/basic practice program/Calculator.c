#include <stdio.h>

int main(int argc, char const *argv[])
{
    char AO;
    float a, b;

    
    printf("Enter arithmatic operator\n");
    scanf("%c", &AO);
    
    printf("Enter number a\n");
    scanf("%f", &a);
    
    printf("Enter number b\n");
    scanf("%f", &b);

    switch (AO)
    {
    case '+':
        printf("%f", a + b);
        break;
    case '-':
        printf("%f", a - b);
        break;
    case '*':
        printf("%f", a * b);
        break;
    case '/':
        printf("%f",a / b);
        break;
    }

    return 0;
}
