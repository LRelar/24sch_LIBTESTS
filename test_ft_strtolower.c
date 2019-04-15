/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtolower.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 15:55:05 by mschimme          #+#    #+#             */
/*   Updated: 2019/03/08 17:57:23 by mschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#define VOLUME 80

#include <stdio.h>
#include <string.h>
#include "../mschimme/libft.h"

int			main(void)
{
	char	*filler = "0x7efefefefefefeff";
	char 	*bogey = filler;
	char	cm_dst[VOLUME];
	char	*pcm_dst = &cm_dst[0];
	int 	n = 0;


	while (*bogey != '\0')
	{
		cm_dst[n] = *bogey;
		n++;
		bogey++;
	}
	cm_dst[n] = '\0';

	printf("strtolower. VOLUME = \"%d\"\n", VOLUME);
	printf("strtolower. dst: \"%s\"\n", pcm_dst);
	printf("Custom_RET:\t\"%s\" Result: \"%s\" \n", ft_strtolower(pcm_dst), pcm_dst);
	printf("Custom_RET:\t\"%s\" Result: \"%s\" \n", ft_strtoupper(pcm_dst), pcm_dst);

	return (0);
}