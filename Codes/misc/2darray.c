#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  //IN STACK
  int A[3][4] = {{1, 2, 3, 4}, {2, 4, 6, 8}, {1, 3, 5, 7}};

  //Partially in HEAP
  int *B[3];
  B[0] = (int *)malloc(4 * sizeof(int));
  B[1] = (int *)malloc(4 * sizeof(int));
  B[2] = (int *)malloc(4 * sizeof(int));

  //FULL ARRAY IN HEAP
  int **C;
  C = (int **)malloc(3 * sizeof(int));
  C[0] = (int *)malloc(4 * sizeof(int));
  C[1] = (int *)malloc(4 * sizeof(int));
  C[2] = (int *)malloc(4 * sizeof(int));

  //Printing
  printf("Elements in Array A\n");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<4;j++)
    {
      printf("%d ",A[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  printf("Elements in Array B\n");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<4;j++)
    {
      printf("%d ",B[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  printf("Elements in Array C\n");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<4;j++)
    {
      printf("%d ",C[i][j]);
    }
    printf("\n");
  }



  return 0;
}