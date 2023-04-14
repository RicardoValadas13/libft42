int ft_isalpha(int c)
{
    return (c>= 'A' && c <= 'Z' || c >= 'a' && c <= 'z');
}

#include <stdio.h>
#include <ctype.h>
int main()
{
    printf("%d \n", ft_isalpha('1'));
    printf("%d \n", isalpha('1'));
}