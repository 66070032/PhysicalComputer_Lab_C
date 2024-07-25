#include<stdio.h>

int main() {
    double range;
    scanf("%lf", &range);
    if (range >= 0 && range <= 5.032) {
        printf("Bangkok");
    } else if (range > 5.032 && range <= 35.477) {
        printf("Samut Prakarn");
    } else if (range > 35.477 && range <= 52.900) {
        printf("Chachoengsao");
    } else if (range > 52.900 && range <= 58.855 ) {
        printf("Chon Buri");
    } else {
        printf("InValid");
    }
    return 0;
}