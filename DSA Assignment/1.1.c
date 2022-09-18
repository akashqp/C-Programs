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
        printf("%p",&new->link);
        new->link = NULL;
        ptr->link = new;
        ptr = new;
    }
    printf("Enter node to be deleted(1-n):");
    scanf("%d",&pos);
    ptr = *(&head->link + 20);
    printf("%d",ptr->data);
}