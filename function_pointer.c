/*
About : Program to implement function pointer
Date : 7th Dec 2016
Author : Atonu Ghosh
---------------------------------------------------------
calling and passing values to function using pointer
*/
#include<stdio.h>
int add(int a,int b){
    return a+b;
}

void main(){
    int sum=0;
    int (*p)(int,int); //creating pointer p to function add
    p = &add;
    sum = (*p)(9,1); //passing 9 and 1 to add function
    printf("The sum of 9 and 1 is = %d",sum);
}
