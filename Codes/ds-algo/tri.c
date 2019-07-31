#include<stdio.h>

int fib(int n)
{
  int t1=0,t2=1;
  int next=0;
  int i=0;
  for(int i=2;i<n;++i)
  {
    next=t1+t2;
    t1=t2;
    t2=next;
  }
  return next;
}

int trib(int n)
{
  int t1=0,t2=1,t3=1;
  int next=0;
  for(int i=3;i<=n;++i)
  {
    next=t1+t2+t3;
    t1=t2;
    t2=t3;
    t3=next;
  }
  return next;
}

int main(void)
{
  int a;
  scanf("%d",&a);
  printf("%d\n",trib(a));


}