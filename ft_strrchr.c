/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:43:40 by rbenjami          #+#    #+#             */
/*   Updated: 2023/04/18 14:11:13 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char * str;
    int ssize;

    str = (char *)s;
    ssize = ft_strlen(s);
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