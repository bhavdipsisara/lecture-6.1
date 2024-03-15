#include<stdio.h>

int main()

{
	int i;
	
	printf("enter the number n=");
	scanf("%d",&i);
	
	do{
		printf("%d",i);
		i++;
	}while(i%2==1);
	
	printf("1");
}