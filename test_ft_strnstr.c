/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 22:45:22 by mschimme          #cd +#    #+#             */
/*   Updated: 2019/03/07 20:58:05 by mschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../mschimme/libft.h"
#define LENGTH 3


int			main(void)
{
	char src[] = "un deux 9";
	size_t	length = ft_strlen(src);
	char subsrc[] = "9";
	char *forstd = strnstr(src, subsrc, LENGTH);
	char *forcust = ft_strnstr(src, subsrc, LENGTH);

	printf("strstr.\nSRC: \"%s\"\tsubsrc: \"%s\";\n", src, subsrc);
	printf("Stnd:\t\"%s\"\n", forstd);
	printf("Custom:\t\"%s\"\n", forcust);
	if (forstd == forcust)
		printf("Success\n");


	return (0);
}