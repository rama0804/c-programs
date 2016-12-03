/*
	Program to check if the entered number is a perfect number or not
	Author : Atonu Ghosh
	3rd December 2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
	int num,sum=0, rem,i;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=1;i<num;i++){
		rem=num%i;
		if(rem==0){
			sum=sum+i;
		}
	}
	
	if(sum==num)
		printf("The number is a perfect number");
	else
		printf("The number is not a perfect number");
	getch();
	return 0;
}
