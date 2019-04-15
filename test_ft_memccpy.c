/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memccpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 22:21:12 by mschimme          #+#    #+#             */
/*   Updated: 2019/03/08 23:28:07 by mschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../mschimme/libft.h"
#define LENGTH 70

int			main(void)
{
	char	*src = "yaõ@WÖÃˆ∂gâ#";
	int i = 'a';
	size_t	length = ft_strlen(src);

	char	*st_dst = ft_memalloc(length);
	char	*st_res = st_dst;
	char	*st_end = st_dst + length;
//	ft_memset((void *)st_dst, '_', length - 1);


	char	*cm_dst = ft_memalloc(length);
	char	*cm_res = cm_dst;
	char	*cm_end = cm_dst + length;
//	ft_memset((void *)cm_dst, '_', length - 1);

	printf("ST_1st: %s\n", st_res = (char *)memccpy((void *)st_dst, (CV *)src, i, 1));
	printf("CM_1st: %s\n", cm_res = (char *)ft_memccpy((void *)cm_dst, (CV *)src, i, 1));
	// printf("ST_1st: %s\n", st_res = (char *)memccpy((void *)st_dst, (CV *)src, i, st_end - st_res));
	// printf("CM_1st: %s\n", cm_res = (char *)ft_memccpy((void *)cm_dst, (CV *)src, i, cm_end - cm_res));
	// printf("ST_2nd: %s\n", st_res = (char *)memccpy((void *)st_res, (CV *)src, i, st_end - st_res));
	// printf("CM_2nd: %s\n", cm_res = (char *)ft_memccpy((void *)cm_res, (CV *)src, i, cm_end - cm_res));
	// printf("ST_3rd: %s\n", st_res = (char *)memccpy((void *)st_res, (CV *)src, i, st_end - st_res));
	// printf("CM_3rd: %s\n", cm_res = (char *)ft_memccpy((void *)cm_res, (CV *)src, i, cm_end - cm_res));
	// printf("memccpy. src: \"%s\"; \n", src);
	// printf("Amount:\t\"%zu\" Stnd:\t\"%s\"\n", length, st_res);
	// printf("ST_Result:\t\"%s\"/\t%p\n", st_dst, st_dst);
	// printf("Amount:\t\"%zu\" Custom:\t\"%s\"\n", length, cm_res);
	// printf("CM_Result:\t\"%s\"/\t%p\n", cm_dst, cm_dst);
	if (ft_strequ(st_res, cm_res))
		printf("\nSUCCESS\n");

	// printf("1\t\tStnd:\t\"%s\"\n", (char *)memccpy(NULL, NULL, 0, 0));
	// printf("2\t\tStnd:\t\"%s\"\n", (char *)memccpy((void *)st_dst, NULL, 0, 0));
	// printf("3\t\tStnd:\t\"%s\"\n", (char *)memccpy(NULL, (CV *)src, 0, 0));
	// printf("4\t\tStnd:\t\"%s\"\n", (char *)memccpy(NULL, NULL, i, 0));
	// printf("6\t\tStnd:\t\"%s\"\n", (char *)memccpy((void *)st_dst, (CV *)src, 0, 0));
	// printf("7\t\tStnd:\t\"%s\"\n", (char *)memccpy((void *)st_dst, NULL, i, 0));
	// printf("8\t\tStnd:\t\"%s\"\n", (char *)memccpy(NULL, (CV *)src, i, 0));
	// printf("9\t\tStnd:\t\"%s\"\n", (char *)memccpy((void *)st_dst, (CV *)src, i, 0));
	// printf("1\t\tStnd:\t\"%s\"\n", (char *)memccpy(NULL, NULL, 0, 0));
	// printf("10\t\tStnd:\t\"%s\"\n", (char *)memccpy((void *)st_dst, (CV *)src, 0, length));
	// printf("CUSTOM\n");
	// printf("1\t\tCustom:\t\"%s\"\n", (char *)ft_memccpy(NULL, NULL, 0, 0));
	// printf("2\t\tCustom:\t\"%s\"\n", (char *)ft_memccpy((void *)st_dst, NULL, 0, 0));
	// printf("3\t\tCustom:\t\"%s\"\n", (char *)ft_memccpy(NULL, (CV *)src, 0, 0));
	// printf("4\t\tCustom:\t\"%s\"\n", (char *)ft_memccpy(NULL, NULL, i, 0));
	// printf("6\t\tCustom:\t\"%s\"\n", (char *)ft_memccpy((void *)st_dst, (CV *)src, 0, 0));
	// printf("7\t\tCustom:\t\"%s\"\n", (char *)ft_memccpy((void *)st_dst, NULL, i, 0));
	// printf("8\t\tCustom:\t\"%s\"\n", (char *)ft_memccpy(NULL, (CV *)src, i, 0));
	// printf("9\t\tCustom:\t\"%s\"\n", (char *)ft_memccpy((void *)st_dst, (CV *)src, i, 0));
	// printf("1\t\tCustom:\t\"%s\"\n", (char *)ft_memccpy(NULL, NULL, 0, 0));
	// printf("10\t\tCustom:\t\"%s\"\n", (char *)ft_memccpy((void *)st_dst, (CV *)src, 0, length));

	// printf("9\t\tCustom:\t\"%s\"\n", (char *)ft_memccpy(NULL, NULL, i, length));
	// printf("10\t\tCustom:\t\"%s\"\n", (char *)ft_memccpy(NULL, NULL, 0, length));
	// printf("11\t\tCustom:\t\"%s\"\n", (char *)ft_memccpy(NULL, (CV *)src, 0, length));
	// printf("12\t\tCustom:\t\"%s\"\n", (char *)ft_memccpy((void *)st_dst, NULL, 0, length));
	// printf("13\t\tCustom:\t\"%s\"\n", (char *)ft_memccpy(NULL, NULL, 0, length));
	
	// printf("13\t\tStnd:\t\"%s\"\n", (char *)memccpy(NULL, NULL, 0, length));
	// printf("12\t\tStnd:\t\"%s\"\n", (char *)memccpy((void *)st_dst, NULL, 0, length));
	// printf("11\t\tStnd:\t\"%s\"\n", (char *)memccpy(NULL, (CV *)src, 0, length));
	// printf("10\t\tStnd:\t\"%s\"\n", (char *)memccpy(NULL, NULL, 0, length));
	// printf("9\t\tStnd:\t\"%s\"\n", (char *)memccpy(NULL, NULL, i, length));

	return (0);
}