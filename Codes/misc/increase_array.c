#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int *p=(int *)malloc(5*sizeof(int));
  
  p[0]=10;
  p[1]=11;
  p[2]=12;
  p[3]=13;
  p[4]=14;

  int n;
  scanf("%d",&n);
  int *q=(int *)malloc(n*sizeof(int));
  
  
  for(int i=0;i<5;i++)
  {
    q[i]=p[i];
  }

  for(int i=0;i<5;i++)
  {
    printf("p[%d]-> %d ",i,p[i]);
  }

  printf("\n");
  for(int i=0;i<n;i++)
  {
    printf("q[%d]-> %d ",i,q[i]);
  }
  printf("\n");
  free(p);
  p=q;
  q=NULL;

  for(int i=0;i<10;i++)
  {
    printf("p[%d]-> %d ",i,p[i]);
  }
  printf("\n");
  printf("%u ",q);
}