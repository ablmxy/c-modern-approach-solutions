#include <stdio.h>

int main(void) {
 int number;
 printf("Enter a three digit number: ");
 scanf("%d", &number);

 int firstDigit = number % 10;
 int lastTwoDigits = number / 10;
 int secondDigit = lastTwoDigits % 10;
 int thirdDigit = lastTwoDigits / 10;

 printf("The reversal is: %d%d%d", firstDigit, secondDigit, thirdDigit);
}