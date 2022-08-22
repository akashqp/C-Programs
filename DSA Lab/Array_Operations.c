#include <stdio.h>

int creation(int n);

int searching(int pos, int n);

int traversing(int pos, int n);

void main()
{
    int n, *pos; char ch;
    printf("Enter Size of array:");
    scanf("%d",&n);
    printf("Array operations:\n1.Creation (Compulsory)\n2.Searching\n3.Traversing");
    while(true)
    {
        printf("Enter Choice: ");
        scanf("%c",&ch)
        switch(ch)
        {
            case '1':   pos=creation(n);
                        break;
            case '2':   searching(pos,n);
                        break;
            case '3':   traversing(pos,n);
                        break;
        }
    }
}

int creation(int n)
{
    int arr[n];
    printf("Enter %d elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    return arr;
}

int searching(int *pos, int n)
{
    int se,count=0;
    printf("Enter Search Element:");
    scanf("%d",&se);
    for(int i=0; i<n; i++, pos++)
    {
        if(arr[pos]==se)
            count++;
    }
    if(count>0)
        printf("Search Element present %d times in array\n",count)
    else
        printf("Search Element not present in array\n");
}

int traversing(int *pos, int n)
{
    for(int i=0;i<n;i++,pos++)
    {
        printf("%d\t",arr[pos]);
    }
}