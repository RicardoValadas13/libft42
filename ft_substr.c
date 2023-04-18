/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:44:27 by rbenjami          #+#    #+#             */
/*   Updated: 2023/04/18 12:44:35 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_substr(char const *s, unsigned int start, size_t len)
{
  char *substr;
  size_t i;
  size_t j;
  
  i = 0;
  j = 0;
  substr = (char *)malloc(len + 1);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			substr[j] = s[i];
			j++;
		}
		i++;
	}
	substr[j] = '\0';
  return(substr);
}
/* #include <stdio.h>
int main()
{
  char str[11] = "Ola como ol";

  printf("%s \n", ft_substr(str,4,3));
} */