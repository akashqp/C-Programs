#include <stdio.h>
void sum();
void main()
{
	sum();
}
void sum()
{
	int num,d1,d2,d3,d4;
	printf("Enter a four digit number:");
	scanf("%d",&num);
	d1 = num/1000;
	num %= 1000;
	d2 = num/100;
	num %= 100;
	d3 = num/10;
	d4 = num%10;
	printf("Sum = %d\n",(d1+d2+d3+d4));
}
