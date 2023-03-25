#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter value of n\n");
    scanf("%d",&n);
    int*a;
    //use of malloc
    a=(int*)malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter value of a[%d]\n",i);
        scanf("%d",&a[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("value of a[%d] is %d\n",i,a[i]);
        
    }
    //use of free
    free(a);
    //use of realloc
    a=(int*)realloc(a,sizeof(n));
    scanf("%d",&n);
    //use of calloc
    a=(int*)calloc(n,sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter value of a[%d]\n",i);
        scanf("%d",&a[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("value of a[%d] is %d\n",i,a[i]);
        
    }
    return 0;
    
}