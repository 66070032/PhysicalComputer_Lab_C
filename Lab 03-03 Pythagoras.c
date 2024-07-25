#include<stdio.h>
#include<math.h>

int main() {
    double num_1, num_2;
    scanf("%lf %lf", &num_1, &num_2);
    printf("%.2lf", sqrt(pow(num_1, 2) + pow(num_2, 2)));
    return 0;
}