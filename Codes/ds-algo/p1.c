#include<stdio.h>
int main(void)
{
  int arr[]={10,15,3,7};
  int k;
  scanf("%d",&k);
  for(int i=0;i<4;i++)
  {
    for(int j=i+1;j<4;j++)
    {
      if(arr[i]+arr[j]==k)
      {
        printf("%d %d",arr[i],arr[j]);
      }
    }
  }
  
}