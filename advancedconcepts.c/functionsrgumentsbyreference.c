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
//this is another programm that moves a point p in both x and y directions
//I have used a pointer to the structure point 
#include<stdio.h>

typedef struct{
    int x;
    int y;
}point;

void move(point *ptr);

int main(){

    point point1 = {10,5};

    point *ptr = &point1;

    move(ptr);

    printf("%d\n", point1.x);
    printf("%d\n", point1.y);

}
void move(point *ptr){
    (*ptr).x++;
    (*ptr).y++;
}
#include<stdio.h>

void printage(int *ptr);

int main(){

    int age = 19;
    int *ptr = &age;

    printage(&age);

}

void printage(int *ptr){

    int i;
    int newage;

    for(i = 0; i < 100; i++){
        newage = (*ptr)++;
        if(newage >= 19 && newage <= 100){
            printf("Richard is %d years old\n", newage);
        }
    }
}