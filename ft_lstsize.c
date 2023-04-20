/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:07:05 by rbenjami          #+#    #+#             */
/*   Updated: 2023/04/20 14:16:42 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_lstsize(t_list *lst)
{
  int cnt;

  cnt = 1;
  if (lst == NULL)
    return(0);
  while(lst->next != NULL)
  {
    cnt++;
    lst = lst->next;
  }
  return (cnt);
}