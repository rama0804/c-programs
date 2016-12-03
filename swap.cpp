#include<stdio.h>
#include<conio.h>
int main(){
	int x=10,y=5;
	x=x+y;
	y=x-y;
	x=x-y;
	printf("The value of X and Y after swap is : \n X = %d \n y=%d",x,y);
	getch();
	return 0;
}
