#include <stdio.h>
#include <stdlib.h>
void absolute();
void main()
{
	absolute();
}
void absolute()
{
	int n;
	printf("Enter an integer:");
	scanf("%d",&n);
	printf("Absolute Value of %d is %d\n",n,abs(n));
}
