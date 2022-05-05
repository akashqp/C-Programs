#include <stdio.h>
void days();
void main()
{
	days();
}
void days()
{
	int day,days=0,leap;
	printf("Enter Month in terms of number(1:January, 2:February:.....12:December):");
	scanf("%d",&day);
	if (day==1)
		days=31;
	else if(day==2)
	{
		printf("Tell whether it is a leap year or not(0 for not a leap year and 1 for leap year):");
		scanf("%d",&leap);
		if (leap == 0)
			days=28;
		else
			days=29;
	}
	else if(day==3)
		days=31;
	else if(day==4)
		days=30;
	else if(day==5)
		days=31;
	else if(day==6)
		days=30;
	else if(day==7)
		days=31;
	else if(day==8)
		days=31;
	else if(day==9)
		days=30;
	else if(day==10)
		days=31;
	else if(day==11)
		days=30;
	else if(day==12)
		days=31;
	else if(day<1 && day>12)
		printf("Invalid Month Number");
	printf("Days = %d\n",days);
}
