#include <stdio.h>
#include <stdlib.h>
#define MAX 5

void push();
void pop();
void display();
void palindrome();

int stack[MAX],top=-1;

int main() {

    while (1)
    {
        int ch;
        printf("Enter the Number to choose Choices\n1. Push The Element\n2. Pop the Element\n3. Display the Element\n4. Check Palindrome \n5. Exit\n ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
                    push();
                    break;
        
            case 2:
                    pop();
                    break;
            case 3:
                    display();
                    break;
            case 4:
                    palindrome();
                    break;
            case 5:
                    exit(0);
                    break;
        }
        
    }
    
    return 0;
}

void push()
{
    int elem;
    printf("Enter The Element To be Inserted = ");
    scanf("%d",&elem);
    stack[++top]=elem;
    printf("Element is inserted\n");
    
}

void pop()
{
    
    printf("Element poped is %d\n",stack[top--]);
    
}

void display()
{
    for (int i=top;i>=0;i--)
    {
        printf("|\t%d\t|\n",stack[i]);
    }
    
}

void palindrome()
{
    int flag=0;
    int i=0,j=top;
    while(i<j)
    {
        if (stack[i]!=stack[j])
        {
            flag=1;
            break;
        }
        i++;
        j--;
    }
    if (flag==0)
    {
        printf("it is Palindrome\n");
    }
    else
    {
        printf("it is not Palindrome\n");
    }
}














