#include<stdio.h>
void main(){
    int a[]={3,1,5,8,3,4,2};
    int i;
    for(i=0;i<7;i++){
        printf("Address = %d\n",&a[i]);
        printf("Address = %d\n",a+i);
        printf("Value = %d\n",a[i]);
        printf("Value = %d\n",*(a+i));
    }
}
