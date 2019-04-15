/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 20:12:47 by mschimme          #+#    #+#             */
/*   Updated: 2019/03/08 20:28:56 by mschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mschimme/libft.h"
#include <string.h>

int		main (void)
{
	char	*string = "fa";
	char	*check = ft_memalloc(ft_strlen(string)+20);
	ft_strcpy(check, string);
	int		logos = 'a';
	*(check + 3) = 'a';
	char	*stdchk = (char *)memchr((CV *)check, logos, ft_strlen(string) + 20);
	char	*cuschk = (char *)ft_memchr((CV *)check, logos, ft_strlen(string) + 20);
	
	printf("std: %s, %p\n", stdchk, stdchk);
	printf("cus: %s, %p\n", cuschk, cuschk);

}