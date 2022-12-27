//write a program in c for binary search
#include<stdio.h>
int main()
{
    int i , first , last , mid , n;
    int a[]={1,3,5,7,9};
    first = 0;
    last = 4; 
    printf("element to be searched :");
    scanf("%d",&n);
    while(first<=last)
    {
        mid = (first+last)/2;
        if(a[mid]==n)
        {
            printf("element %d fount at index %d ",n,mid);
            break;
        }
        else if (a[mid]<=n)
        {
        first = mid + 1;
        }
        else 
        {
        last = mid - 1;
        }
    }
    if(first>last)
    {
        printf("element not found");
        return 0;
    }
}