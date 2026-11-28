#include<stdio.h>

char name[50] = "Richard"; 
char *pname = &name;

printf("%p", *pname);
