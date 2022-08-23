#include <stdio.h>
void main()
{
    int n,sum=0;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==1)
            sum+=a[i];
    }
    printf("Sum of elements:%d\n",sum);
}