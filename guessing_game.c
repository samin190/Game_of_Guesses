#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main () {
    int random_number,guess;
    int no_of_guess = 0;
    srand (time(NULL));
     random_number = rand() % 100 + 1; //generating between 0 to 100
    


    printf("welcome to the world of Guessing Numbers!\n");
   
    do{
        printf("\n Please enter your guess between (1 to 100):  ");
    scanf("%d",&guess);
    no_of_guess++;
    if (guess < random_number ){
        printf("Guess a larger number.\n");
    }else if (guess > random_number){
        printf("Guess a smaller number.\n");
    }else {
        printf("congratulations!!!!You have successfully guessed the number in %d attempts", no_of_guess);
    }
 }while (guess != random_number );

 printf("\n Bye Bye, Thanks for playing!\n");
 printf("\n Developed by :sam.__.in\n");

return 0;
}