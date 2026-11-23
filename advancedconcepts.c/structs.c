#include<stdio.h>
#include<stdbool.h>


typedef struct{

    char name[7];
    int age;
    float gpa;
    bool isFullTime;

}student;

int main(){

    student student1 = {"Richard", 19, 4.5, true};

    printf("%s\n", student1.name);
    printf("%d\n", student1.age);
    printf("%.2f\n", student1.gpa);
    printf("%s\n", (student1.isFullTime) ? "Yes" : "No");

    return 0; 

}