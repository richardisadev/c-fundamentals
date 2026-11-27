#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>


//a programm that dynamically allocates memory based on user input

/*int main(){

    int number; //this is the number of grades we will store
    printf("Enter the number of grades: ");
    scanf("%d", &number);

    //now let us dinamically allocate the memory using malloc

    char *grades = (char *) malloc(number * sizeof(char));

    if(grades == NULL){
        printf("Memory Allocation failed");
        return 1;
    }
    free(grades);
    grades = NULL;
}*/

/*typedef struct{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
}student;

int main(){

    
    student mystudent = {"Richard Mwai", 19, 4.2, true};

    printf("NAME: %s\n", mystudent.name);
    printf("AGE: %d\n", mystudent.age);
    printf("GPA: %.2f\n", mystudent.gpa);
    printf("FullTime: %s\n", (mystudent.isFullTime) ? "Yes" : "No");

    return 0;
}*/

//say we want to get input from a user and allocate memory to the data based on the user input
//the only way we can do that is via dynamic allocation 
//basically this means allocating space in memory while the programm is still running

//an example of a programm that uses malloc to dynamically allocate space in memory based on user input

int main(){
    int number;
    printf("Enter the number of subjects: ");
    scanf("%d",&number);

    int *subjects = (int *) malloc(number * sizeof(int));
    
    if(subjects == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    for(int i = 0; i < number; i++){
        printf("Enter grade #%d\n: ", i + 1);
        scanf(" %c", &subjects[i]);
    }
    for(int i = 0; i < number; i++){
        printf("%c\n", subjects[i]);
    }

   free(subjects);
   subjects = NULL;

}
