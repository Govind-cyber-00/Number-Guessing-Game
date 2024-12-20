#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int number, guess,numberguesses=1;
srand(time(0));
number = rand() % 100+1; // generates a random number between 1 to 100
// printf("The number is %d\n",number);
// keep running the loop uni the number is guested
do{
printf("Guess the number between 1 to 100\n");
scanf("%d",&guess);
if (guess>number){
    printf("Lower number please!\n");
}
    else if(guess<number){
        printf("Higher number please!\n");
    }
    else{
        printf("You guessed it in %d\n attempts\n",numberguesses);
    }
    numberguesses++;
}
while(guess!=number);

    return 0;
}