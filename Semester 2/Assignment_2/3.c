#include <stdio.h>
void eligibility();
void main()
{
	eligibility();
}
void eligibility()
{
	int maths,phy,chem,flag=0;
	printf("Enter marks in Maths, Physics and Chemistry:");
	scanf("%d,%d,%d",&maths,&phy,&chem);
	if(maths>=65 && phy>=55 && chem>=50)
		flag=1;
	else if((maths+phy+chem)>=190)
		flag=1;
	else if((maths+phy)>=140)
		flag=1;
	if(flag==1)
		printf("The candidate is eligible for admission.\n");
	else
		printf("The candidate is not eligible for admission.\n");
}
