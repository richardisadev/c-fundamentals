/*a programm that prints a simlple statement on the terminal in C*/
#include<stdio.h>
int age = 19;
char name[] = "Richard";

int main(void){
    printf("Hello world!\n");
    printf("%s is  %d years old\n", name, age);
    printf("End of lesson.\n");
    return 0;
}