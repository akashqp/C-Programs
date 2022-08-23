#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n,l;
    printf("Enter size of array:");
    scanf("%d",&l);
    int a[l];
    printf("Enter %d elements:\n",l);
    for(int i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=0;i<l;i++)
    {
        if(n==a[i])
        {
            printf("%d Present in array.\n",n);
            exit(0);
        }
    }
    printf("%d Not Present in array.\n",n);
}