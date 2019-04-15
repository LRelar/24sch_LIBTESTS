/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 22:45:22 by mschimme          #+#    #+#             */
/*   Updated: 2019/03/08 17:59:00 by mschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../mschimme/libft.h"


int			main(void)
{
	char src[] = "";
	char subsrc[] = "ert";
	char *forstd = strstr(src, subsrc);
	char *forcust = ft_strstr(src, subsrc);

	printf("strstr. SRC: \"%s\" subsrc: \"%s\";\n", src, subsrc);
	printf("Stnd: \"%s\" Custom \"%s\"/\n", forstd, forcust);

	return (0);
}