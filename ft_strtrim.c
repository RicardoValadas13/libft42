/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:44:08 by rbenjami          #+#    #+#             */
/*   Updated: 2023/04/18 16:05:23 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strtrim(char const*s1, char const *set)
{
  char *str1;
  char *r;
  char *new_str;
  size_t i;

  i = 0;
  str1 = (char *)s1;
  r = (char *)set;
  if (!str1)
		return (NULL);
  new_str =  (char *)malloc(ft_strlen(s1) - ft_strlen(set) + 1);
  while (*str1)
  {
    if (*str1 == *r)
    {
      str1++;
      r++;      
    }
    else
    {
      new_str[i] = *str1;
      str1++;
      i++;
    }
  }
  new_str[i] = '\0';
  return(new_str);
}

/* #include <stdio.h>
int main()
{
  const char str1[6] = "TODOS";
  const char str2[3] = "DO";
  printf("Result: %s\n", ft_strtrim(str1, str2));
} */