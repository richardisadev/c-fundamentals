//a programm to paractice on while loops in C
//while loops are similar to for loops but have less functionality


#include<stdio.h>

int main(){
    int n = 0;
    while(n < 10){
        n++;
        if(n % 2 == 1){
            continue;
        }
        printf("The number %d is even\n", n);
    }
    return 0;
}