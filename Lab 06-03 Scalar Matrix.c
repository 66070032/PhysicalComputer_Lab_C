#include<stdio.h>

int main() {
    double array[3][3] = {};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%lf", &array[i][j]);
        }
    }
    if (array[0][1] == 0 && array[0][2] == 0 && array[1][0] == 0 && array[1][2] == 0 && array[2][0] == 0 && array[2][1] == 0) {
        if (array[0][0] == array[1][1] && array[1][1] == array[2][2]) {
            printf("%s", "This is a scalar matrix");
        }
    } else {
        printf("%s", "This is not a scalar matrix");
    }
    return 0;
}