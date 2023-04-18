#include <stdlib.h>
int ft_strlen(char *str)
{
    int cnt;

    cnt = 0;
    while(*str++)
        cnt++;
    return(cnt);
}
char *ft_strrchr(const char *s, int c)
{
    char * str;
    int ssize;

    str = (char *)s;
    ssize = ft_strlen(str);
    while (ssize--)
	{
		if (str[ssize] == c)
			return (&str[ssize]);
	}
	return (NULL);
}
#include <stdio.h>

int main()
{
    const char *largestring = "Foo Bar Baz";
    char smallstring = 'B';

    printf("Replicated: %s\n", ft_strrchr(largestring, smallstring));
}