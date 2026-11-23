#include<stdio.h>

int birthday(int *age);
int main(){
    int age = 10;
    birthday(&age);

}
int birthday(int *age){
    int i;
    int newage;
     for(i = 0; i < 11; i++){
        newage = (*age)+=10;
        if (newage >= 50 && newage <= 120){
            printf("your new age is %d\n", newage);
        }
     }
}