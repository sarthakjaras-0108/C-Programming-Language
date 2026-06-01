#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number % 2 == 0 && number % 5 == 0) {
        printf("%d is even and divisible by 5.\n", number);
    } else {
        printf("%d is not even and divisible by 5.\n", number);
    }
    return 0;
}
