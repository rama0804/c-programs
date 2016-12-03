/*
	Program to swap two numbers without using third variable
	Author : Atonu Ghosh
	3rd December 2016
*/
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
