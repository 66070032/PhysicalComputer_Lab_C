#include<stdio.h>

int main() {
    float num_1, num_2, num_3;
    scanf("%f %f %f", &num_1, &num_2, &num_3);

    if ((num_1 >= num_2 && num_1 <= num_3) || (num_1 >= num_3 && num_1 <= num_2)) {
        printf("%.2f", num_1);
    } else if ((num_2 >= num_1 && num_2 <= num_3) || (num_2 >= num_3 && num_2 <= num_1)) {
        printf("%.2f", num_2);
    } else if ((num_3 >= num_1 && num_3 <= num_2) || (num_3 >= num_2 && num_3 <= num_1)) {
        printf("%.2f", num_3);
    }

    return 0;
}