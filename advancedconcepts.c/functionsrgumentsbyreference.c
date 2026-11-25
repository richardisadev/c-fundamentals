//pointers to structures in C
#include<stdio.h>
#include<stdbool.h>
#include<string.h>

typedef struct{
    char name[8];
    int age;
    float gpa;
    bool isFullTime;
}student;

void printstudent(student student);

int main(){

    student student1 = {0};
    strcpy(student1.name, "Richard");
    student1.age = 19;
    student1.gpa = 4.2;
    student1.isFullTime = true;
   

    printstudent( student1);

}
void printstudent(student student){
    printf("NAME: %s\n", student.name);
    printf("AGE: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("FullTime: %s\n", (student.isFullTime) ? "Yes" : "No");

}