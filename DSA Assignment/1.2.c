#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
}*head, *head1, *head2, *ptr, *new;

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

    head1 = head;
    ptr = head1;
    for(i=1; i<n/2.0; i++)
    {
        ptr = ptr->link;
    }
    head2 = ptr->link;
    ptr->link = NULL;

    printf("Linked List 1:\n");
    ptr=head1;
    while(ptr->link!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr = ptr->link;
    }
    printf("%d\n",ptr->data);
    
    printf("Linked List 2:\n");
    ptr=head2;
    while(ptr->link!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr = ptr->link;
    }
    printf("%d\n",ptr->data);
}