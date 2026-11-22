/*a programm to practice on conditions in C*/

#include<stdio.h>

/*int foo = 8, bar = 8;

int main(){
    if(bar > foo){
        printf("Bar is bigger than foo");
    }else if(bar == foo ){
        printf("bar is equal to foo");
    }else{
        printf("foo is greater than bar");
    }
    return 0;
}*/

/*a programm to calculate the average marks of two subjects*/


int main(){
    int grades[2][5];
    grades[0][0] = 90;
    grades[0][1] = 80;
    grades[0][2] = 75;
    grades[0][3] = 92;
    grades[0][4] = 86;


   grades[1][0] = 76;
   grades[1][1] = 87;
   grades[1][2] = 90;
   grades[1][3] = 98;
   grades[1][4] = 100;


   int i;
   int j;
   float average;

    for(i = 0; i < 2; i++){
        average = 0;
        for(j = 0; j < 5; j++){
            average += grades[i][j]; 
    }
     average /= 5.0;
     printf ("the average of the subject %d is %.2f\n", i, average);
    }
}