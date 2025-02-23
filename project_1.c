#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    // initializing random number 
    srand(time(0));
    // generation of random number between 1 to 100
    int random_number = (rand()%100 + 1 );
    /*  printf("The random number is %d",random_number);
    it provides the random number which the user have to guess in several attempts */
    int no_of_guesses = 0;
    int guessed ;
    do{
        printf("Guess the number : \n ");
        scanf("%d",&guessed);
        if(guessed > random_number){
            printf("Provide  a lower number please !! \n");
        }
        else if(guessed < random_number){
            printf("Provide a higher number please !! \n");
        }
        else{
            printf("Congrats !! You guessed the number \n");
        }
        no_of_guesses++;
    }
    while (guessed != random_number) ;
    printf("you guessed the number in %d guesses ",no_of_guesses);
    return 0;

}