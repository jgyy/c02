/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:40:44 by jegoh             #+#    #+#             */
/*   Updated: 2023/08/16 13:47:38 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdbool.h>

bool	is_alphanumeric(char c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

char	to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	return (c);
}

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 'a');
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	bool	new_word;
	int		i;

	new_word = true;
	i = 0;
	while (str[i])
	{
		if (is_alphanumeric(str[i]))
		{
			if (new_word)
				str[i] = to_upper(str[i]);
			else
				str[i] = to_lower(str[i]);
			new_word = false;
		}
		else
			new_word = true;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main() {
    char input[1000] = "salut, comment tu vas ? 42mots quarante-deux;";
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == '\n') {
            input[i] = '\0';
            break;
        }
    }
    ft_strcapitalize(input);
    printf("Capitalized string: %s\n", input);
    return 0;
}
*/
