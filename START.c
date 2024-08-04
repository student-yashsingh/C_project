/*             PROJECT1         
*/
/*         #### A FUN ####    */
/* We will WAP that generates a random number and asks the player 
to guess it.if the player's guess is higher than the actual nmuber
,the program displays"LOWER NUMBER PLEASE...".similarly if the
 user's guess is too low,the program prints"HIGHER NMUBER PLEASE...
 
 
   when the user guesses the correct number,the program displays
   the number of guesses the player used to arrive at the number.*/

/*   HINT:
            ###  USE LOOPS
            ###  USE A RANDOM NUMBER GENERATOR
*/
//      RANDOM NUMBER GENERATOR
# include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number;
    int guess;
    int count =0;
    srand(time(0));
    number=rand()%100+1;//generates a random number between 1 and 100
    
    // keep running the code untill the number is perfectly guessed!!!!
    do{
        printf("enter the number u guess:\t");
        scanf("%d",&guess);
        

        if(guess>number){
            printf("enter the lower nmuber please\n");
        }
        else if(guess<number){
            printf("enter the higher number please\n");
        }
        else{
            printf("congratulations ,finally u have the correct guess\n");

        }
        count++;
    }while(number!=guess);
    printf("total number of guesses are %d",count);
     
    return 0;
}    
   
//                     ###DONE###