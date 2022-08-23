#include <stdio.h>
void main()
{
    int n,sum=0,l1,l2;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter 2 indexes limit:");
    scanf("%d,%d",&l1,&l2);
    int b[l2-l1+1];
    for(int i=l1,j=0;i<=l2,j<sizeof(b[0]);i++,j++)
    {
        b[j]=a[i];
    }
    for(int i=0;i<sizeof(b[0]);i++)
    {
        printf("%d\t",b[i]);
    }
}