/*for loops in c enable us to create a block of code that runs multiple times*/
//lets create a for loops that creats a list of ten numbers
//we need an iterator variable
/*#include<stdio.h>
int main(){
    
    int i;
    for(i = 0; i <=10; i++){
        printf("%d\n", i);
    }
}*/

//in this next session am going to create an array  and find its sum using a for loop

#include<stdio.h>


int main(){

    int marks[10] = {1,2,3,4,5,6,7,8,9,10};
    int sum = 0;
    int i;

    for(i = 0; i < 10; i++){
        sum += marks[i];
    }
    printf("The sum if the numbers is %d\n", sum);
}