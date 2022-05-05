#include <stdio.h>
void day_name();
void main()
{
	day_name();
}
void day_name()
{
	int num;
	printf("Enter Day Number in Integer:");
	scanf("%d",&num);
	switch(num)
	{
		case 1: printf("Monday");
			break;
		case 2: printf("Tuesday");
			break;
		case 3: printf("Wednesday");
			break;
		case 4: printf("Thursday");
			break;
		case 5: printf("Friday");
			break;
		case 6: printf("Saturday");
			break;
		case 7: printf("Sunday");
			break;
		default:printf("Wrong Input");
			break;
	}
	printf("\n");
}
