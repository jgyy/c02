/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:28:17 by jegoh             #+#    #+#             */
/*   Updated: 2023/07/29 17:48:25 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

char	*ft_strlowcase(char *str)
{
	char	*ptr;

	if (str == NULL)
		return (NULL);
	ptr = str;
	while (*ptr)
	{
		if (*ptr >= 'A' && *ptr <= 'Z')
			*ptr = *ptr + ('a' - 'A');
		ptr++;
	}
	return (str);
}
