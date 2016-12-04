#include<stdio.h>
void main(){
    int a[] = {2,3,5,9,7,8};
    int *p = &a[0];
    printf("Base address of the array is : %X\n",a);
    printf("Base address of the array via pointer is : %X\n",a);
    printf("Value at base address is : %d\n",*a);
    printf("Value at base address is : %d\n",a[0]);
}
