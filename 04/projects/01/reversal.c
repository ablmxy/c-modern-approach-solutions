#include <stdio.h>

int main(void) {
    int number;
    printf("Enter a two digit number: ");
    scanf("%d", &number);

    int firstDigit = number % 10;
    int secondDigit = number / 10;

    printf("The reversal is: %d%d", firstDigit, secondDigit);
}