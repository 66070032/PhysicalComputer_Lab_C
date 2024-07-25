#include<stdio.h>

int main() {
    double num_1, num_2;
    scanf("%lf, %lf", &num_1, &num_2);
    printf("The sum of the given numbers : %.6lf", num_1 + num_2);
    printf("\nThe difference of the given numbers : %.6lf", num_1 - num_2);
    printf("\nThe product of the given numbers : %.6lf", num_1 * num_2);
    printf("\nThe quotient of the given numbers : %.6lf", num_1 / num_2);
    return 0;
}