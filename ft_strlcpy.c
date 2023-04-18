#include "libft.h"
#include <stdlib.h>
strlcpy(char *dst, const char *src, size_t size)
{
  size_t i;

  i = 0;
  if (size == 0)
    return;
  while((i < size - 1) || (src[i] != '\0'))
  {
    dst[i] = src[i];
    i++;
  }
  return(i);
}