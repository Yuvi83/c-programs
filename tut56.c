//CREATE rock paper scissors game
/*player1:rock
player2:computer:scissor-->paper 1 gets 1point
rock vs scissor-->rock win
paper va scissor-->scissor win
rock vs paper -->paper win
write a c program to allow user to play this game three time with computer log the scores of computer and the player .Display the name of the player at the end.
NOTES:you have to display the name of the player during trhe game take user as input from the user.

*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int generateRandomnumber(int n){
    srand(time(NULL));//srand takes seed  as an input and is defined inside stdlib.h
    return rand()%n;
}
int greater(char char1 , char char2){
    // for rock paper scissor :return 1 if c1>c2 and o otherwise.if c1==c2 it will return -1.
    if (char1==char2)
    {
        return -1;
    }
    
   else if ((char1=='r')&&(char2=='s'))
    {
        return 1;
    }
    else if ((char2=='r')&&(char1=='s'))
    {
        return 0;
    }
    else if ((char1=='p')&&(char2=='r'))
    {
        return 1;
    }
    else if ((char2=='p')&&(char1=='r'))
    {
        return 0;
    }
     

    else if ((char1=='s')&&(char2=='p'))
    {
        return 1;
    }
     else if ((char2=='s')&&(char1=='p'))
    {
        return 0;
    }
}
int main()
{
    int playerscore=0,compscore = 0 , temp;
    char playerchar , compchar;
    char dict[] = {'r','p','s'};


    printf("welcome to the rock ,paper ,scissors\n");
    printf("choose 1 for rock, 2 for paper , 3 for scissors\n");


     for(int i = 0; i < 3; i++)
    {

        //take player 1 input
    printf("player 1's Turn:\n");
    printf("choose 1 for rock, 2 for paper , 3 for scissors\n");
     scanf("%d",&temp);
     getchar();
     playerchar = dict[temp-1];
     printf("you choose %c \n",playerchar);


//generate computer input
     printf("computer's Turn:\n");
    printf("choose 1 for rock, 2 for paper , 3 for scissors\n");
     temp = generateRandomnumber(3)+1;
     playerchar = dict[temp-1];
     printf("cpu choose %c \n",compchar);


//comparre the score
     if (greater(compchar,playerchar)==1)
     {
        compscore+=1;
        printf("cpu got it!\n");
     }
     else if (greater(compchar,playerchar)==-1)
     {
       compscore+=1;
       playerscore+=1;
       printf("its a draw!");
     }
     else{
        playerscore+=1;
        printf("you got it!\n");
     }
     printf("you:%d\n cpu:%d\n\n",playerscore ,compscore);

     
    }



    if (playerscore>compscore)
    {
        printf("you win the game\n");   
    }
    else if (playerscore<compscore)
    {
        printf("cpu win the game\n");
    }
    else{
        printf("its a draw \n");
    }

    /*printf("the random number between 0 to 5 is %d\n",generateRandomnumber(2));*/
    return 0;
}
// generateRandomnumber(2));