/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnlen.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 22:02:49 by mschimme          #+#    #+#             */
/*   Updated: 2019/03/08 17:59:45 by mschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../mschimme/libft.h"
#define COUNT 50

int			main(void)
{
	char** src;

	*src = "Banana";
	*(src + 1) = "Why so serious?";
	*(src + 2) = "Look into my eye!";
	*(src + 3) = "";
	*(src + 4) = "How come this still works!?";
	*(src + 5) = "Try and get me!";




	printf("strlen.\n");
	printf ("%s \n\n\n", *(src + 5));
	for (int i = 0; i <= 5 ; ++i)
		printf("\n SRC: \"%s\" Stnd: \"%lu\" Custom \"%lu\"/", *(src + i), strnlen(*(src + i), COUNT), ft_strnlen(*(src + i), COUNT));
	return (0);
}