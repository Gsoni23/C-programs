#include <stdio.h>

int main()
{
    int a, i;
    for (i = 0; ; i++)
    {
        printf("%d\nEnter your age\n", i);
        scanf("%d", &a);

        if (a == 25)
        {
            break;
        }
        if (a == 10)
        {
            continue;
        }

        printf("Your age is not 10");
    }

    return 0;
}