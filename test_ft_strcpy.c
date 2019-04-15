/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 22:23:25 by mschimme          #+#    #+#             */
/*   Updated: 2019/03/08 18:02:07 by mschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dst, const char *src);

int			main(void)
{
	char src[] = "Done!";
	char st_dst[] = "_________________________________";
	char cm_dst[] = "_________________________________";
	printf("strcpy. Stnd: \"%s\" Custom \"%s\" \n", strcpy(st_dst, src), ft_strcpy(cm_dst, src));
//	printf("strcpy. Stnd: \"%s\"\n", strcpy(st_dst, src));
	return (0);
}