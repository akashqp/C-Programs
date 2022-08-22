#include <stdio.h>
void leap();
void main()
{
	leap();
}
void leap()
{
	int yr;
	printf("Enter an year:");
	scanf("%d",&yr);
	if(yr%4==0 || (yr%100!=0 && yr%400==0))
	{
		printf("Leap Year\n");
	}
	else
	{
		printf("Not Leap Year\n");
	}
}
