#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head=0,*newnode,*temp;

void create()
{
    newnode = (struct node *)malloc(sizeof(struct node));
        if (head == 0)
        {
            head=temp=newnode;
            printf("The value to be stored = ");
            scanf("%d",&newnode->data);
            newnode->next=0;
        }
        else 
        {
            temp->next=newnode;
            printf("The value to be stored = ");
            scanf("%d",&newnode->data);
            newnode->next=0;
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
    while(1)
    {
        printf("Enter the choice\n1. Create Node\n2. Display\n3. Exit\n");
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
