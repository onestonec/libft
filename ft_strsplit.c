/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 10:09:55 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/22 10:39:36 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    **ft_strsplit(char const *s, char c){
	char	*charset;

	if (!s || !c)
		return (NULL);
	if (!(charset = ft_strnew(2)))
		return (NULL);
	charset[0] = c;
	return (ft_strsplitchrset((char*)s, charset));
}
