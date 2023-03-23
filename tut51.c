#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int generateRandomnumber(int n){
    srand(time(NULL));//srand takes seed  as an input and is defined inside stdlib.h
    return rand()%n;
}
int main()
{
    printf("the random number between o to 100 is %d\n",rand()%100);
    return 0;
}

//CREATE rock paper scissors game
/*player1:rock
player2:computer:scissor-->paper 1 gets 1point
rock vs scissor-->rock win
paper va scissor-->scissor win
rock vs paper -->paper win
write a c program to allow user to play this game three time with computer log the scores of computer and the player .Display the name of the player at the end.
NOTES:you have to display the name of the player during trhe game take user as input from the user.

*/