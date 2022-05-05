//Wap in c language to take 1 for red 2 for blue and 3 for grey color. Display wrong input or no color message for any other digit.
#include <stdio.h>
void color();
void main()
{
	color();
}
void color()
{
	char col;
	printf("Enter 1 for red 2 for blue and 3 for grey color:");
	scanf("%c",&col);
	switch(col)
	{
	case '1':printf("Red\n");
		 break;
	case '2':printf("Blue\n");
		 break;	
	default :printf("Wrong Input\n");
		 break;
	case '3':printf("Grey\n");
		 break;
	}
}
