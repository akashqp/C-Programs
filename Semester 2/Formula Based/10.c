#include <stdio.h>
void swap();
void main()
{
	swap();
}
void swap()
{
	int n1,n2;
	printf("Enter Two numbers:\n");
	scanf("%d%d",&n1,&n2);
	printf("Before Swap: n1 = %d, n2 = %d\n",n1,n2);
	n1 = n1 + n2;
	n2 = n1 - n2;
	n1 = n1 - n2;
	printf("After Swap: n1 = %d, n2 = %d\n",n1,n2);
}
