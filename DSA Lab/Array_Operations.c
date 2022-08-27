#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <strings.h>

void creation(int *, int);         
void search_and_update(int *, int);
void traversing(int *, int);       
int insertion_by_pos(int *, int);  
int insertion_by_val(int *, int); 
int deletion_by_pos(int *, int);   
int deletion_by_val(int *, int);   

void main()                             // Main Function (Called at starting)
{
    int n, ch, ch1;
    printf("Array operations:\n1.Creation (Compulsory)\n2.Insertion\n3.Deletion\n4.Search & Update\n5.Traversing\n6.Exit\n\n");
    printf("Enter Size of array:");
    scanf("%d",&n);
    int arr[2*n];
    while(true)
    {
        printf("Enter Choice:");
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
                    printf("Enter Choice:");
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
            case 4: search_and_update(arr,n);
                    break;
            case 5: traversing(arr,n);
                    break;
            case 6: exit(0);

            default:printf("Invalid Choice\n");
        }
        printf("\nArray operations:\n1.Creation (Compulsory)\n2.Insertion\n3.Deletion\n4.Search & Update\n5.Traversing\n6.Exit\n\n"); 
    }
}

void creation(int *add, int n)          // Creation of Array (Compulsory)
{
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",(add++));
    }
}

void search_and_update(int *add, int n) // Searching for a value and updating it
{
    int se, count=0, val;
    char str[5];
    printf("Enter Search Element:");
    scanf("%d",&se);
    printf("Do You Want to update the Searched Element(Yes or No):");
    scanf("%s",str);
    if(strcasecmp(str, "yes") == 0)
    {
        printf("Enter Updated Element Value:");
        scanf("%d",&val);
    }
    for(int i=0; i<n; i++)
    {
        if(add[i]==se)
            {
                count++;
                if(strcasecmp("yes", str) == 0)
                    add[i] = val;
            }
    }
    if(count>0)
        printf("Search Element present %d times in array\n",count);
    else
        printf("Search Element not present in array\n");
}

void traversing(int *add, int n)        // Displaying the Array
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",add[i]);
    }
    printf("\n");
}

int insertion_by_pos(int *add, int n)   // Inserting an element at a position
{
    int val, pos, *add1, i;
    printf("Enter Value to be Inserted:");
    scanf("%d",&val);
    printf("Enter Position to Insert the Value at(Considering 1st element has 1st position):");
    scanf("%d",&pos);
    if((pos >= 0 && pos < n) == false)
        {
            printf("Invalid Position Entered\n");
            return n;
        }

    for(i = n-1; i >= pos-1; i--)
    {
        add[i+1]=add[i];
    }
    add[pos-1]=val;
    return n+1;
}

int insertion_by_val(int *add, int n)   // Inserting an element after anotherr value
{
    int val, value, flag = 0;
    printf("Enter Value to be Inserted : ");
    scanf("%d",&value);
    printf("Enter Value after which to insert %d : ",value);
    scanf("%d",&val);
    for(int i = 0; i < n; i++)
    {   
        if(add[i] == val)
        {
            flag = 1;
            for(int j = n-1; j > i; j--)
            {
                add[j+1] = add[j];
            }
            add[i+1] = value;
            n++;
        }
    }
    if(flag == 0)
        printf("Value not present in Array\n");
    return n;
}

int deletion_by_pos(int *add, int n)    // Deleting an element from a position
{
    int pos;
    printf("Enter Position to Delete the Value from(Considering 1st element has 1st position):");
    scanf("%d",&pos);
    if((pos >= 0 && pos < n) == false)
        {
            printf("Invalid Position Entered\n");
            return n;
        }
    for(int i = pos; i < n; i++)
    {
        add[i-1] = add[i];
    }
    return --n;
}

int deletion_by_val(int *add, int n)    // Deleting certain values from the array
{
    int val, flag = 0;
    printf("Enter Values to be deleted from the Array:");
    scanf("%d",&val);
    for(int i = 0; i < n; i++)
    {   
        if(add[i] == val)
        {   
            flag = 1;
            for(int j=i; j<n; j++)
            {
                add[j] = add[j+1];
            }
            n--;
        }
    }
    if(flag == 0)
        printf("Value not present in Array\n");
    return n;
}
