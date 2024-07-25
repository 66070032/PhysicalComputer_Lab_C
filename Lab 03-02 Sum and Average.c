#include<stdio.h>

int main() {
    double num_1, num_2, num_3, num_4;
    scanf("%lf %lf %lf %lf", &num_1, &num_2, &num_3, &num_4);
    double sum = num_1 + num_2 + num_3 + num_4;
    double average = sum / 4;
    printf("Summation is %.2lf\nAverage is %.3lf", sum, average);
    return 0;
}