int ft_atoi(const char *nptr)
{
    int nbr;
    int signal;
    
    nbr = 0;
    signal = 1;
    while (*nptr > 8 && *nptr < 14 || *nptr == ' ')
        nptr++;
    if (*nptr == '-')
        signal *= -1;
    if (*nptr == '+' || *nptr == '-')
        nptr++;
    while (*nptr >= '0' && *nptr <= '9')
    {
        nbr = nbr * 10 + *nptr - 48;
        nptr++;
    }
    return (nbr * signal);
}

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    printf("%d \n", ft_atoi(" -12a3"));
    printf("%d \n", atoi(" -12a3"));
}