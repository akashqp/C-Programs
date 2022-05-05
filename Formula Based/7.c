#include <stdio.h>
#include <math.h>
void dist();
void main()
{
	dist();
}
void dist()
{
	int x1,x2,y1,y2;
	printf("Enter coordinates of point 1:");
	scanf("%d,%d",&x1,&y1);
	printf("Enter coordinates of point 2:");
	scanf("%d,%d",&x2,&y2);
	printf("Distance between two points = %.2lf\n",(sqrt(pow(((x2-x1)),2.0)+pow((y2-y1),2.0))));
}
