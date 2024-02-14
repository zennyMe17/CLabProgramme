#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head=0,*newnode,*temp;
int count=0;

void create()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    if (head == 0)
    {
        head=temp=newnode;
        printf("Enter the number = ");
        scanf("%d",&newnode->data);
        newnode->next=0;
    }
    else
    {
        temp->next=newnode;
        printf("Enter the number = ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        temp=newnode;
    }
}

void display()
{
    temp=head;
    printf("The Elements are = ");
    while (temp != 0)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n");
}

void insert()
{
    int pos,i=1;
    printf("Enter the position to be inserted = ");
    scanf("%d",&pos);
    if (pos>count)
    {
        printf("Element cannot be inserted at this position\n");
    }
    else
    {
        temp=head;
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter the element to be inserted = ");
        scanf("%d",&newnode->data);
        while (i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
}

void in_at_beginning()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter the element to be inserted = ");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
}

void in_at_ending()
{
    temp=head;
    while(temp->next != 0)
    {
        temp=temp->next;
    }
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter the element to be inserted = ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    temp->next=newnode;
    
}

void delete()
{
    int i=1,pos;
    printf("Enter the position to be deleted = ");
    scanf("%d",&pos);
    temp=head;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    newnode=temp->next;
    temp->next=newnode->next;
    free(newnode);
    
}

void del_at_beginning()
{
    temp=head;
    head=head->next;
    free(temp);
}

void del_at_ending()
{
    temp=head;
    while (temp->next != 0)
    {
        newnode=temp;
        temp=temp->next;
    }
    newnode->next=0;
    free(temp);
}
void main()
{
    int ch;
    while(1)
    {
        printf("Enter the choice \n1. To create a new node\n2. To display node\n3. To insert any value\n4. To insert at Beginning\n5. To insert at End\n6. Delete any position\n7. Delete at beginning\n8. Delete at ending\n9. To Exit =\n ");
        scanf("%d",&ch);
        switch(ch)
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
                insert();
                break;
            }
            case 4:
            {
                in_at_beginning();
                break;
            }
            case 5:
            {
                in_at_ending();
                break;
            }
            case 6:
            {
                delete();
                break;
            }
            case 7:
            {
                del_at_beginning();
                break;
            }
            case 8:
            {
                del_at_ending();
                break;
            }
            case 9:
            {
                exit(0);
                break;
            }
        }
    }
}
