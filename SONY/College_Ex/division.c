#include <stdio.h>

int main(int argc, char const *argv[])
{
    int M, E, EE, C, CS;
    printf("Enter your Maths marks\n");
    scanf("%d", &M);
    printf("Enter your English marks\n");
    scanf("%d", &E);
    printf("Enter your Electrical marks\n");
    scanf("%d", &EE);
    printf("Enter your Chemistry marks\n");
    scanf("%d", &C);
    printf("Enter your Computer Science marks\n");
    scanf("%d", &CS);

    int pt;
    pt = (M + E + EE + C + CS) / 5;

    if (pt >= 60)
    {
        printf("Your Division is First\n");
    }
    if (pt >= 48 && pt <= 59)
    {
        printf("Your Division is Second\n");
    }
    if (pt >= 36 && pt <= 47)
    {
        printf("Your Division is Third\n");
    }
    if (pt < 36)
    {
        printf("You are Fail\n");
    }

    return 0;
}
