#include <stdio.h>
void main() {
    int num, remainder, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    do {
        remainder = num % 10;
        sum = sum + remainder;
        num = num / 10;
    } while (num > 0);
    printf("Sum of digits = %d", sum);
}
