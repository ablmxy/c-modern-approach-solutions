#include <stdio.h>

int main(void) {
    long upc;

    printf("Enter the first 11 digits of a UPC:");
    scanf("%11d", &upc);

    int d1 = upc / 10000000000;
    int d2 = upc / 1000000000 % 10;
    int d3 = upc / 100000000 % 10;
    int d4 = upc / 10000000 % 10;
    int d5 = upc / 1000000 % 10;
    int d6 = upc / 100000 % 10;
    int d7 = upc / 10000 % 10;
    int d8 = upc / 1000 % 10;
    int d9 = upc / 100 % 10;
    int d10 = upc / 10 % 10;
    int d11 = upc % 10;

    int firstSum = d1 + d3 + d5 + d7 + d9 + d11;
    int secondSum = d2 + d4 + d6 + d8 + d10;
    int total = (3 * firstSum) + secondSum;
    int checkDigit = 9 - (total - 1) % 10;

    printf("Check digit: %d", checkDigit);
}
