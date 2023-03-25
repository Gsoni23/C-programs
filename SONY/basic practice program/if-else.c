#include<stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Welcome to Voting portal\n");

    printf("Enter you age in years\n");
    scanf("%d",&age);

    if (age>=18){
        printf("You are eligible for voting\a\n");                
    }
    else
    {
        printf("Ghar Jao Bacche");
    }
    

    return 0;
}
