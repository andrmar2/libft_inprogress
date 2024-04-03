/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrmar2 <andrmar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 14:06:35 by andrmar2          #+#    #+#             */
/*   Updated: 2024/04/03 20:53:34 by andrmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	s1[] = "holi";
	char	s2[] = "hello";
	unsigned int	n = 4;

	int result = ft_strncmp(s1, s2, n);
	if (result == 0)
	{
		printf("Las primeras %u letras son iguales.\n", n);
	}
	else if (result < 0)
	{
		printf("Las primeras %u letras de str1 < las de str2.\n", n);
	}
	else
	{
		printf("Las primeras %u letras de str1 > str2.\n", n);
	}
	return (0);
}*/
