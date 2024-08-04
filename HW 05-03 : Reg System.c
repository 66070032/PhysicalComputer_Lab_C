#include<stdio.h>

int main() {
    int cond_1 = 0, cond_2 = 0, cond_3 = 0, cond_4 = 0, allAge = 0;
    float allHeight = 0.0, allWeight = 0.0;

    for (int i = 1; i <= 50; i++) {
        int age, height, weight;
        scanf("%d %d %d", &age, &height, &weight);

        if ((age >= 20) && (height >= 160)) {
            cond_1++;
        }

        if ((age < 20) && ((height <= 180) || (weight >= 60))) {
            cond_2++;
        }

        if ((age >= 30) && weight >= 40 && (weight <= 80)) {
            cond_3++;
        }

        if ((age < 40 )&& ((weight < 85) || (height <= 200))) {
            cond_4++;
        }

        allAge += age;
        allHeight += height;
        allWeight += weight;

    }

    printf("Age >= 20 and Height >= 160: %d\n", cond_1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", cond_2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", cond_3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", cond_4);
    printf("Average Age: %d\n", allAge / 50);
    printf("Average Height: %.2f\n", allHeight / 50);
    printf("Average Weight: %.2f", allWeight / 50);

    return 0;
}