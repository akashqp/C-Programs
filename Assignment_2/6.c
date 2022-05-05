#include <stdio.h>
void angle();
void main()
{
	angle();
}
void angle()
{
	float a1,a2,a3;
	printf("Enter three angles:");
	scanf("%f,%f,%f",&a1,&a2,&a3);
	if((a1+a2+a3)==180)
		printf("The Triangle is valid.\n");
	else
		printf("The Triangle is not valid.\n");
}
