/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:09:43 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/22 17:21:36 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void const *content, size_t content_size){
	t_list *item = (t_size *)malloc(sizeof(t_list));	
	if(!item){
		return NULL;
	}
	if(!content){
		item->content = NULL;
		item->content_size = 0;
	} else{
		item->content = content;
		item->content_size = content_size;
	}
	item->next = NULL;
	return item;
}
