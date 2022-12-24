/*input: nums = [1,1,1,1,1]
output: [1,2,3,4,5]
explanation: running sum is obtained as [1+,1+1+,1+1+1,1+1+1+1]*/
#include<stdio.h>
int main()
{
  int sum=0 , i;
  int a[] = {1,1,1,1,1};
  printf("sum of array element:");
  for(i=0;i<5;i++)
  {
    sum = sum + a[i];
    printf(" %d ",sum);
  }
  return 0;
}