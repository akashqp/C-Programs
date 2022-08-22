#include <stdio.h>
void check();
void main()
{
	check();
}
void check()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("Even Number\n");
	}
	else
	{
		printf("Odd Number\n");
	}
}
