#include <stdio.h>
void main()
{
	int r1,r2,c1,c2,a[5][5],b[5][5],c[5][5];
	printf("Enter order of Array1:");
	scanf("%d,%d",&r1,&c1);
	printf("Enter order of Array2:");
	scanf("%d,%d",&r2,&c2);
	if(c1==r2)
	{
		int i,j,k;
		printf("Enter %d Elements of Matrix 1:\n",r1*c1);
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter %d Elements of Matrix 2:\n", r2*c2);
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				c[i][j]=0;
				for(k=0;k<c1;k++)
				{
					c[i][j]=c[i][j] + a[i][k]*b[k][j];
				}
			}
		}
		printf("Multiplication of 2 Arrays:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("2 Matrices are not multiplicable.");
	}
}
