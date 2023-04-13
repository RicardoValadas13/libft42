char    *ft_strstr(const char *haystack,const char *needle)
{
    int i;
    int j;

    i = 0;
    if (!*needle)
        return((char *)haystack);
    while (haystack[i])
    {
        j = 0;
        while (haystack[i + j] == needle[j] && haystack[i + j] != '\0')
        {
            if (needle[j + 1] == '\0')
                return ((char *)&haystack[i]);
            j++;
        }
        i++;
    }
    return (0);
}

#include <stdio.h>
#include <string.h>


int main () {
    const char haystack[20] = "TutorialsPont2";
    const char needle[10] = "als";
   

   printf("The substring is: %s\n", strstr(haystack, needle));
   printf("The substring is: %s\n", ft_strstr(haystack, needle));
   
   return(0);
}