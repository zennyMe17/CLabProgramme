#include <stdio.h>
#include <ctype.h>

int stack[100],top=-1;

void push(int x)
{
    stack[++top]=x;
    
}

int pop()
{
    
    return stack[top--];
    
}

int main() {
    
    char exp[100],*e;
    int n1,n2,n3,x;
    printf("Enter the Expression = ");
    scanf("%s",exp);
    e=exp;
    
    while(*e != '\0')
    {
        if (isdigit(*e))
            {
                x=*e-48;
                push(x);
                
            }
        else
        {
            n2=pop();
            n1=pop();
            
            switch(*e)
            {
                case '+':
                    n3=n1+n2;
                    break;
                case '-':
                    n3=n1-n2;
                    break;
                case '*':
                    n3=n1*n2;
                    break;
                case '/':
                    n3=n1/n2;
                    break;
            }
        
            push(n3);
            
        }  
        e++;
        
    }
    printf("Answer is %d",pop());
    return 0;
}