#include <stdio.h>
#include <string.h>

int main()
{
  char s[] = "When the zombies arrive, quickly fax Judge Pat Alphabet";
  char p[] = "poolloop";
  for (int i = 0; i < strlen(s); i++)
  {
    s[i] = '*';
  }
  printf("%s\n", s);
  // Checkpoint 2 code goes here
  for (int i = 0; i < strlen(p) / 2; i++)
  {
    p[i] = '#';
  }
  printf("%s", p);
}