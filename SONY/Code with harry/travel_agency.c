#include <stdio.h>
#include <string.h>
struct info
{
    char name[50];
    char license[20];
    char route[50];
    int km;
};

void main()
{
    int n;
    printf("Enter number of drivers\n");
    scanf("%d", &n);
    struct info driver[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter your name\n");
        scanf("%s", &driver[i].name);
        printf("Enter your license number\n");
        scanf("%s", &driver[i].license);
        printf("Enter your route\n");
        scanf("%s", &driver[i].route);
        printf("Enter travel distance\n");
        scanf("%d", &driver[i].km);
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        printf("Name: %s\n", driver[i].name);
        printf("License Number: %s\n", driver[i].license);
        printf("Route: %s\n", driver[i].route);
        printf("Distance travelled: %d\n", driver[i].km);
        printf("\n");
    }
}