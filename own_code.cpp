/*
	Program to print the code of current C file as output
	Author : Atonu Ghosh
	3rd December 2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fp;
	char c;
	fp = fopen(__FILE__,"r");
	do{
		c = getc(fp);
		putchar(c);
	}while(c!=EOF);
	fclose(fp);
	getch();
	return 0;
}
