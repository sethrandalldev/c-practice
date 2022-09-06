#include <stdio.h>

int main()
{
  int arr[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 20, 22, 26, 28, 29};
  int arr2[100];

  int i = 0;
  while (i < 20)
  {
    printf("%d\n", arr[i]);
    i++;
  }

  i = 0;
  while (i < 100)
  {
    arr2[i] = i + 4;
    i++;
  }
}