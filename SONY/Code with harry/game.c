#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int random_no(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int main()

{
    char name[26];
    printf("Enter player name\n");
    gets(name);

    int move, comp, player_run = 0, comp_run = 0;

    // Rock 0 paper 1 scissor 2

    for (int i = 0; i < 3; i++)
    {

        comp = random_no(3);

        printf("%s vs Computer round %d\n", name, i + 1);

        printf("Enter\n 0 for Rock\n 1 for paper\n 2 for scissor\n");
        scanf("%d", &move);

        if (move == comp)
        {
            
        }

        else if (move == 0 && comp == 1)
        {
            comp_run++;
        }
        else if (move == 2 && comp == 0)
        {
            comp_run++;
        }
        else if (move == 1 && comp == 2)
        {
            comp_run++;
        }

        else if (move == 1 && comp == 0)
        {
            player_run++;
        }
        else if (move == 0 && comp == 2)
        {
            player_run++;
        }
        else if (move == 2 && comp == 1)
        {
            player_run++;
        }
        
        printf("%s is %d & Computer is %d\n",name,player_run,comp_run);
        
    }
    
    printf("Final score between %s is %d & Computer is %d\n",name,player_run,comp_run);

    if(player_run>comp_run){
        printf("%s is Winner\n",name);
    }
    else if(player_run<comp_run){
        printf("Computer is Winner\n");
    }
    else if(player_run==comp_run){
        printf("This game is a draw\n");
    }
    


    return 0;
}