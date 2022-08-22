#include <stdio.h>
void vote();
void main()
{
	vote();
}
void vote()
{
	int age;
	printf("Enter age of a candidate:");
	scanf("%d",&age);
	if(age>=18)
		printf("Eligible for voting\n");
	else
		printf("Ineligible for voting\n");
}
