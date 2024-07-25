#include<stdio.h>

int main() {
    double price, percent, amount;
    scanf("%lf %lf %lf", &price, &percent, &amount);
    double salePrice = price - ((price * percent) / 100);
    printf("%.2lf", salePrice * amount);
    return 0;
}