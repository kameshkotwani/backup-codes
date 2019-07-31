#include <stdio.h>
#include <math.h>

int main(void)
{
  int n, a, t;
  scanf("%d", &t);
  while (t--)
  {

    scanf("%d", &n);
    int count = 0;
    long double x;
    for (int i = 2; i < n; i++)
    {
      x = sqrtl(i);
      a = floor(x);
      if ((x - a) == 0)
      {
        count++;
      }
    }
    printf("%d\n", count);
  }

  return 0;
}