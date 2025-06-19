#include <stdio.h>

int main(void) {
    int number;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);

    int lastDigit = number % 8;
    int fourthDigit = number / 8 % 8;
    int thirdDigit = number / 8 / 8 % 8;
    int secondDigit = number / 8 / 8 / 8 % 8;
    int firstDigit = number / 8 / 8 / 8 / 8 % 8;

    printf("In octal, your number is: %d%d%d%d%d", firstDigit, secondDigit, thirdDigit, fourthDigit, lastDigit);
}