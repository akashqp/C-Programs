#include <stdio.h>
void main()
{
    int P1,P2,P3,P4,count = 0;
    scanf("%d%d%d%d",&P1,&P2,&P3,&P4);
    if(P1>=8)
        count+=1;
    if(P2>=8)
       count+=1;
    if(P3>=8)
        count+=1;
    if(P4>=8)
        count+=1;
    printf("%d",count);
}