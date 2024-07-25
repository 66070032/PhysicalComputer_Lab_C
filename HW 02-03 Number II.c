#include<stdio.h>

int main() {
    char ans[6];
    scanf("%s", ans);
    printf("%.1s", ans);
    printf("%79s", "");
    printf("%3.2s", ans);
    printf("%78s", "");
    printf("%4.3s", ans);
    printf("%77s", "");
    printf("%5.4s", ans);
    printf("%76s", "");
    printf("%6.5s", ans);
    return 0;
}