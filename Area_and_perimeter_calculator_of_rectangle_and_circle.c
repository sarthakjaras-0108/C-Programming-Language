#include <stdio.h>
#define PI 3.14159

int main() {
    float length, breadth, radius, rect_area, rect_perimeter, circle_area, circle_circumference;
    
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("\nEnter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    printf("\nEnter the radius of the circle: ");
    scanf("%f", &radius);

    rect_area = length * breadth;
    rect_perimeter = 2 * (length + breadth);

    circle_area = PI * radius * radius;
    circle_circumference = 2 * PI * radius;

    printf("\n--- Rectangle Results ---");
    printf("\nArea: %.2f", rect_area);
    printf("\nPerimeter: %.2f", rect_perimeter);

    printf("\n\n--- Circle Results ---");
    printf("\nArea: %.2f", circle_area);
    printf("\nCircumference: %.2f\n", circle_circumference);

    return 0;
}
