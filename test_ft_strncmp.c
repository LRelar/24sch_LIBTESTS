/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 23:33:55 by mschimme          #+#    #+#             */
/*   Updated: 2019/03/08 18:00:16 by mschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include "../mschimme/libft.h"

int			main(void)
{
	int i = 0;

	printf("strncmp.\n");
	while (i != 25)
	{
		printf("________________\ti == %d\t________________\n", i);
		printf("Ref: \"AAA,AAA\" Stnd: \"%d\" Custom \"%d\" \n", memcmp("AAA", "AAA", i), ft_memcmp("AAA", "AAA", i));
		printf("Ref: \"a,b\" Stnd: \"%d\" Custom \"%d\" \n", memcmp("a", "b", i), ft_memcmp("a", "b", i));
		printf("Ref: \"AAb,AAb\" Stnd: \"%d\" Custom \"%d\" \n", memcmp("AAb", "AAb", i), ft_memcmp("AAb", "AAb", i));
		printf("Ref: \"BBB,AAA\" Stnd: \"%d\" Custom \"%d\" \n", memcmp("BBB", "AAA", i), ft_memcmp("BBB", "AAA", i));
		printf("Ref: \"bba,BBa\" Stnd: \"%d\" Custom \"%d\" \n", memcmp("bba", "BBa", i), ft_memcmp("bba", "BBa", i));
		printf("Ref: \"bba,BBa\" Stnd: \"%d\" Custom \"%d\" \n", memcmp("", "", i), ft_memcmp("", "", i));
		printf("Ref: \"bba,BBa\" Stnd: \"%d\" Custom \"%d\" \n", memcmp("bba", "", i), ft_memcmp("bba", "", i));
		printf("Ref: \"bba,BBa\" Stnd: \"%d\" Custom \"%d\" \n", memcmp("bba", "BBaer", i), ft_memcmp("bba", "BBaer", i));
		printf("Ref: \"BB√∂ƒ∂ßaer,BB√∂ƒ∂ßaer\" Stnd: \"%d\" Custom \"%d\" \n", memcmp("BB√eafasfasefaefafeafaefasfdasfds∂ƒ∂ßaer", "BB√∂aeaewfaefaesfafefaefaefeafefaefasfsefaefƒ∂aer", i), ft_memcmp("BB√eafasfasefaefafeafaefasfdasfds∂ƒ∂ßaer", "BB√∂aeaewfaefaesfafefaefaefeafefaefasfsefaefƒ∂aer", i));
		printf("\n===============================================================================================\n");
		i++;
	}
	return (0);
}