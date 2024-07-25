#include<stdio.h>

int main() {
    char fname[31], lname[31], stdId[9];
    int date, month, year;
    double gpa;
    scanf("%s\n%s\n%s\n%d/%d/%d\n%lf", fname, lname, stdId, &date, &month, &year, &gpa);
    printf("Fullname: %s %s\n", fname, lname);
    printf("ID: %s\n", stdId);
    printf("DOB: %02d-%02d-%04d\n", date, month, year);
    printf("GPA: %.2lf\n", gpa);
    return 0;
}