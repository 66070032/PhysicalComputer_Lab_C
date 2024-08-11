#include<stdio.h>

int main() {
    double array[6][3] = {};
    double result[3][3] = {};
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%lf", &array[i][j]);
        }
    }
    result[0][0] = (array[0][0] * array[3][0]) + (array[0][1] * array[4][0]) + (array[0][2] * array[5][0]);
    result[0][1] = (array[0][0] * array[3][1]) + (array[0][1] * array[4][1]) + (array[0][2] * array[5][1]);
    result[0][2] = (array[0][0] * array[3][2]) + (array[0][1] * array[4][2]) + (array[0][2] * array[5][2]);
    result[1][0] = (array[1][0] * array[3][0]) + (array[1][1] * array[4][0]) + (array[1][2] * array[5][0]);
    result[1][1] = (array[1][0] * array[3][1]) + (array[1][1] * array[4][1]) + (array[1][2] * array[5][1]);
    result[1][2] = (array[1][0] * array[3][2]) + (array[1][1] * array[4][2]) + (array[1][2] * array[5][2]);
    result[2][0] = (array[2][0] * array[3][0]) + (array[2][1] * array[4][0]) + (array[2][2] * array[5][0]);
    result[2][1] = (array[2][0] * array[3][1]) + (array[2][1] * array[4][1]) + (array[2][2] * array[5][1]);
    result[2][2] = (array[2][0] * array[3][2]) + (array[2][1] * array[4][2]) + (array[2][2] * array[5][2]);
    printf("%s\n", "A x B");
    printf("%.2lf %.2lf %.2lf\n", result[0][0], result[0][1], result[0][2]);
    printf("%.2lf %.2lf %.2lf\n", result[1][0], result[1][1], result[1][2]);
    printf("%.2lf %.2lf %.2lf\n", result[2][0], result[2][1], result[2][2]);
    return 0;
}