/*
	Program to find factorial of a number
	Author : Atonu Ghosh
	3rd December 2016
*/
#include<stdio.h>
//function to calculate sum of elements in array
int SOE(int* A, int size){
    int i;
    int total=0;
    for(i=0;i<size;i++){
        total+=A[i];
    }
    return total;
}

void main(){
    int a[] = {5,8,2,5,8,9};
    int size = sizeof(a)/sizeof(a[0]); //calculating no. of. elements of array
    int sum = SOE(a,size);
    printf("The sum of the elements of the array is = %d\n",sum);
}
