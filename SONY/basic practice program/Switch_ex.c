#include<stdio.h>

int main(int argc, char const *argv[])
{
    char Subject, Science, Maths, Both;
    printf("Enter the subject in which you pass.\n Science\n Maths\n Both\n");
    scanf("%c", &Subject);

    switch (Subject)
    {
    case Science:
        printf("Congratulations you won 10$\a");
        break;
    case Maths:
    printf("Congratulations you won 15$\a");
    break;
    case Both:
    printf("Congratulations you won 45$\a");
    break;


    default:
    printf("Work hard next time.\a");
        break;
    }
    
    



    return 0;
}
