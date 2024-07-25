#include<stdio.h>

int main() {
    int num_a, num_b;
    scanf("%d %d", &num_a, &num_b);
    if (num_a != num_b) {
        printf("%d - %d = %d", num_a, num_b, num_a - num_b);
    }
    else {
        printf("%d + %d = %d", num_a, num_b, num_a + num_b);
    }
    return 0;
}