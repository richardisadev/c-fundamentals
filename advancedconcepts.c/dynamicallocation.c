#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char name[50];
    int age;
}point;

int main(){
  point *mypoint;
  mypoint = (point *) malloc(sizeof(point));  
}
