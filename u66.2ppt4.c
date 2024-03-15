#include<stdio.h>

main()

{
	int i=1,n,f=0,s=1,sum;

	printf("enter the value of n=");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("%d\t",f);
        sum=f+s;
        f=s;
		s=sum;
	}
}