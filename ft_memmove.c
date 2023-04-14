#include "libft.h"
void *memmove(void *dest, const void *src, size_t n)
{
  char *d;
  char *s;
  int i;

  i = 0;
  s = src;
  while(n--)
  {
    d[i] = s[i];
    i++;
  }
  return (dest);
}