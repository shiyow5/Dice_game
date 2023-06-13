#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define dice_size 2

int dice_roll();

int main(){
    int Dice[dice_size];
    int total=0;

    srand(time(NULL));

    printf("Rolling dice...\n");

    for (int i=0; i<dice_size; i++){
        total += Dice[i] = dice_roll();
    }

    for (int i=0; i<dice_size; i++){
        printf("Die %d: %d\n", i+1, Dice[i]);
    }
    printf("Total value: %d\n", total);
}

int dice_roll(){
    return (rand() % 6 + 1);
}