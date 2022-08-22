#include <stdio.h>

void per();

void main()
{
	per();
}

void per()
{
	int sub1,sub2,sub3,sub4,sub5;
	printf("Enter marks of 5 subjects:\n");
	scanf("%d\n%d\n%d\n%d\n%d",&sub1,&sub2,&sub3,&sub4,&sub5);
	printf("Percentage = %.2f\n",(sub1+sub2+sub3+sub4+sub5)/5.0);
}
