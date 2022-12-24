/*input: nums = [1,2,3,4]
output: [1,3,6,10]
explanation: running sum is obtained as [1+,1+2+,1+2+3,1+2+3+4]*/
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