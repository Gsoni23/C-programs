#include<stdio.h>
#include<string.h>

void main()
{
    // char agent[20] = {'m','a','\0'} ;
    // puts(agent);
    // char name[20];
    // printf("Enter your character name\n");
    // gets(name);
    // puts(name);
    // printf("%s",name);

    char s1[20];
    char s2[20];
    char s3[20];
printf("Enter name of two friends\n");
    gets(s1);
    gets(s2);
    //printf("%s is friend of %s\n",s1,s2);
    strcpy (s3,strcat(s1,s2));   //example ofstrcpy
    printf("%s\n",s3);
    //printf("%s\n",strcmp(s2,s1));

    printf("Length of s1 %d\n",strlen(s1));     //example of strlen
    printf("Reverse of S1 is %s\n",strrev(s1));     //example of strrev
    printf("combination of S1 & S2 %s\n",strcat(s1,s2));     //example of strcat


    


    
    
}