#include<stdio.h>
/*Govind Soni
 Date: 01/02/2021*/

 int main(int argc, char const *argv[])
 {
     int a;
     printf("Enter your percentage\n");
     scanf("%d", &a);

     if(a>=80 && a<=100){
         printf("Very Good you got A grade.\a\n");
     }
     else if(a>=60 && a<80){
         printf("Good you got B grade.\a\n");
     }
     else if(a>=40 && a<60){
         printf("You need to improve. You got C grade.\a\n");
     }
     else{
         printf("sorry you are fail.\a\n");
     }
     return 0;
 }
  