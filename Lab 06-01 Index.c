#include<stdio.h>

int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
int N[] = {1, 3, 9, 7, 11, 15, 19};

int main() {
    int number = 0, isNumber = 0;
    while (number < 1 || number > 20) {
        scanf("%d", &number);
    }
    // Find in M array;
    for (int i = 0; i < 8; i++) {
        if (number == M[i]) {
            printf("%d is in M at index [%d]", M[i], i);
            isNumber = 1;
        }
    }
    // Find in N array;
    for (int i = 0; i < 7; i++) {
        if (number == N[i]) {
            printf("%d is in N at index [%d]", N[i], i);
            isNumber = 1;
        }
    }
    if (isNumber == 0) {
        printf("%d is not in neither M nor N", number);
    }
    return 0;
}