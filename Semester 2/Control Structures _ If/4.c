#include <stdio.h>
#include <math.h>
void quadratic();
void one_root();
void two_roots();
void main()
{
	quadratic();
}
void quadratic()
{
	int a,b,c;
	printf("Enter value of a,b,c for the quadratic equation ax^2 + bx +c:");
	scanf("%d,%d,%d",&a,&b,&c);
	float disc = pow(b,2.0) - 4*a*c;
	if(disc<0)
	{
		printf("No real Root\n");
	}
	else if(disc==0)
	{
		one_root(a,b,c);
	}
	else
	{
		two_roots(a,b,c);
	}
}
void one_root(int a,int b,int c)
{
	float root = (-b)/(2.0*a);
	printf("Root of Quadratic Equation: %f",root);
}
void two_roots(int a,int b,int c)
{
	float root1 = (-b + sqrt(pow(b,2.0)-4*a*c))/(2*a);
	float root2 = (-b - sqrt(pow(b,2.0)-4*a*c))/(2*a);
	printf("Roots of quadratic equation: \nRoot1 : %.2f\nRoot2 : %.2f\n",root1,root2);
}
