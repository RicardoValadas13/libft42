#include <stddef.h>
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (s1[i] || s2[i] && i < n)
    {
        if (s1[i] == s2[i])
            i++;
        else
            break;        
    }
    return (s1[i] - s2[i]);
}


#include <string.h>
#include <stdio.h>
int main()
{
    char s1[] = "This is not the way.";
    char s2[] = "This is the way.";

    printf("Original\n");
    printf("%d \n", strncmp(s1,s2,15));
    printf("Replicated\n");
    printf("%d \n", ft_strncmp(s1,s2,15));
}