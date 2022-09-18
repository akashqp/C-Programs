#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n=25, evnum=0,odnum=0,pairs=0;
    int arr[n];
    printf("Enter %d Elements:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Pairs whose sum is 25:\n");
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]%2==0)
            evnum+=1;
        else
            odnum+=1;
        if(arr[i]>24)
            continue;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==25)
            {
                pairs+=1;
                printf("[%d,%d], ",arr[i],arr[j]);
            }
        }
    }
    printf("Total Pairs = %d\nEven Numbers = %d\n Odd Numbers = %d",pairs,evnum,odnum);
}