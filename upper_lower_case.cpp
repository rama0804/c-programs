#include<stdio.h>
#include<conio.h>
int main(){
	char str[50];
	int i;
	printf("Enter the string:");
	scanf("%s",&str);
	printf("The string is ->%s",str);
	for(i=0;i<=50;i++){
		if(str[i]>=65 && str[i]<=90)
		str[i]=str[i]+32;
	}
	printf("\nThe string in lower case is ->%s",str);
	getch();
	return 0;
}
