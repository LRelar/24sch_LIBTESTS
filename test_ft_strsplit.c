/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strsplit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 21:47:32 by mschimme          #+#    #+#             */
/*   Updated: 2019/03/10 23:55:17 by mschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../mschimme/libft.h"

#define deb printf("Checking string %d\n", __LINE__)

int			main(void)
{
	char *pin1 ="******************olol";
	int		a = '*';
	char	**res;
	int i = 0;

	printf("strsplit.\n");
	res = ft_strsplit((const char *)pin1, (char)a);
	printf("\nRef: [%s]\n", (char *)pin1);
	if (res)
		for (int k = 0; k < 104; k++)
			printf("'%c' ", *((char *)res + k));
	printf("\n");
	while (res[i] != '\0')
	{
	printf("Res: [%s]\n", res[i]);
//	printf("Pocket: [%p]\t", res[i]);
//	printf("Points at: [%p]\n", *res[i]);
	i++;
	}
	printf("STND\n");
return (0);
}
// {
// 	int n;
// 	ft_putstr("\n\n##ft_strsplit");
// 	ft_putstr("\n\n\\\\------------------------------//\n\n");

// 	printf("-velesepede-\n");
// 	char	**str3;
// 	str3	=	NULL;
// 	str3 = ft_strsplit("*hello*fellow***students*", '*');
// 	n		=	-1;
// 	while (str3[++n])
// 		printf("%s\n", str3[n]);
// 	printf("\n-original-\nhello\nfellow\nstudents\n");
// 	n		=	0;
// 	while (str3[n])
// 		{free(str3[n]); n++;}

// 	str3	=	NULL;
// }