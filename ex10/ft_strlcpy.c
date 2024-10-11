/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 20:45:33 by jegoh             #+#    #+#             */
/*   Updated: 2023/08/16 13:53:52 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	if (!dest || !src)
		return (0);
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (size != 0)
		dest[i] = '\0';
	return (src_len);
}
/*
#include <stdio.h>

int main(void)
{
    char src[] = "Hello, World!";
    char dest[50];

    unsigned int length = ft_strlcpy(dest, src, 10);
    printf("Copied string: %s\n", dest);
    printf("Length of source string: %u\n", length);

    length = ft_strlcpy(dest, src, 0);
    printf("No copying (size = 0), but length of source string: %u\n", length);

    length = ft_strlcpy(dest, src, sizeof(dest));
    printf("Fully copied string: %s\n", dest);
    printf("Length of source string: %u\n", length);

    return 0;
}
*/
