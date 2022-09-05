#include <stdio.h>

int main()
{
  int i = 0;
  int square = 0;
  while (i <= 9)
  {
    square = i * i;
    printf("%d\t%d\n", i, square);
    i++;
  }

  // reverse
  i = 9;

  // Write a while loop here:
  while (i >= 0)
  {
    square = i * i;
    printf("%d\t%d\n", i, square);
    i--;
  }
}