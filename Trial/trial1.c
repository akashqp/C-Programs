#include <stdio.h>
void main()
{
	int arr[3][3];
	arr[0][0] = 0;
	arr[0][1] = 1;
	arr[0][2] = 2;
	arr[1][0] = 3;
	arr[1][1] = 4;
	arr[1][2] = 5;
	arr[2][0] = 6;
	arr[2][1] = 7;
	arr[2][2] = 8;
	printf("%ls",*(arr+2));
}
