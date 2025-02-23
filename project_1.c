<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    int randomnumber =(rand()%100)+1;
    int no_of_guesses = 0;
    int guessed ;
   
    do
     {
        printf("Guess the number : \n ");
        scanf("%d",&guessed);
        if(guessed < randomnumber){
            printf("Higher number please !! \n");
        }
        else if(guessed > randomnumber){
            printf("Lower number please !! \n");
        }
        else{
            printf("You guessed the right number , congrats !! \n");
        }
        no_of_guesses++;
    }
    while(guessed!=randomnumber);
    printf("You guessed the number in %d guesses ",no_of_guesses);
    return 0;

=======
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    int randomnumber =(rand()%100)+1;
    int no_of_guesses = 0;
    int guessed ;
   
    do
     {
        printf("Guess the number : \n ");
        scanf("%d",&guessed);
        if(guessed < randomnumber){
            printf("Higher number please !! \n");
        }
        else if(guessed > randomnumber){
            printf("Lower number please !! \n");
        }
        else{
            printf("You guessed the right number , congrats !! \n");
        }
        no_of_guesses++;
    }
    while(guessed!=randomnumber);
    printf("You guessed the number in %d guesses ",no_of_guesses);
    return 0;

>>>>>>> dac038add89f4848e7fecd8b0f75f58681b2d75b
}