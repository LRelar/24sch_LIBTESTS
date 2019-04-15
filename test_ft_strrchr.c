/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 21:47:32 by mschimme          #+#    #+#             */
/*   Updated: 2019/03/09 00:01:03 by mschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../mschimme/libft.h"
#define deb printf("Checking string %d\n", __LINE__)

int			main(void)
{
	char	*s = "\0";
	int		sym = 'a';
	size_t	length = ft_strlen(s);

		printf("strrchr.\n");
		printf("size of string: %lu\n", ft_strlen(s));
		printf("Stnd:\t\"%s\"\t\t\tLine: %s\n", strrchr((const char *) s, sym), s);
		printf("Custom:\t\"%s\"\t\t\tLine: %s\n", ft_strrchr((const char *) s, sym), s);

	return (0);
}