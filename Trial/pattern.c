#include <stdio.h>
void main()
{
        int i,j,t=1,temp=1;
        for(i=1;i<=9;t++)
        {   
            for(j=1;j<=t;j++)
            {
                printf("%d\t",i+(j*2)-2);
            }
            
            if(i%2==1)
            {
                temp=i;
                i*=2;
            }
            else
                i=i*2-temp;
            printf("\n");
        }
}
