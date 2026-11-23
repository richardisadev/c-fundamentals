#include<stdio.h>
#include<string.h>
#include<stdbool.h>


typedef struct{

    char name[7];
    int age;
    float gpa;
    bool isFullTime;

}student;
void printstudent(student student);

int main(){

    student student1 = {"Richard", 19, 4.5, false};
    student student2 = {};

    strcpy(student2.name, "sandy");
    student2.age = 21;
    student2.gpa = 4.2;
    student2.isFullTime = true;


    printstudent(student1);
    printstudent(student2);
   

    return 0; 

}
void printstudent(student student){
    printf("%s\n", student.name);
    printf("%d\n", student.age);
    printf("%.2f\n", student.gpa);
    printf("%s\n", (student.isFullTime) ? "Yes" : "No");
    printf("\n");
}