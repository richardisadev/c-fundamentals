//pointers to structures in C
#include<stdio.h>
#include<stdbool.h>
#include<string.h>

typedef struct{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
}student;

void printstudent(student *s);

int main(){

    student student1 = {"Richard", 19, 4.2, true};
    

    student *ptr = &student1;
   

    printstudent( &student1);

}
void printstudent( student *s){
    printf("NAME: %s\n", (*s).name);
    printf("AGE: %d\n", (*s).age);
    printf("GPA: %.2f\n", (*s).gpa);
    printf("FullTime: %s\n", ((*s).isFullTime) ? "Yes" : "No");

}