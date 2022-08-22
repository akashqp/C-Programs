#include <stdio.h>
void fah_to_cent();
void cent_to_fah();
void main()
{
	fah_to_cent();
	cent_to_fah();
}
void fah_to_cent()
{
	float fah,cent;
	printf("Enter temperature in Fahrenheit:");
	scanf("%f",&fah);
	printf("Temperature in Centigrade:%.2f\n",((5/9.0)*(fah-32)));
}
void cent_to_fah()
{
	float cent, fah;
	printf("Enter temperatre in Centigrade:");
	scanf("%f",&cent);
	printf("Temperature in Fahrenheit:%.2f\n",((9/5.0)*(cent)+32));
}
