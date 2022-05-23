/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:48:31 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/22 17:58:55 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstdelone(t_list **alst, void (*del)(void*, size_t)){
	(del)(*alst->content, *alst->content_size);
	free(*alst);
	*alst = NULL;
}
