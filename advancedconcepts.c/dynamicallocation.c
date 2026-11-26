#include<stdio.h>


//a programm that dynamically allocates memory based on user input

int main(){

    int number; //this is the number of grades we will store
    printf("Enter the number of grades: ");
    scanf("%d", &number);

    //now let us dinamically allocate the memory using malloc

    char *grades = (char *) malloc(number * sizeof(char));

}
