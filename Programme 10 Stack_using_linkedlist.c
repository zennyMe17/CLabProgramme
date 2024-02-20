
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct node
{
    int data;
    struct node *link;
};

struct node *top=0, *newnode, *temp;

void push(int x)
{
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=top;
    top=newnode;
    printf("Element is pushed\n");
}

int pop()
{
    temp=top;
    top=top->link;
    int x=temp->data;   
    free(temp);
    return x;
}

void display()
{
    temp=top;
    if (temp == 0)
    {
        printf("Stack is empty\n");
    }
    else{
    printf("Elements in the stack is = \n");
    while(temp != 0)
    {
        printf("|\t%d\t|\n",temp->data);
        temp=temp->link;
    }
    }
}

int peep()
{
    return top->data;
}

void main()
{
    int ch,x;
    while(1)
    {
        printf("Enter\n1. To push the element.\n2. To pop the element.\n3. To peep the element.\n4. To display the element.\n5. To  exit.\n");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
            {
                printf("Enter the element to be pushed = ");
                scanf("%d",&x);
                push(x);
                break;
            }
            case 2:
            {
                printf("Poped Element is = %d\n",pop());
                break;
            }
            case 3:
            {
                printf("Peeped Element is = %d\n",peep());
                break;
            }
            case 4:
            {
                display();
                break;
            }
            case 5:
            {
                exit(0);
                break;
            }
        }
    }
}
