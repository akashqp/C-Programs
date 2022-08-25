#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void creation(int *pos, int n);

void searching(int *pos, int n);

void traversing(int *pos, int n);

void insertion_by_pos(int *pos, int n);

void insertion_by_val(int *pos, int n);

void deletion_by_pos(int *pos, int n);

void deletion_by_val(int *pos, int n);

void main()
{
    int n, ch, ch1;
    printf("Enter Size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Array operations:\n1.Creation (Compulsory)\n2.Insertion\n3.Deletion\n4.Search & Update\n5.Traversing\n6.Exit\n\n");
    while(true)
    {
        printf("Enter Choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: creation(arr,n);
                    break;
            case 2: printf("1.Insertion By Position\n2.Insertion By Value\n");
                    scanf("%d",&ch1);
                    switch(ch1)
                    {
                        case 1: insertion_by_pos(arr,n);
                                break;
                        case 2: insertion_by_val(arr,n);
                                break;
                        default:printf("Invalid Choice\n");
                    }
                    break;
            case 3: printf("1.Deletion By Position\n2.Deletion By Value\n");
                    scanf("%d",&ch1);
                    switch(ch1)
                    {
                        case 1: deletion_by_pos(arr,n);
                                break;
                        case 2: deletion_by_val(arr,n);
                                break;
                        default:printf("Invalid Choice\n");
                    }
                    break;
            case 4: searching(arr,n);
                    break;
            case 5: traversing(arr,n);
                    break;
            case 6: exit(0);

            default:printf("Invalid Choice\n");
        }
    }
}

void creation(int *pos, int n)
{
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&(*pos++));
    }
}

void searching(int *pos, int n)
{
    int se,count=0;
    printf("Enter Search Element:");
    scanf("%d",&se);
    for(int i=0; i<n; i++, pos++)
    {
        if(*pos==se)
            count++;
    }
    if(count>0)
        printf("Search Element present %d times in array\n",count);
    else
        printf("Search Element not present in array\n");
}

void traversing(int *pos, int n)
{
    for(int i=0;i<n;i++,pos++)
    {
        printf("%d\t",*pos);
    }
    printf("\n");
}

void insertion_by_pos(int *pos, int n)
{
    int val, pos;
    printf("Enter Value to be Inserted:");
    scanf("%d",&val);
    printf("Enter Position to Insert the Value at:");
    scanf("%d",&pos);
    
}

void insertion_by_val(int *pos, int n)
{

}

void deletion_by_pos(int *pos, int n)
{

}

void deletion_by_val(int *pos, int n)
{

}