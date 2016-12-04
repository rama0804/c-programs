#include<stdio.h>
void increment(int a){
    a = a+1;
}
void main(){
    int x = 100;
    printf("The value of a before calling Increment function is = %d \n",x);
    increment(x); //passing the value variable X
    printf("The value of a after calling Increment function is = %d \n",x);//value of x is not modified
}
