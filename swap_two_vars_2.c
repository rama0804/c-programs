#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the two elements \n");
    scanf("%d%d",&a,&b);
    printf("Print the two numbers %d %d \n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After Swapping %d %d",a,b);
    return 0;
}
