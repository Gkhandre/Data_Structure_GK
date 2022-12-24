/*Input: nums = [1,2,2,3]
Output: true*/
#include<stdio.h>
int main()
{
    int i, j , increasing , true , false;
    int a[] = {1,3,2};
    for(i=0;i<2;i++)
    {
        for(j=1;j<2;j++)
        {
            if(increasing)
            {
            if(a[i]<=a[j])
                continue;
            else 
               return false;
            }
            else
            {
            if(a[i]>=a[j])
                continue;
            else 
               return false;
            }
            return true;
        }
    }
}