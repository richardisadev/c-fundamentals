#include<stdio.h>

int birthday(int *ptr);
int main(){
    int age = 10;
    int *ptr = &age;
    birthday(&age);

}
int birthday(int *ptr){
    int i;
    int newage;
     for(i = 0; i < 11; i++){
        newage = (*ptr)+=10;
        if (newage >= 50 && newage <= 120){
            printf("your new age is %d\n", newage);
        }
     }
}