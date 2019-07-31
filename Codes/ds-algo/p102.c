#include <stdio.h>
int main(void)
{
  int a;
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int k;
  scanf("%d", &k);
  for (int i = 0; i < 7; ++i)
  {
    if (arr[i] + arr[i + 1] + arr[i + 2] == k)
    {
      printf("%d %d %d", arr[i], arr[i + 1], arr[i + 2]);
    }
  }
  return 0;
}