/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:19:19 by wcheung           #+#    #+#             */
/*   Updated: 2022/05/23 19:53:01 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n){
	int sign = 1;
	int copy;
	int counter = 0;
	char *res_copy;
	char *res;
	if(n == 0){
		res = (char *)(malloc(sizeof(char) * (2)));
		if(!res){
			return NULL;
		}
		res[0] = '0';
		res[1] = '\0';
		return res;
	}
	if (n == -2147483647 - 1){
		res = (char *)(malloc(sizeof(char) * (12)));
		if(!res){
			return NULL;
		}
		res = "-2147483648";
		return res;
	}
	if (n < 0){
		sign = -1;
		n = -n;
	}
	copy = n;
	
	//Counting length of string
	while (copy != 0){
		copy = copy / 10;
		counter++;
	}

	if(sign == -1){
		res = (char *)(malloc(sizeof(char) * (counter + 2)));
		res_copy = (char *)(malloc(sizeof(char) * (counter + 2)));
	} else{
		res = (char *)(malloc(sizeof(char) * (counter + 1)));
		res_copy = (char *)(malloc(sizeof(char) * (counter + 1)));
	}

	if(!res || !res_copy){
		return NULL;
	}

	for(int i = 0; i < counter; i++){
		res_copy[i] = (char)(n % 10 + 48);
		n = n / 10;
	}

	//Copying from the "Reversed Array" into the return array
	if(sign == -1){
		res[0] = '-';
		for (int i = counter - 1, j = 1; (i >= 0) && (j < counter + 1); i--, j++){
			res[j] = res_copy[i];
		}
		res[counter + 1] = '\0';
		return res;
	} 
	for(int i = counter - 1, j = 0; (i >= 0) && (j < counter); i--, j++){
		res[j] = res_copy[i];
	}
	res[counter] = '\0';
	return res;
}
