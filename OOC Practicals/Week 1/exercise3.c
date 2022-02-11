#include <stdio.h>

float area(float x, float y); //function to find area

int main() {
    float yard_x, yard_y, house_x, house_y;
    printf("Enter yard length: ");
    scanf("%f", &yard_x);
    printf("Enter yard width: ");
    scanf("%f", &yard_y);
    printf("Enter house length: ");
    scanf("%f", &house_x);
    printf("Enter house width: ");
    scanf("%f", &house_y);
    float areaLawn = area(yard_x, yard_y) - area(house_x, house_y);
    printf("\nArea of lawn is: %.2f", areaLawn);
    return 0;
}

float area(float x, float y) {
    return x * y; 
}