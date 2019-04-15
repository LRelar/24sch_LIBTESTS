/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 22:23:25 by mschimme          #+#    #+#             */
/*   Updated: 2019/03/08 18:00:54 by mschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define VOLUME 100
#define LENGTH 80

#include <stdio.h>
#include <string.h>
#include "../mschimme/libft.h"

int			main(void)
{

	char	*filler = "123";
	char 	*bogey = filler;
	char	st_dst[VOLUME];
	char	cm_dst[VOLUME];
	char	*pst_dst = &st_dst[0];
	char	*pcm_dst = &cm_dst[0];
	ft_memset((void *)st_dst, '_', VOLUME);
	ft_memset((void *)cm_dst, '_', VOLUME);
	char	*src = "gfdhfghdfh";
	int 	n = 0;

	while (*bogey != '\0')
	{
		st_dst[n] = *bogey;
		cm_dst[n] = *bogey;
		n++;
		bogey++;
	}
	st_dst[n] = '\0';
	cm_dst[n] = '\0';

	printf("strlcpy. VOLUME = \"%d\" LENGTH: \"%d\"\n", VOLUME, LENGTH);
	printf("strlcpy. DST: \"%s\" with length of: \"%lu\"; \n", pst_dst, strlen(pst_dst));
	printf("STND_RET:\t\"%lu\"\tResult:\t\t\"%s\";\n", strlcpy(pst_dst, src, LENGTH), pst_dst);
	printf("\t\t\tRemains:\t\"%s\"\n", pst_dst+LENGTH);
	printf("\n");
	printf("Custom_RET:\t\"%lu\"\tResult:\t\t\"%s\";\n", ft_strlcpy(pcm_dst, src, LENGTH), pcm_dst);
	printf("\t\t\tRemains:\t\"%s\"\n", pcm_dst+LENGTH);
/*	printf(" SRC: \"%s\" Stnd: \"%lu\"\n", src, strlcpy(st_dst, src, 1));
	printf(" SRC: \"%s\" Stnd: \"%lu\"\n", src, strlcpy(st_shorter, src, 1));*/
	return (0);
}