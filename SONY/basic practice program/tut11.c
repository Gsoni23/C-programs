#include<stdio.h>


int main(int argc, char const *argv[])
{
    int age;
printf("Enter your age\n");
scanf("%d", &age);

switch (age)
{
case 5:
printf("You are eligible for children chess competition.\n");
break;

case 8:
printf("You are eligible for teenager chess competition.\n");
break;

case 18:
printf("You are eligible for aduly chess competition.\n");
break;

default:
printf("Sorry you are not eligible for this.\n");
break;
}




    return 0;
}
