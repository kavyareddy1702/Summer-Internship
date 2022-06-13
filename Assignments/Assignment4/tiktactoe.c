#include <stdio.h>
char board[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int winner();
void showboard();

int main()
{
    int player = 1, i, op;
    char label;


    printf("\n\n\tT I K   T A K   T O E\n\n");
    printf("\tPlayer 1 : O\n");
    printf("\tPlayer 2 : X\n\n\n");

    
    do
    {
        showboard();
        printf("\n\tEnter a number : \n");
        if(player%2){
            player = 1;
        }
        else{
            player =2;
        }

        printf("\tPlayer %d : ", player);
        scanf("%d", &op);
        printf("\n");
        if(player == 1){
            label='O';}
        else{
            label = 'X';
        }

        if (op == 1 && board[1] == '1')
            board[1] = label;
            
        else if (op == 2 && board[2] == '2')
            board[2] = label;
            
        else if (op == 3 && board[3] == '3')
            board[3] = label;
            
        else if (op == 4 && board[4] == '4')
            board[4] = label;
            
        else if (op == 5 && board[5] == '5')
            board[5] = label;
            
        else if (op == 6 && board[6] == '6')
            board[6] = label;
            
        else if (op == 7 && board[7] == '7')
            board[7] = label;
            
        else if (op == 8 && board[8] == '8')
            board[8] = label;
            
        else if (op == 9 && board[9] == '9')
            board[9] = label;
            
        else
        {
            printf("\tINVALID MOVE!\n");
            player--;
        }
        i = winner();

        player++;
    }while (i ==  - 1);
    
    showboard();
    
    if (i == 1)
        printf("\n\tPlayer %d has won!", --player);
    else
        printf("\n\tIt's a draw!");
    return 0;
}


int winner()
{

    // horizontal condition

    if (board[1] == board[2] && board[2] == board[3])
        return 1;
        
    else if (board[4] == board[5] && board[5] == board[6])
        return 1;
        
    else if (board[7] == board[8] && board[8] == board[9])
        return 1;

    //vertical condition
        
    else if (board[1] == board[4] && board[4] == board[7])
        return 1;
        
    else if (board[2] == board[5] && board[5] == board[8])
        return 1;
        
    else if (board[3] == board[6] && board[6] == board[9])
        return 1;
        

    // diagonal condition

    else if (board[1] == board[5] && board[5] == board[9])
        return 1;
        
    else if (board[3] == board[5] && board[5] == board[7])
        return 1;

    // no choice selected 
        
    else if (board[1] != '1' && board[2] != '2' && board[3] != '3' &&
        board[4] != '4' && board[5] != '5' && board[6] != '6' && board[7] 
        != '7' && board[8] != '8' && board[9] != '9')

        return 0;
    
    else
        return  - 1;
}


void showboard()
{
    printf("\t  %c  |  %c  |  %c \n", board[1], board[2], board[3]);
    printf("\t-----------------\n");
    printf("\t  %c  |  %c  |  %c \n", board[4], board[5], board[6]);
    printf("\t-----------------\n");
    printf("\t  %c  |  %c  |  %c \n", board[7], board[8], board[9]);
}


//wap to count total number of alphabets digits and special characters in a string