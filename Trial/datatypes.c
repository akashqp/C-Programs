#include <stdio.h>

void datatypes();

void main()
{
	datatypes();
}

void datatypes()
{
printf("Size of int : %ld \nSize of double : %ld \nSize of char : %ld \nSize of long : %ld \nSize of float : %ld",sizeof(int), sizeof(double), sizeof(char), sizeof(long), sizeof(float));
}
