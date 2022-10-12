#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int creation();
void display();
void insertion_by_pos(int);
void insertion_by_val();
void deletion_by_pos(int);
void deletion_by_val();
void search();

struct node
{
    int data;
    struct node *link;
}*head, *ptr, *new;

void main()
{
    int ch, ch1, n;
    while(true)
    {
        printf("Linked List Operations:\n\t1.Creation\n\t2.Insertion\n\t3.Deletion\n\t4.Search\n\t5.Display\n\t6.Exit\n\n");
        printf("Enter Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: n = creation();
                    break;
            case 2: printf("1.Insertion By Position\n2.Insertion By Value\n");
                    printf("Enter Choice:");
                    scanf("%d",&ch1);
                    switch(ch1)
                    {
                        case 1: insertion_by_pos(n);
                                break;
                        case 2: insertion_by_val();
                                break;
                        default:printf("Invalid Choice\n");
                    }
                    break;
            case 3: printf("1.Deletion By Position\n2.Deletion By Value\n");
                    printf("Enter Choice:");
                    scanf("%d",&ch1);
                    switch(ch1)
                    {
                        case 1: deletion_by_pos(n);
                                break;
                        case 2: deletion_by_val();
                                break;
                        default:printf("Invalid Choice\n");
                    }
                    break;
            case 4: search();
                    break;
            case 5: display();
                    break;
            case 6: exit(0);
            default:printf("Wrong Choice\n");
        }
    }
}

int creation()
{
    int n;
    printf("Enter Number of Data:");
    scanf("%d",&n);
    ptr = (struct node*)malloc(sizeof(struct node*));
    printf("Enter a value:");
    scanf("%d",&ptr->data);
    ptr->link = ptr;
    head = ptr;

    for(int i = 2; i <= n; i++)
    {
        new = (struct node*)malloc(sizeof(struct node*));
        printf("Enter a value:");
        scanf("%d",&new->data);
        new->link = head;
        ptr->link = new;
        ptr = new;      
    }
    return n;
}

void display()
{
    ptr = head;
    while(ptr->link != head)
    {
        printf("%d\n",ptr->data);
        ptr = ptr->link;
    }
    printf("%d\n",ptr->data);
}

void insertion_by_pos(int n)
{
    new = (struct node*)malloc(sizeof(struct node*));
    int pos;
    printf("Enter value to be inserted:");
    scanf("%d",&new->data);
    printf("Enter position where to insert the value:");
    scanf("%d",&pos);
    if(pos==1)
    {
        pos=n+1;
    }
    ptr = head;
    while(pos-2!=0)
    {
        ptr=ptr->link;
        pos--;
    }
    if(ptr->link == head)
        new->link = head;
    else
        new->link=ptr->link; 
    ptr->link = new;
}

void insertion_by_val()
{
    int val;
    new = (struct node*)malloc(sizeof(struct node*));
    printf("Enter value to be inserted:");
    scanf("%d",&new->data);
    printf("Enter value after which to be inserted:");
    scanf("%d",&val);
    ptr=head;
    while(ptr->link!=head)
    {
        if(ptr->data == val)
        {
            new->link = ptr->link;
            ptr->link=new;
        }
        ptr=ptr->link;
    }
    if(ptr->data == val)
    {
        ptr->link=new;
        new->link=head;
    }
}

void deletion_by_pos(int n)
{
    int pos;
    printf("Enter position to be deleted:");
    scanf("%d",&pos);
    if(pos == 1)
    {
        pos=n;
    }
    ptr=head;
    new=ptr;
    while(pos-1!=0)
    {
        new=ptr;
        ptr=ptr->link;
        pos--;
    }
    new->link=ptr->link;
    free(ptr);
}

void deletion_by_val()
{
    int val;
    printf("Enter value to be deleted:");
    scanf("%d",&val);
    ptr=head;
    new=ptr;
    while(ptr->link!=head)
    {
        if(ptr->data == val)
        {
            new->link=ptr->link;
            free(ptr);
            ptr=new;
        }
        new = ptr;
        ptr=ptr->link;
    }
    if(ptr->data == val)
    {
        new->link = head;
        free(ptr);
    }
}

void search()
{
    int se, count = 0;
    printf("Enter value to be searched:");
    scanf("%d",&se);
    ptr=head;
    while(ptr->link!=head)
    {
        if(ptr->data == se)
        {
            count++;
        }
        ptr=ptr->link;
    }
    if(ptr->data == se)
    {
        count++;
    }
    printf("Occurence of %d : %d\n",se,count);
}