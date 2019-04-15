/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 22:23:25 by mschimme          #+#    #+#             */
/*   Updated: 2019/03/08 18:00:01 by mschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../mschimme/libft.h"

int			main(void)
{
	char src[] = "Done!";
	char st_dst[] = "_________________________________";
	char cm_dst[] = "_________________________________";
	char st_shorter[] = "__";
	char cm_shorter[] = "__";

	printf("strlcpy. DST: \"%s\";", st_dst);
	printf(" SRC: \"%s\" Stnd: \"%s\" Custom \"%s\"/ \n", src, strncpy(st_dst, src, 5), ft_strncpy(cm_dst, src, 5));
	printf(" SRC: \"%s\" Stnd: \"%s\" Custom \"%s\"/ \n", src, strncpy(st_shorter, src, 0), ft_strncpy(cm_shorter, src, 0));
//	printf(" SRC: \"%s\" Stnd: \"%s\"\n", src, strncpy(st_dst, src, 1));
//	printf(" SRC: \"%s\" Stnd: \"%s\"\n", src, strncpy(st_shorter, src, 1));
	return (0);
}