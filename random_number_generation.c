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
