/*a pointer is a variable that stores the memory address of another variable
it allows us to pass the memory address of a large data structure without copying the entire data
*/

#include<stdio.h>

void birthday(int *age);

int main(){

    int age = 20;

    birthday(&age);
   
}
/*since variables are copied by value to functions meaning
 we cannot modify their value outside that function 
we can go around that by copying the variable by referencce to the function*/
void birthday(int *age){

    int i;
    int newage;

    for(i = 0; i < 7; i++){
         newage = (*age)+=10;
        if( newage >= 60 && newage <= 100){
            printf("You are now %d years old\n", newage);
        }
        
    }
    
}