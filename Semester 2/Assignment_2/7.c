#include <stdio.h>
void login();
void main()
{
	login();
}
void login()
{
	int id;		// correct id = 100
	int pass;	// correct pass = 1234
	printf("Enter id and password:\n");
	scanf("%d\n%d",&id,&pass);
	if(id==100)
		if(pass==1234)
			printf("Accept\n");
	else
		printf("Unable to Accept\n");
}
