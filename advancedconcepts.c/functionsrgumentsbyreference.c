//pointers to structures in C
#include<stdio.h>
#include<stdbool.h>

typedef struct{
    char name[7];
    int age;
    float gpa;
    bool isFullTime;
}student;

int main(){

    student s1 = {"Richard", 19, 4.2, true};
    student *ptr = &s1;

    printf("NAME: %s\n", ptr ->name);
    printf("AGE: %d\n", ptr ->age);
    printf("GPA: %.2f\n", ptr->gpa);
    printf("FullTime: %s\n", (ptr-> isFullTime) ? "Yes" : "No");

}