/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strsub.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 19:34:20 by mschimme          #+#    #+#             */
/*   Updated: 2019/03/08 17:58:53 by mschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../mschimme/libft.h"
#define START 12
#define LENGTH 5

char *dumb_strsub(char const *s, unsigned int start, size_t len)
{
	char *sub;
	size_t	i;

	sub = ft_strnew(len);
	if (NULL == sub)
		return (NULL);
	s = s + start;
	i = 0;
	while (i < len)
	{
		sub[i] = s[i];
		i++;
	}
	return (sub);
}

char *ft_strcpy(char *dst, const char *src);

int			main(void)
{
	char	my_src[] = "___1________Done!______________________";
	char	dumb_src[] = "___1________Done!______________________";
	char	*p_my;
	char	*p_dumb;
	printf("strsub. STR: \"%s\"\n", my_src);
	p_my = ft_strsub(my_src, START, LENGTH);
	printf("Custom:\t\"%s\"\n", p_my);
	p_dumb = dumb_strsub(dumb_src, START, LENGTH);
	printf("Dumb:\t\"%s\"\n", p_dumb);
	return (0);
}