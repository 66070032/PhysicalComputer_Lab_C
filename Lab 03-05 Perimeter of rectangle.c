#include<stdio.h>

int main() {
    double width, height;
    scanf("%lf %lf", &width, &height);
    double perimeter = 2 * (width + height);
    printf("Perimeter of rectangle = %.4lf units", perimeter);
    return 0;
}