#include<stdio.h>
int F[10];
int mfib(int n)
{
  if(n<=1)
  {
    F[n]=n;
    return n;
  }
  else
  {
    if(F[n-2]==-1)
    {
      F[n-2]=mfib(n-2);
      printf("%d ",F[n-2]);   
    }
    if(F[n-1]==-1)
    {
      F[n-1]=mfib(n-1);    
      printf("%d ",F[n-1]);   
    }
    return F[n-2]+F[n-1];
  }
  
}
int main(void)
{
  for(int i=0;i<10;i++)
  {
    F[i]=-1;
  }
  printf("%d ",mfib(6));
}