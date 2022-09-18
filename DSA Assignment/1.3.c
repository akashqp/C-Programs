#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n, temp, val;
    printf("Enter Size of array:");
    scanf("%d",&n);
    int arr[n+1];
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
    int pos = 0;
    printf("Enter Value to be inserted:\n");
    scanf("%d",&val);
    for(int i=0;i<n;i++)
    {
        if(val>arr[i])
            pos=i+1;
    }
    for(int i=n-1;i>=pos;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = val;
    printf("New Sorted Array:\n");
    for(int i=0;i<=n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
