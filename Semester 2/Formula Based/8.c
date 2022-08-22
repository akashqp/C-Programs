#include <stdio.h>
#include <math.h>
#define PI 3.14
void area();
void main()
{
	area();
}
void area()
{
	float r;
	printf("Enter radius of circle:");
	scanf("%f",&r);
	printf("Area of Circle = %.3f\n",(PI*pow(r,2)));
}
