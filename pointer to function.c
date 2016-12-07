/*
About: Program to execute pointer to function
Date : 7th December 2016
Author : Atonu Ghosh
------------------------------------------------------------------------
Program may or may not provide the expected sum of 14
It depends on the system as the value at the address returned by the
function add, may be over written by some other function.
To check this try calling some other function before the print statement.
*/
#include<stdio.h>
int* add(int* a,int* b){
    int sum = (*a) + (*b);
    return &sum; //this causes the compiler to issue warning about returning address of local variable
}

void main(){
    int x = 10, y = 4;
    int* ptr = add(&x,&y);
    printf("The sum of 10 and 4 is = %d",*ptr);
}
