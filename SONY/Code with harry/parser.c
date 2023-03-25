#include <string.h>
#include <stdio.h>
void parser(char *string)
{
    int i, in = 0, index = 0;
    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';

    // To remove trailing spaces.
    while (string[0] == ' ')
    {
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i + 1];
        }
    }
    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string)-1] = '\0';  //replace all ending spaces with null character
    }
}

int main()
{

    char string[] = {"<H1>    This program is made by Master Govind.    </H1>"};
    parser(string);
    printf("This is the string  ~~%s~~ \n", string);

    return 0;
}