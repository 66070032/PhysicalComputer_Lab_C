#include<stdio.h>

int main() {
    int numbers, cur = 1;
    scanf("%d", &numbers);
    while (cur <= numbers) {
        if (cur == numbers) {
            printf("%d", cur);
            break;
        }
        printf("%d ", cur++);
    }
    return 0;
}