/*Input: nums = [1,2,2,3]
Output: true*/
#include<stdio.h>
int main()
{
    int i, j ;
    int a[] = {1,3,2};
    for(i=0;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            
            if(a[i]<=a[j] || a[i]>=a[j])
                continue;
            else    
               printf("flase");
        }
    }   
     printf("true");   
     return 0;      
}