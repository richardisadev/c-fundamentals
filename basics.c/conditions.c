/*a programm to practice on conditions in C*/

#include<stdio.h>

int foo = 8, bar = 8;

int main(){
    if(bar > foo){
        printf("Bar is bigger than foo");
    }else if(bar == foo ){
        printf("bar is equal to foo");
    }else{
        printf("foo is greater than bar");
    }
    return 0;
}