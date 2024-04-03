/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrmar2 <andrmar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 21:27:59 by andrmar2          #+#    #+#             */
/*   Updated: 2024/04/03 20:46:03 by andrmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (*str != 0)
	{
		i++;
		str++;
	}
	return (i);
}
/*
int	main(void)
{
	char	str[] = "rainbow";
	int		i;

	i = ft_strlen(str);
	printf("length: %d\n", i);
	return (0);
}*/
