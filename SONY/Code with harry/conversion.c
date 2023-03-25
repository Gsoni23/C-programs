#include <stdio.h>

int main()
{
    float kmsTomiles = 0.621371;
    float inchesTofeet = 0.0833333;
    float cmToinches = 0.393701;
    float poundsTokg = 0.453592;
    float inchesTometer = 0.0254;
    char input;
    float first, second;

    while (1)
    {
        cont:
        printf("Enter the conversion unit. press q for quit\n       1. kms to miles\n       2. inches to foot\n       3. cms to inches\n       4. pound to kgs\n       5. inches to meters\n");
        scanf(" %c", &input);

        switch (input)
        {
        case 'q':
            printf("Quitting the program...\n");
            goto over;
        case '1':
            printf("Enter the conversion value\n");
            scanf(" %f", &first);
            second = kmsTomiles * first;
            printf("%0.2f km is %0.2f miles\n\n\n", first, second);
            goto end;

        case '2':
            printf("Enter the conversion value\n");
            scanf(" %f", &first);
            second = inchesTofeet * first;
            printf("%0.2f inches is %0.2f feet\n\n\n", first, second);
            goto end;

        case '3':
            printf("Enter the conversion value\n");
            scanf(" %f", &first);
            second = cmToinches * first;
            printf("%0.2f cm is %0.2f inches\n\n\n", first, second);
            goto end;

        case '4':
            printf("Enter the conversion value\n");
            scanf(" %f", &first);
            second = poundsTokg * first;
            printf("%0.2f pound is %0.2f Kgs\n\n\n", first, second);
            goto end;
        case '5':
            printf("Enter the conversion value\n");
            scanf(" %f", &first);
            second = inchesTometer * first;
            printf("%0.2f inches is %0.2f meter\n\n\n", first, second);
            goto end;
        }

    }
end:
goto cont;
over:
    return 0;
}