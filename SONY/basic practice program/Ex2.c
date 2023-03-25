#include<stdio.h>
/*Author : Govind Soni
  Purpose : Prize distribution in form of Rs
  Date : 26/12/2020 */


  int main(int argc, char const *argv[])
  {
      int a;

      printf("Enter the code of subject you passed\n");
      printf("For Maths press 1\n");
      printf("For Science press 2\n");
      printf("For Both press 3\n");

      scanf("%d",&a);
      

      if(a==3){
          printf("Congratulations you win the prize of 45$\a\n");
      }
    else if(a==2) {
        printf("Congratulations you win the prize of 15$\a\n");
      }
      else if(a==1) {
        printf("Congratulations you win the prize of 15$\a\n");
     }
     else {
         printf("Work hard next time and win the prize.\a\n");
     }
      return 0;
  }
  