#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct node
{
    char data[50];
    struct node *next;
};

struct node *head=0, *newnode, *temp, *prevnode;

void create()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter The name = ");
    scanf("%s", newnode->data);
    newnode->next = 0;

    if (head == 0 || strcmp(newnode->data, head->data) < 0)
    {
        newnode->next = head;
        head = newnode;
    }
    else
    {
        temp = head;
        while (temp->next != 0 && strcmp(newnode->data,
        temp->next->data) > 0)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}


void display()
{
    temp=head;
    while (temp != 0)
    {
        printf("%s\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void del()
{
    char storage[50];
    printf("Enter the name to be deleted = ");
    scanf("%s",storage);
    temp=head;
    while (temp != 0)
    {
        if (strcmp(storage,temp->data) == 0)
        {
            
             if (temp==head)
             {
                head=head->next;
                free(temp);
                return;
             }
             else if (temp->next == 0)
             {
                prevnode->next=0;
                free(temp);
                return;
             }
            else
            {
                prevnode->next=temp->next;
                free(temp);
                return;
            }
        }
        prevnode=temp;
        temp=temp->next;
    }
}

void main()
{
    int ch;
    while(1)
    {
        printf("Enter\n1. To create a node\n2. To display\n3. To delete as name mentioned\n4. To exit\n");
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
                del();
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
