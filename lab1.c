#include <stdio.h>
#include <stdlib.h>

void create();
void display();
void insert();

int arr[50],n;

int main() {

    while (1)
    {
        int ch;
        printf("Enter the Number to choose Choices\n1. Create array\n2. display array\n3. Insert element\n4. Exit\n ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
                    create();
                    break;
        
            case 2:
                    display();
                    break;
            case 3:
                    insert();
                    break;
            case 4:
                    exit(0);
                    break;
        }
        
    }
    
    return 0;
}

void create()
{
    int i;
    printf("Enter The Number Of Elements = ");
    scanf("%d",&n);
    printf("Enter the Elements = ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}

void display()
{
    int i;
    printf("the  Elements are = ");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}

void insert()
{
    int p,e,i;
    printf("Enter The position of Element = ");
    scanf("%d",&p);
    printf("Enter The Element = ");
    scanf("%d",&e);   
    for(int i=n-1;i>=p-1;i--)
    {
        arr[i+1]=arr[i];
    }
    n++;
    arr[p-1]=e;
    printf("Element Inserted\n");
}