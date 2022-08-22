#include <stdio.h>
void convert();
void main()
{
	convert();
}
void convert()
{
	float mm;
	printf("Enter distance in mm:");
	scanf("%f",&mm);
	printf("Distance = %.2f cm, %.2f inches, %.2f feet\n", (mm/10.0), (mm/25.0), (mm/(12*25)));
}
