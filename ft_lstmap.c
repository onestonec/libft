/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 19:38:23 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/22 19:44:40 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem)){
	t_list *ptr = lst;
	if(lst){
		ptr = f(lst);
		ptr->next = ft_lstmap(lst->next, f);
		return ptr;
	}
	return NULL;
}
