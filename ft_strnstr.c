#include <stdlib.h>
char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;
    char *bigstr;
    char *littlestr;

    bigstr = (char *) big;
    littlestr = (char *) little;
    i = 0;    
    if (!littlestr)
        return (bigstr);
    while (i < len && bigstr[i] != '\0')
    {
        j = 0;
        while (littlestr[j] != '\0')
        {
            if (bigstr[i] == littlestr[j])
                return (&bigstr[i]);
            j++;
        }
        i++;
    }    
    return (NULL);
}

#include <stdio.h>
#include <bsd/string.h>
int main()
{
    const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Bar";

    printf("Original: %s\n", strnstr(largestring, smallstring, 5));
    printf("Replicated: %s\n", ft_strnstr(largestring, smallstring, 5));
}