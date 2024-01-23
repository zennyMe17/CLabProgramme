#include<stdio.h>
#include<stdlib.h>

void create();
//void display();
//void insert();
//void delete();

int arr[50],n;

int main(){
    int choice;
    do
    {
        printf("Enter 1 for Creating an Array :\n");
        printf("Enter 2 for Displaying an Array :\n");
        printf("Enter 3 for Inserting an element in an Array :\n");
        printf("Enter 4 for Deleting an element in an Array :\n");
        printf("Enter 5 for exit\n");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1 : create();
                 break;
        //case 2 : display();
        //break;
        //case 3 : insert();
        //break;
        //case 4 : delete();
        //break;
        case 5 : exit(0);
                 break;
        default: printf("Enter Valid Expression = \n");
                 break;
        }
    } while (choice != 5);

    return 0;
}


void create(){
    printf("Enter the number of elements present in array = ");
    scanf("%d",&n);
    printf("Enter the numbers = ");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
