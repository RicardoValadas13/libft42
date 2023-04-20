/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjamim <rbenjamim@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:44:08 by rbenjami          #+#    #+#             */
/*   Updated: 2023/04/20 09:43:18 by rbenjamim        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strtrim(char const *s1, char const *set)
{
  char const *start;
  char const *end;
  char *trimmed_str;
  char *set_mem;

  start = s1;
  set_mem = ft_strdup(set); 
  while (*start && ft_strchr(set_mem, *start))
    start++;  
  end = s1 + ft_strlen(s1) + 1;
  set_mem = ft_strdup(set); 
  while (end > start && ft_strchr(set_mem, *end))
    end--;
  trimmed_str = malloc(end - start + 2);
  if (!trimmed_str)
    return (NULL);
  ft_strlcpy(trimmed_str, start, end - start + 1);
  trimmed_str[end - start + 1] = '\0';
  return (trimmed_str);
}