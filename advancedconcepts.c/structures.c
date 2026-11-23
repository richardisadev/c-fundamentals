#include<stdio.h>
#include<stdbool.h>

typedef struct{
    char name[7];
    int age;
    float gpa;
    bool isFullTime;
}student1;

int main(){

    student1 student =  {"Richard", 19, 4.5, true};
    printf("%s\n", student.name); 
    printf("%d\n", student.age);
    printf("%.2f\n", student.gpa);
    printf("%s", (student.isFullTime) ? "Yes" : "No");
}