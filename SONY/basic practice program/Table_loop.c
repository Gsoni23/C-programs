#include <stdio.h>

/*Govind Soni
  Date: 29/12/2020
  Purpose: For table till n*/

int main(int argc, char const *argv[])
{
    int p, q, i = 1;
    printf("Enter the number you want the table of\n");
    scanf("%d", &p);

    printf("Enter the number till the table you want\n");
    scanf("%d", &q);

    do
    {
        printf("%d * %d = %d\n", p, i, p * i);
        i = i + 1;

    } while (i <= q);

    return 0;
}
