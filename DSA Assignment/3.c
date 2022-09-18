#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n, nt, temp, max_val, j=0;;
    printf("Enter number of Test Cases:");
    scanf("%d",&nt);
    while(j++<nt)
    {
        printf("Enter Size of array:");
        scanf("%d",&n);
        int arr[n];
        printf("Enter %d Elements:\n",n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(arr[j+1]<arr[j])
                {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        temp=arr[0];
        max_val=arr[0];
        int count=1, max=1;
        for(int i=1;i<n;i++)
        {
            if(temp==arr[i])
                count++;
            else
            {
                temp=arr[i];
                count=1;
            }
            if(count>max)
            {
                max=count;
                max_val=arr[i];
            }
        }
        count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=max_val)
            {
                count++;
                arr[i]=max_val;
            }
        }
        printf("%d\n",count);
    }
}