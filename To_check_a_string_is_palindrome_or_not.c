#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int len, i;
    int f = 0;

    printf("Enter a string: ");
    scanf("%s", s);

    len = strlen(s);

    for (i = 0; i < len / 2; i++) {
        if (s[i] != s[len - i - 1]) {
            f = 1;
            break;
        }
    }

    if (f == 0) {
        printf("%s is a palindrome.\n", s);
    } else {
        printf("%s is not a palindrome.\n", s);
    }

    return 0;
}
