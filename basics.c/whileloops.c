//a programm to paractice on while loops in C
//while loops are similar to for loops but have less functionality


#include<stdio.h>

int main(){

    int n;
    while(n < 10){
        
        if(n == 10){
            break;
        }
        printf("%d\n", n);
    }
}
