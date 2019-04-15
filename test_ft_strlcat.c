/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 14:17:57 by mschimme          #+#    #+#             */
/*   Updated: 2019/03/08 18:01:38 by mschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define VOLUME 80
#define LENGTH 80

#include <stdio.h>
#include <string.h>
#include "../mschimme/libft.h"

int			main(void)
{
	char	*filler = "I've got some message casted upon";
	char 	*bogey = filler;
	char	st_dst[VOLUME];
	char	cm_dst[VOLUME];
	char	*pst_dst = &st_dst[0];
	char	*pcm_dst = &cm_dst[0];
	char	*src = " your heads like a heavy sledgehammer!";
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

	printf("strlcat. VOLUME = \"%d\" LENGTH: \"%d\"\n", VOLUME, LENGTH);
	printf("strlcat. dst: \"%s\" src: \"%s\" \n", filler, src);
	printf("STND_RET:\t\"%lu\" Result: \"%s\" \n", strlcat(pst_dst, src, LENGTH), pst_dst);
	printf("Custom_RET:\t\"%lu\" Result: \"%s\" \n", ft_strlcat(pcm_dst, src, LENGTH), pcm_dst);
	return (0);
}