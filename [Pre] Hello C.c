#include<stdio.h>

int main() {
    int std_id;
    char fullname[50];
    scanf("%d\n", &std_id);
    scanf("%[^\n]", &fullname);
    printf("Hello! My name is %s, %d", fullname, std_id);
    return 0;
}