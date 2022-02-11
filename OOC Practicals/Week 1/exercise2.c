#include <stdio.h>

int Square(int); //function to square
int Cube(int); //function to cube

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Square: %d\n", Square(num));
    printf("Cube: %d\n", Cube(num));
    return 0;
}

int Square(int x) {
    int sqr = x * x;
    return sqr;
}

int Cube(int x) {
    int cube = x * x * x;
    return cube;
}