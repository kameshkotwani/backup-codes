#include <stdio.h>
#include<stdlib.h>
int main(void)
{
  int A[10];
  int *p=(int *)malloc(5*sizeof(int));
 p[0]=11;
 p[1]=12; 
 p[2]=13;
 p[3]=14;
 p[4]=15;
 p[5]=16;
  for(int i=0;i<6;i++)
  {
    printf("%d ",p[i]);
  }
}