/*a programm that prints a simlple statement on the terminal in C*/
#include<stdio.h>
int age = 19;
char name1[] = "Richard";
char name2[] = "Carol";
char name3[] = "Fiona";

int main(void){
    printf("Hello world!\n");
    printf("%s is  %d years old\n", name1, age);
    printf("%s, %s and %s are siblings\n", name1, name2, name3);
    printf("End of lesson.\n");
    return 0;
}