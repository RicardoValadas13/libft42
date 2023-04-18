/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:42:29 by rbenjami          #+#    #+#             */
/*   Updated: 2023/04/18 14:10:34 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
  size_t i;

  i = 0;
  if (size == 0)
    return (0);
  while((i < size - 1) || (src[i] != '\0'))
  {
    dst[i] = src[i];
    i++;
  }
  return(i);
}