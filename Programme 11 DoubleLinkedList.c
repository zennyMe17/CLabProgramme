
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head=0, *tail, *newnode, *temp;

void insert()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data = ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->prev=0;
    
    if (head == 0)
    {
        head=tail=newnode;
    }
    
    else
    {
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
}

void display()
{
    temp=head;
    while(temp != 0)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void delete()
{
    int val;
    temp=head;
    printf("Enter the value to be deleted = ");
    scanf("%d",&val);
    while (temp != 0)
    {
        if (temp->data == val)
        {
            if (temp == head)
            {
                head=temp->next;
                head->prev=0;
                free(temp);
            }
            else
            {
                temp->prev->next=temp->next;
                temp->next->prev=temp->prev;
                free(temp);
            }
            return;
        }
        temp=temp->next;
    }
}
void main()
{
    int ch;
    while(1)
    {   
        printf("Enter\n1. To insert a node\n2. To display\n3. To delete at entered value\n4. To exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: 
            {
                insert();
                break;
            }
            case 2: 
            {
                display();
                break;
            }
            case 3: 
            {
                delete();
                break;
            }
            case 4: 
            {
                exit(0);
                break;
            }
            
        }
    }
}
