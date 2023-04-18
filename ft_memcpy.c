/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:40:30 by rbenjami          #+#    #+#             */
/*   Updated: 2023/04/18 12:40:33 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
  char *d = (char *) dest;
  const char *s = (const char *) src;
  if (!dest && !src)
    return (NULL);
  while (n--)
  {
    *d++ = *s++;
  }
  return (dest);
}