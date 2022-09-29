#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void creation();
void display();
void insertion_by_pos();
void insetion_by_val();
void deletion_by_pos();
void deletion_by_val();
void search();

struct node
{
    int data;
    struct node *link;
}*head, *ptr, *new;

void main()
{
    int ch;
    while(true)
    {
        printf("Linked List Operations:\n\t1.Creation\n\t2.Insertion\n\t3.Deletion\n\t4.Search\n\t5.Display\n\t6.Exit\n\n");
        printf("Enter Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: creation();
                    break;
            case 2: printf("1.Insertion By Position\n2.Insertion By Value\n");
                    printf("Enter Choice:");
                    scanf("%d",&ch1);
                    switch(ch1)
                    {
                        case 1: insertion_by_pos();
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
                        case 1: deletion_by_pos();
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

void creation()
{
    int n;
    printf("Enter Number of Data:");
    scanf("%d",&n);
    ptr = (struct node*)malloc(sizeof(struct node*));
    printf("Enter a value:");
    scanf("%d",&ptr->data);
    ptr->link = NULL;
    head = ptr;

    for(int i = 2; i <= n; i++)
    {
        new = (struct node*)malloc(sizeof(struct node*));
        printf("Enter a value:");
        scanf("%d",&new->data);
        new->link = NULL;
        ptr->link = new;
        ptr = new;      
    }
    return;
}

void display()
{
    ptr = head;
    while(ptr->link != NULL)
    {
        printf("%d\n",ptr->data);
        ptr = ptr->link;
    }
    printf("%d\n",ptr->data);
}

void insertion_by_pos()
{
    int pos, val;
    printf("Enter value to be inserted:");
    scanf("%d",&val);
    printf("Enter position where to insert the value:");
    scanf("%d",&pos);
    ptr = head;
    while(pos-1!=0)
    {
        ptr=ptr->link;
        pos--;
    }
}

void insertion_by_val()
{

}

void deletion_by_pos()
{

}

void deletion_by_val()
{
    
}

void search()
{

}