/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 22:02:49 by mschimme          #+#    #+#             */
/*   Updated: 2019/03/08 18:00:45 by mschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../mschimme/libft.h"


int			main(void)
{
	char** src;

	*src = "Banana";
	*(src + 1) = "rysttrutryudrtdtyujtyrehtdrydtydtrydtruryijtdytuytydryytyytrtruyttyryhdtry?";
	*(src + 2) = "Look inyrtystydrtuyserhdyserthrtdytto my eye!";
	*(src + 3) = "";
	*(src + 4) = "How come hfghgfhdgfhdghdghdthis still works!?";
	*(src + 5) = "Try!";

	printf("strlen.\n");
	printf ("%s\n", *(src + 5));
	for (int i = 0; i <= 5 ; ++i)
	{
		printf("Size_t = %lu; SRC as integer:\"%lu\"\tSRC: \"%s\"\n", sizeof(size_t), (size_t)*(src + i), *(src + i));
	//	printf(" Stnd:\t\"%lu\"\n", strlen(NULL));
		printf(" Custom\t\"%lu\"\n", ft_strlen(NULL));
	}


	return (0);
}