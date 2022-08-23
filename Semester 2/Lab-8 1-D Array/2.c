#include <stdio.h>
void main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sm=a[0],la=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<sm)
            sm=a[i];
        if(a[i]>la)
            la=a[i];
    }
    printf("Largest Element:%d\n",la);
    printf("Smallest Element:%d\n",sm);
}