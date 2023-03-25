#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter number a\n");
    scanf("%d",&a);
    
    printf("Enter number b\n");
    scanf("%d",&b);
   
    printf("%d + %d = %d \n",a,b, a+b);
    printf("%d - %d = %d \n",a,b, a-b);
    printf("%d * %d = %d \n",a,b, a*b);
    printf("%d / %d = %d \n",a,b, a/b);

    return 0;
}
