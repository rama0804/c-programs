/*
    About : Random number generation between 1 and 5without repeating
    Date : 7th Dec 2016
    Author : Atonu Ghosh
*/
#include<stdio.h>
#include<time.h>
void main(){
    int num[5];
    int i,j,temp;

    srand(time(NULL));
    for(i=0;i<5;i++){
        num[i]=i+1;
    }
    for(i=0;i<5;i++){
        j = (rand()%5)+1;
        temp = num[i];
        num[i] = num[j];
        num[j] = temp;
    }
    for(i=0;i<3;i++){
        printf("%d \n",num[i]);
    }
}
