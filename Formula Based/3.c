#include <stdio.h>
void convert();
void main()
{
	convert();
}
void convert()
{
	int t,hrs,mins,sec;
	printf("Enter Time in seconds:");
	scanf("%d",&t);
	hrs = t/(60*60);
	t = t%3600;
	mins = t/60;
	sec = t%60;
	printf("Hours = %d\nMinutes = %d\nSeconds = %d\n",hrs,mins,sec);
}
