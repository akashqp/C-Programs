#include <stdio.h>
#define PI 3.14

void circle();

void main()
{
	circle();
}

void circle()
{
	float rad;
	printf("Enter radius of a circle:\n");
	scanf("%f",&rad);
	printf("Circumference of Circle = %f",(2*PI*rad));
	printf("Area of Circle = %f",(PI*rad*rad));
}
