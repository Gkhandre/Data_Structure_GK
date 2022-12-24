/*input: nums = [3,1,2,10,1]
output: [3,4,6,16,17]
explanation: running sum is obtained as [3+,3+1,3+1+2,3+1+2+10,3+1+2+10+1]*/
#include<stdio.h>
int main()
{
  int sum=0 , i;
  int a[] = {3,1,2,10,1};
  printf("sum of array element:");
  for(i=0;i<5;i++)
  {
    sum = sum + a[i];
    printf(" %d ",sum);
  }
  return 0;
}