#include <stdio.h>

int main() {
    float per;

    printf("Enter the student's percentage: ");
    scanf("%f", &per);

    if (per >= 75) {
        printf("Grade: Distinction\n");
    } else if (per >= 60) {
        printf("Grade: A\n");
    } else if (per >= 55) {
        printf("Grade: B\n");
    } else if (per >= 40) {
        printf("Grade: Pass\n");
    } else {
        printf("Grade: Fail\n");
    }

    return 0;
}
