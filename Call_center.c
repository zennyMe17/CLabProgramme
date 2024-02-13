#include<stdio.h>
#include<stdlib.h>

#define N 3

int call_list[N];
int front=-1;
int rear=-1;

void insert(int x)
{
    if (front == -1 && rear == -1 )
    {
        front=rear=0;
        call_list[rear]=x;
        printf("%d is added to call\n",x);
    }
    else if (rear == N-1)
    {
        printf("Call Queue is full\n");
    }
    else
    {
     call_list[++rear] = x;   
     printf("%d is added to call\n",x);
    }
}

void call_delete()
{
    if (front == -1 && rear == -1 )
    {
        printf("No calls in the list\n");
    } 
    else if (front == rear)
    {
        printf("%d call is terminated\n",call_list[front]);
        front=rear=-1;
    }
    else {
        printf("%d call is terminated\n",call_list[front++]);
    }
    
}

void display()
{
    int i;
    if (front == -1 && rear == -1 )
    {
        printf("No calls in the list\n");
    }
    else{
        printf("Calls in the queue are =\n");
        for (i=front;i<rear+1;i++)
        {
            printf("%d\t",call_list[i]);
        }
        printf("\n");
    }
}

void main()
{
    int ch,c_id;
    while (1)
    {
       printf("Enter the choice\n1. Connecting call\n2. Disconnecting call\n3. Display the call\n4. to exit\n");
       scanf("%d",&ch);
       switch (ch)
       {
           case 1: 
           {
               printf("Enter The i'd of the call = ");
               scanf("%d",&c_id);
               insert(c_id);
               break;
           }
           case 2:
           {
               call_delete();
               break;
           }
           case 3:
           {
               display();
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
