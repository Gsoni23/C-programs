#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int random_no(int n){
    srand(time(NULL));
    return rand() % n;
}
int main()
{
    int n;
    printf("Enter n\n");
    scanf("%d",&n);
    printf("The random number between 0 to %d is %d\n",n,random_no(n));
    return 0;
}