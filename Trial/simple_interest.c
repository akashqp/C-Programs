#include <stdio.h>

void simple_interest();

void main()
{
	simple_interest();
}

void simple_interest()
{
	float Principal, rate, time;
	printf("Enter Principal amount, Rate of Interest and Time:\n");
	scanf("%f%f%f",&Principal, &rate, &time);
	printf("Simple Interest = %.2f", (Principal*rate*time)/100.0);
}
