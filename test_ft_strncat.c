/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 14:17:57 by mschimme          #+#    #+#             */
/*   Updated: 2019/03/08 18:00:33 by mschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define VOLUME 80
#define LENGTH 20


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
	int		i = VOLUME;
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

	printf("strncat. VOLUME = \"%d\" LENGTH: \"%d\"\n", i, LENGTH);
	printf("strncat. dst: \"%s\" src: \"%s\" \n", filler, src);
	printf("STND_RET:\t\"%s\" Length: \"%lu\" \n", strncat(pst_dst, src, LENGTH), strlen(pst_dst));
	printf("Custom_RET:\t\"%s\" Length: \"%lu\" \n", ft_strncat(pcm_dst, src, LENGTH), strlen(pcm_dst));
	return (0);
}