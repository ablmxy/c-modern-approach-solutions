#include <stdio.h>

int main(void) {
    long long upc;

    printf("Enter the first 12 digits of an EAN:");
    scanf("%lld", &upc);

    int d1 = upc / 100000000000;
    int d2 = upc / 10000000000 % 10;
    int d3 = upc / 1000000000 % 10;
    int d4 = upc / 100000000 % 10;
    int d5 = upc / 10000000 % 10;
    int d6 = upc / 1000000 % 10;
    int d7 = upc / 100000 % 10;
    int d8 = upc / 10000 % 10;
    int d9 = upc / 1000 % 10;
    int d10 = upc / 100 % 10;
    int d11 = upc / 10 % 10;
    int d12 = upc % 10;

    int firstSum = d1 + d3 + d5 + d7 + d9 + d11;
    int secondSum = d2 + d4 + d6 + d8 + d10 + d12;
    int total = (3 * secondSum) + firstSum;
    int checkDigit = 9 - (total - 1) % 10;

    printf("Check digit: %d", checkDigit);
}
