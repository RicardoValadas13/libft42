#include <stdlib.h>

static char *ft_strrev(char *nstr, int i)
{
  char mem;
  int j;

  j = 0;
  while(j < i)
  {
    mem = nstr[i];
    nstr[i] = nstr[j];
    nstr[j] = mem;
    j++;
    i--;
  }
  return(nstr);
}
char *ft_itoa(int n)
{
  char *nstr;
  int i;
  int nbr;
  int j;
  int c;

  nbr = n;
  i = 0;
  c = 0;
  if (n < 0)
  {
    nbr *= -1;
    i++;
    c = 1;
  }
  while(nbr > 10)
  {
    nbr /= 10;
    i++;
  }

  j = 0;
  nstr = (char*)malloc(i + 1);
  while(j < i + 1)
  {
    if (c != 0)
    {
      nstr[i] = '-';  
    }
    nstr[j] = n % 10 + 48;
    n = n / 10;
    j++;
  }
  nstr = ft_strrev(nstr, i);
  return(nstr);
}


#include <stdio.h>
int main()
{
  printf("%s \n", ft_itoa(-238556));
}