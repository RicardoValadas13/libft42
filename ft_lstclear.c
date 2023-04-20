/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <rbenjami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:51:45 by rbenjami          #+#    #+#             */
/*   Updated: 2023/04/20 16:18:31 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void  ft_lstclear(t_list **lst, void (*del)(void *))
{
  t_list  *current;
  
  while ((*lst)->next != NULL)
  {
    current = (*lst)->next;
    ft_lstdelone(*lst,del);
    *lst = current;
  }
  *lst = NULL;
}