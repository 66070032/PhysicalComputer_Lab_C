#include<stdio.h>

int main() {
    double price, radius, height, volume;
    scanf("%lf %lf %lf", &price, &radius, &height);
    volume = height * 3.14159265359 * ((radius/2) * (radius/2));
    printf("Volume : %.2lfml\n", volume);
    printf("Baht/ml : %.4lf", price / volume);
    return 0;
}