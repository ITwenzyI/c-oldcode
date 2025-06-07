#include <stdio.h>

void cashback(int euros, int *fifties, int *twenties, int *tens, int *fives);

int main(void) {
    int euros = 0;
    int fifties = 0;
    int twenties = 0;
    int tens = 0;
    int fives = 0;
    printf("Enter number of euros: \n");
    scanf("%d", &euros);
    cashback(euros, &fifties, &twenties, &tens, &fives);

    printf("Chashback:\n\n");
    printf("Euros:      %d Euro\n", euros);
    printf("Fifties:    %dx\n", fifties);
    printf("Twenties:   %dx\n", twenties);
    printf("Tens:       %dx\n", tens);
    printf("Fives:      %dx\n", fives);
    return 0;
}

void cashback(int euros, int *fifties, int *twenties, int *tens, int *fives) {
    *fifties = euros / 50;
    euros = euros % 50;
    *twenties = euros / 20;
    euros = euros % 20;
    *tens = euros / 10;
    euros = euros % 10;
    *fives = euros / 5;
    euros = euros % 5;
}