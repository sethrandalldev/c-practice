#include <stdio.h>

// Write your code below
void incrementAge(int *agePointer)
{
  *agePointer = *agePointer + 1;
}

int main(void)
{
  int age = 27;
  incrementAge(&age);
  printf("%d\n", age);
}