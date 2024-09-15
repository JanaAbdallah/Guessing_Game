#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include"Guessing.h"

void GuessNum(int random_number){
    int Num;
    while(1){
    printf("\nGuess the Number : \n");
    scanf("%d",&Num);

    if(Num<random_number){
        printf("The Number is Higher than the number that you have guessed ,try again");
    }
    else if(Num>random_number){
         printf("The Number is Lower than the number that you have guessed ,try again");
    }
    else if(Num==random_number){
        printf("Congratulations! You guessed the right number!\n");
        break;
    }
}

}

void GenerateRandomNum(){

    int lower = 1, upper = 50; 
    int random_number;

    srand(time(NULL));

    random_number = (rand() % (upper - lower + 1)) + lower;
    
    GuessNum(random_number);

}
