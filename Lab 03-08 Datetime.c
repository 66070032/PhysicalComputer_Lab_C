#include <stdio.h>

int main() {
    int inputSeconds, day, hour, minute, second;
    scanf("%d", &inputSeconds);
    day = inputSeconds / (24 * 3600);
    hour = (inputSeconds % (24 * 3600)) / 3600;
    minute = (inputSeconds % 3600) / 60;
    second = inputSeconds % 60;
    printf("%d s = %d d %d h %d m %d s\n", inputSeconds, day, hour, minute, second);
    return 0;
}