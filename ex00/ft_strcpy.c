/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 20:48:15 by jegoh             #+#    #+#             */
/*   Updated: 2023/08/02 17:55:53 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*original_dest;

	original_dest = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (original_dest);
}
/*
int	main(void)
{
	char	*dest0;
	char	dest1[100];
	char	src[] = "hello worlds";

	dest0 = (char *)malloc(100 * sizeof(char));
	printf("%s\n", ft_strcpy(dest0, src));
	printf("%s\n", strcpy(dest1, src));
	free(dest0);
	return (0);
}
*/
