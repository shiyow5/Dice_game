#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define dice_size 2

void greeting();
int dice_roll();
void judge(int);

int main(){
    int Dice[dice_size];
    int total=0;

    greeting();

    srand(time(NULL));

    printf("Rolling dice...\n");

    for (int i=0; i<dice_size; i++){
        total += Dice[i] = dice_roll();
    }

    for (int i=0; i<dice_size; i++){
        printf("Die %d: %d\n", i+1, Dice[i]);
    }
    printf("Total value: %d\n", total);

    judge(total);
}

void greeting(){
    char name[10];

    printf("What is your name?\n> ");
    scanf("%s", name);

    printf("Hello, %s!\n", name);
}

int dice_roll(){
    return (rand() % 6 + 1);
}

void judge(int n){
    if (n > 7) printf("You won\n");
    else printf("You lost\n");
}