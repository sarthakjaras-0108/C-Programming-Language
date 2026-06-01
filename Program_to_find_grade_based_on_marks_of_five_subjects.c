#include <stdio.h>
int main() {
    float m1, m2, m3, m4, m5;
    float total, percentage;
    printf("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total / 500.0) * 100;
    printf("Percentage: %.2f%%\n", percentage);
    if (percentage >= 75.0) {
        printf("Grade: Distinction\n");
    } else if (percentage >= 60.0) {
        printf("Grade: First Class\n");
    } else if (percentage >= 50.0) {
        printf("Grade: Second Class\n");
    } else if (percentage >= 35.0) {
        printf("Grade: Pass Class\n");
    } else {
        printf("Grade: Fail\n");
    }

    return 0;
}
