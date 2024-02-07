#include <stdio.h>

int B_S(int arr[], int low, int high, int key);

int main()
{
    int n,low,high,key,i;
    
    printf("Enter The Elements in an Array = ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements = ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter The element you want to find = ");
    scanf("%d",&key);
    printf("Element is found in %d position",B_S(arr,0,n-1,key));

    return 0;
}

int B_S(int arr[], int low, int high, int key)
{
    if (low<=high)
    {
        int mid=(low+high)/2;
        if (arr[mid] == key)
            return mid+1;
        else if (arr[mid]>key)
            B_S(arr,low,mid-1,key);
        else
            B_S(arr,mid+1,high,key);
            
    }
    
}