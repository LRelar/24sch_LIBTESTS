/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 14:17:57 by mschimme          #+#    #+#             */
/*   Updated: 2019/03/08 18:01:57 by mschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../mschimme/libft.h"

int			main(void)
{
	char	src[] = "This is source string.";
	char	cm_src[] = "This is handmade source string.";

	char	*cleaner;
	cleaner = src;

	printf("strdup. Source: %s Stnd:\t\"%s\"\n", src, strdup(src));
	printf("strdup. Source: %s Custom\t\"%s\" \n", src, ft_strdup(cm_src));

	return (0);
}