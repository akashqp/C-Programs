#include<stdio.h>
void multiple();
void main()
{
	multiple();
}
void multiple()
{
	int n1,n2;
	printf("Enter two numbers:");
	scanf("%d,%d",&n1,&n2);
	if(n1%n2==0)
		printf("%d is a multiple of %d\n",n2,n1);
	else if(n2%n1==0)
		printf("%d is a multiple of %d\n",n1,n2);
	else
		printf("Neither number is a multiple of the other.\n");
}
