#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void creation(int *add, int n);         // Creation of Array

void searching(int *add, int n);        // Searching a value and 

void traversing(int *add, int n);

int insertion_by_pos(int *add, int n);

int insertion_by_val(int *add, int n);

int deletion_by_pos(int *add, int n);

int deletion_by_val(int *add, int n);

void main()
{
    int n, ch, ch1;
    printf("Array operations:\n1.Creation (Compulsory)\n2.Insertion\n3.Deletion\n4.Search & Update\n5.Traversing\n6.Exit\n\n");
    printf("Enter Size of array:");
    scanf("%d",&n);
    int arr[2*n];
    while(true)
    {
        printf("Enter Choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: creation(arr,n);
                    break;
            case 2: printf("1.Insertion By Position\n2.Insertion By Value\n");
                    printf("Enter Choice:");
                    scanf("%d",&ch1);
                    switch(ch1)
                    {
                        case 1: n = insertion_by_pos(arr,n);
                                break;
                        case 2: n = insertion_by_val(arr,n);
                                break;
                        default:printf("Invalid Choice\n");
                    }
                    break;
            case 3: printf("1.Deletion By Position\n2.Deletion By Value\n");
                    scanf("%d",&ch1);
                    switch(ch1)
                    {
                        case 1: n = deletion_by_pos(arr,n);
                                break;
                        case 2: n = deletion_by_val(arr,n);
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

void creation(int *add, int n)
{
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",(add++));
    }
}

void searching(int *add, int n)
{
    int se,count=0;
    printf("Enter Search Element:");
    scanf("%d",&se);
    for(int i=0; i<n; i++, add++)
    {
        if(*add==se)
            count++;
    }
    if(count>0)
        printf("Search Element present %d times in array\n",count);
    else
        printf("Search Element not present in array\n");
}

void traversing(int *add, int n)
{
    for(int i=0;i<n;i++,add++)
    {
        printf("%d\t",*add);
    }
    printf("\n");
}

int insertion_by_pos(int *add, int n)
{
    int val, pos, *add1;
    printf("Enter Value to be Inserted:");
    scanf("%d",&val);
    printf("Enter Position to Insert the Value at(Considering 1st element has 1st position):");
    scanf("%d",&pos);
    add1=add + 4*n;
    for(int i = n-1; i >= pos-1; i--, add1--)
    {
        *(add1 + 4) = *add1;
    }
    *(++add1) = val;
    return n+1;
}

int insertion_by_val(int *add, int n)
{
    int val, value, *add1;
    printf("Enter Value to be Inserted:");
    scanf("%d",&value);
    printf("Enter Value after which to insert %d",value);
    scanf("%d",&val);
    for(int i = 0; i < n; i++, add++)
    {   
        if(*add == val)
        {
            add1 = add + (n-1-i)*4;
            for(int j = n-1; j > i; j--, add1--)
            {
                *(add1+4) = *add1;
            }
            *(++add1) = value;
            n++;
        }
    }
    return n;
}

int deletion_by_pos(int *add, int n)
{
    int pos;
    printf("Enter Position to Delete the Value from(Considering 1st element has 1st position):");
    scanf("%d",&pos);
    for(int i = pos; i < n; i++, add++)
    {
        *(add - 4) = *add;
    }
    return --n;
}

int deletion_by_val(int *add, int n)
{

}
