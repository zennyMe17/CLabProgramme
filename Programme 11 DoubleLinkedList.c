#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct node{
    int data;
    struct node *prev, *next;
};

struct node *head=0, *newnode, *temp;

void create()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter the element = ");
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=0;
    if (head == 0)
    {
        head=temp=newnode;
    }
    else
    {
        newnode->prev=temp;
        temp->next=newnode;
        temp=newnode;
    }
    
}

void display()
{
    temp=head;
    while (temp != 0)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void main()
{
    int ch;
    while(1){
    printf("Enter the choice\n1. To create\n2. To display\n3. To exit\n");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
        {
            create();
            break;
        }
        case 2:
        {
            display();
            break;
        }
        case 3:
        {
            exit(0);
            break;
        }
    }
    }
}
