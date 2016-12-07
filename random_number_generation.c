/*
About : Program to generate random number from 0 to 10
Date : 7th Dec 2016
Author : Atonu Ghosh
*/
#include<stdio.h>
#include<time.h>
void main(){
    int i;
    time_t t;
    srand((unsigned) time(&t));
    for(i=0;i<5;i++){
        printf("%d\n",rand()%10);
    }
}
