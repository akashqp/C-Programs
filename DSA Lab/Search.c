#include <stdio.h>
#include <stdlib.h>

int linear(int *, int, int);

int binary(int *, int, int);

void sort(int *, int);

void main()
{
    int n, ch, se;
    printf("Search Operations:\n1. Linear Search\n2. Binary Search\n3. Exit\n");
    printf("Enter choice:");
    ch = scanf("%d",&ch);
    if(ch==3)
    {
        exit(0);
    }
    printf("Enter Array Size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d Values:\n",n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    do
    {
        int flag = 0;
        printf("Enter Element to be searched:");
        scanf("%d",&se);
        switch(ch)
        {
            case 1: flag = linear(arr, n, se);
                    break;
            case 2: flag = binary(arr, n, se);
                    break;
            default:printf("Wrong Choice:\n");
        }
        if(flag == 1)
        {   
            printf("Element Found\n");
        }
        else
        {    
            printf("Element not Found\n");
        }
        printf("\nSearch Operations:\n1. Linear Search\n2. Binary Search\n3. Exit\n");
        printf("Enter choice:");
        ch = scanf("%d",&ch);
    }while(ch!=3);
}

int linear(int *ptr, int n, int se)
{
    for(int i = 0; i < n; i++)
    {
        if(*ptr++ == se)
            return 1;
    }
    return 0;
}

int binary(int *ptr, int n, int se)
{
    sort(ptr, n);

    int beg = 0;
    int end = n-1;
    int mid = (int)((beg + end)/2);

    while(mid!=0)
    {
        if(ptr[mid] == se)
            return 1;
        else if(ptr[mid] < se)
            beg = mid + 1;
        else
            end = mid - 1;           
    }
    return 0;

}

void sort(int *ptr, int n)
{
    int temp;
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(ptr[j+1] > ptr[j])
            {
                temp = ptr[j];
                ptr[j] = ptr[j+1];
                ptr[j+1] = ptr[j];
            }
        }
    }
}