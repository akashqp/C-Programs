#include <stdio.h>
void coordinate();
void main()
{
	coordinate();
}
void coordinate()
{
	float x,y;
	printf("Enter X and Y Coordinate Values:");
	scanf("%f,%f",&x,&y);
	if(x==0 && y==0)
		printf("Origin\n");
	else if(x==0)
		printf("Y Axis\n");
	else if(y==0)
		printf("X-Axis\n");
	else
		if(x>0)
			if(y>0)
				printf("First Quadrant\n");
			else if(y<0)
				printf("Fourth Quadrant\n");
		else if(x<0)
			if(y>0)
				printf("Second Quadrant\n");
			else if(y<0)
				printf("Third Quadrant\n");
}
