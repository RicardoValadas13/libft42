/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:24:02 by rbenjami          #+#    #+#             */
/*   Updated: 2023/04/14 11:27:13 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	if (s == NULL)
		return (NULL);
	str = (char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	const char str[] = "http://www.tutorialspoint.com";
	const char ch = '.';
	char *ret;
	char *ret_t;

	ret = memchr(str, ch, strlen(str));
	ret_t = ft_memchr(str, ch, strlen(str));
	printf("String after |%c| is - |%s|\n", ch, ret);
	printf("String after |%c| is - |%s|\n", ch, ret_t);

	return (0);
} */