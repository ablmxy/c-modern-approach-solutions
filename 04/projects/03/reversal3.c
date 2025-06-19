#include <stdio.h>

int main(void) {
    int n1, n2, n3;

    printf("Enter first digit: ");
    scanf("%d%", &n1);
    printf("Enter second digit: ");
    scanf("%d%", &n2);
    printf("Enter third digit: ");
    scanf("%d%", &n3);

    printf("The reversal is: %d%d%d\n", n3, n2, n1);
}