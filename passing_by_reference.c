/*
	Author : Atonu Ghosh
	3rd December 2016
*/
#include<stdio.h>
void increment(int *p){
    *p = *p+1;
}
void main(){
    int a = 10;
    printf("The value of a before calling Increment function is = %d \n",a);
    increment(&a);
    printf("The value of a after calling Increment function is = %d \n",a);//value of x is modified
}
