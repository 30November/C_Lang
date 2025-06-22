#include <stdio.h>
#include <stdbool.h>

void printboard(char choice[])
{
    printf("\n     |     |    \n");
    printf("  %c  |  %c  |  %c \n", choice[0], choice[1], choice[2]);
    printf("     |     |    \n");
    printf("-----------------\n");
    printf("     |     |    \n");
    printf("  %c  |  %c  |  %c \n", choice[3], choice[4], choice[5]);
    printf("     |     |    \n");
    printf("-----------------\n");
    printf("     |     |    \n");
    printf("  %c  |  %c  |  %c \n", choice[6], choice[7], choice[8]);
    printf("     |     |    \n\n");
}

char checkwin(char s,char choice[])
{
    //Vertical winning's
    if (choice[0] == s && choice[3] == s && choice[6] == s) return s;
    if (choice[1] == s && choice[4] == s && choice[7] == s) return s;
    if (choice[2] == s && choice[5] == s && choice[8] == s) return s;
    
    //Horizontal winnings
    if (choice[0] == s && choice[1] == s && choice[2] == s)return s;
    if (choice[3] == s && choice[4] == s && choice[5] == s)return s;
    if (choice[6] == s && choice[7] == s && choice[8] == s) return s;
    
	//Diagonal winning 
    if (choice[0] == s && choice[4] == s && choice[8] == s) return s;
    if (choice[2] == s && choice[4] == s && choice[6] == s) return s;

    return 'A';
    
}

int main()
{
    //Player 1 deals with X
    //Player 2 deals with O
    printf("\n-----------------TIC TAC TOE GAME ----------------\n");
    printf("\n---------------- *BY AYUSHMAN GHOSH* ---------------\n");
    printf("\n---------------- *F.BY BISWAYAN B.MAL* ---------------\n");
    int pos,count=0;
    char choice[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    while (1)
    {
        // for Player 1
        labelX:
        printboard(choice);
        printf("Enter the position Player1 (X):");
        scanf("%d", &pos);
        if  (1<=pos && pos<=9)
		{
        	if (choice[pos-1]=='X' || choice[pos-1]=='O')
        	{printf("Somebody has already placed"); goto labelX;}
        	
			choice[pos-1]='X';
			count++;
		}
		else
		{ 
			printf("    INVALID INPUT    ");
			goto labelX;
		}

        if (checkwin('X',choice)=='X')
        {
            printboard(choice);
            printf("*************  PLAYER 1 wins  ****************");
            break;
        }
        // draw  reason: X O X O X O X O X ...Total:9
        if (count==9)
         {
             printboard(choice);
             printf("*************  DRAW   ****************");
             break;
         }
        // for Player 2
        labelO:
        printboard(choice);
        printf("Enter the position player2 (O):");
        scanf("%d", &pos);
        if  (1<=pos && pos<=9)
		{
        	if (choice[pos-1]=='X' || choice[pos-1]=='O')
        	{printf("Somebody has already placed"); goto labelO;}
        	
			choice[pos-1]='O';
			count++;
		}
		else
		{ 
			printf("Invalid Input");
			goto labelO;
		}

        if (checkwin('O',choice)=='O')
        {
            printboard(choice);
            printf("*************  PLAYER 2 wins  ****************");
            break;
        }

    }
    
    //For play Again
    int op; scanf("%d",&op,printf("\nDo you want to play again?(0/1)"));
	if (op) return main();
	return 0;

}          
