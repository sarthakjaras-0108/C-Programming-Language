#include <stdio.h>

int main() {
    int n, i, f = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        f = 0;
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                f = 0;
                break;
            }
        }
    }

    if (f == 1) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
