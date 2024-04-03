/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrmar2 <andrmar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:11:54 by andrmar2          #+#    #+#             */
/*   Updated: 2024/04/03 20:52:02 by andrmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srclen);
}
/*
int	main(void)
{
	char	src[] = "Hello, world! How are you";
	char	dest[20];
	size_t	length;

	length = ft_strlcpy(dest, src, sizeof(dest));
	printf("Cadena copiada: %s\n", dest);
	printf("Longitud de la cadena src: %zu\n", length);
	return (0);
}*/
