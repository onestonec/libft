/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:54:39 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/22 19:18:59 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstdel(t_list **alst, void (*del)(void*, size_t)){
        if((!alst) || (!*alst)){
                return NULL;
        }
        t_list *ptr = *alst;
        while(ptr){
                (del)(ptr->content, ptr->content_size);
                ptr = ptr->next;
        }
	free(*alst);
	*alst = NULL;
}
