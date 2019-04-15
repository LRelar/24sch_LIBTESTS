/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 00:32:56 by mschimme          #+#    #+#             */
/*   Updated: 2019/03/08 18:01:48 by mschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../mschimme/libft.h"

#define deb printf("Checking string %d\n", __LINE__)

int		main(void)
{
	char *s1 = "my favorite animal is";
	char *s2 = " ";
	char *s3 = "the nyancat";
	char *res = ft_strjoin(ft_strjoin(s1, s2), s3);
	printf("strjoin.\n%s\n", res);
	if (!strcmp(res, "my favorite animal is the nyancat"))
		printf("Test passed! \n");
	else
		printf("Test failed! \n");
}