/*a simple programm on multidimentional arrays*/
/*a multidimentional array is basically series of one dimentional arrays*/

#include<stdio.h>


int main(){
    int a[3][4] = {
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11}
    };

    char alphabets[3][4] = {
        {'a', 'b', 'c', 'd'},
        {'e', 'f', 'g', 'h'},
        {'i', 'j', 'k', 'l'}
   };

    printf("The third element of the second row of the array a is %d", a[1][2]);
    printf("The second element of the third row of the alphabets array is %c", alphabets[2][1]);

    return 0; 
}





