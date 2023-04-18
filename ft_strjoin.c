/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:41:30 by rbenjami          #+#    #+#             */
/*   Updated: 2023/04/18 12:42:09 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
  char  *str1;
  char  *str2;
	char	*str3;
	size_t	i;

	i = 0;
  str1 = (char *)s1;
  str2 = (char *)s2;
	if (str1 == NULL || str2 == NULL)
		return (NULL);
	str3 = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str3)
		return (NULL);
	while (*str1)
	{
		str3[i] = *str1;
    i++;
		str1++;
	}
	while (*str2)
	{
		str3[i] = *str2;
		i++;
		str2++;
	}
	str3[i] = '\0';
	return (str3);
}

/* #include <stdio.h>
int main()
{
  const char str1[6] = "OLA A";
  const char str2[6] = "TODOS";
  printf("Result: %s\n", ft_strjoin(str1, str2));
} */