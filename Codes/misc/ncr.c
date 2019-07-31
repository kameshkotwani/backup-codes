#include<stdio.h>

int fact(int n)
{
  if(n==0)
    return 1;
  return fact(n-1)*n;
}

int nCr(int n,int r)
{
  int nume,deno;
  nume=fact(n);
  deno=fact(r)*fact(n-r);
  return nume/deno;

}

int rnCr(int n,int r)
{
  if(n==r||r==0)
  {
    return 1;
  }
  return rnCr(n-1,r-1)+rnCr(n-1,r);
}


int main(void)
{
  printf("%d \n",rnCr(4,2));
}