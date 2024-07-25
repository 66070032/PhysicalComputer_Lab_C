#include<stdio.h>

int main() {
    float height, weight, BMI;
    scanf("%f %f", &height, &weight);
    height = height / 100;
    BMI = weight / (height * height);
    printf("%f", BMI);
    return 0;
}