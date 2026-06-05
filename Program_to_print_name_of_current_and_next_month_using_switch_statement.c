#include <stdio.h>
int main() {
    int month;
    printf("Enter a month number (1-12): ");
    scanf("%d", &month);
    switch(month) {
        case 1:
            printf("Current month: January\n");
            printf("Next month: February\n");
            break;
        case 2:
            printf("Current month: February\n");
            printf("Next month: March\n");
            break;
        case 3:
            printf("Current month: March\n");
            printf("Next month: April\n");
            break;
        case 4:
            printf("Current month: April\n");
            printf("Next month: May\n");
            break;
        case 5:
            printf("Current month: May\n");
            printf("Next month: June\n");
            break;
        case 6:
            printf("Current month: June\n");
            printf("Next month: July\n");
            break;
        case 7:
            printf("Current month: July\n");
            printf("Next month: August\n");
            break;
        case 8:
            printf("Current month: August\n");
            printf("Next month: September\n");
            break;
        case 9:
            printf("Current month: September\n");
            printf("Next month: October\n");
            break;
        case 10:
            printf("Current month: October\n");
            printf("Next month: November\n");
            break;
        case 11:
            printf("Current month: November\n");
            printf("Next month: December\n");
            break;
        case 12:
            printf("Current month: December\n");
            printf("Next month: January\n");
            break;
        default:
            printf("Error: Value must be in the range of 1 - 12.\n");
            break;
    }

    return 0;
}
