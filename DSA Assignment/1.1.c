#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
}*head, *ptr, *new;

void main()
{
    int n, pos, i;
    ptr = (struct node *)malloc(sizeof(struct node *));    
    printf("Enter no of Values:");
    scanf("%d",&n);
    printf("Enter a data:");
    scanf("%d",&ptr->data);
    ptr->link = NULL;
    head = ptr;

    for(i=2;i<=n;i++)
    {
        new = (struct node *)malloc(sizeof(struct node *));
        printf("Enter a data:");
        scanf("%d",&new->data);
        new->link = NULL;
        ptr->link = new;
        ptr = new;
    }
    ptr = head;
    head = head->link;
    free(ptr);
    
    ptr = head;
    printf("New Linked List:\n");
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }
}