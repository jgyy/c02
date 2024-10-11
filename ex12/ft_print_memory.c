/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 22:15:02 by jegoh             #+#    #+#             */
/*   Updated: 2023/08/15 23:14:09 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_memory_address(unsigned long long addr)
{
	int		i;
	char	address[16];

	i = 15;
	while (i >= 0)
	{
		address[i] = "0123456789abcdef"[addr % 16];
		addr /= 16;
		i--;
	}
	write(1, address, 16);
	write(1, ": ", 2);
}

void	print_hex(char *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < 16 && i < size)
	{
		write(1, &"0123456789abcdef"[(unsigned char)addr[i] / 16], 1);
		write(1, &"0123456789abcdef"[(unsigned char)addr[i] % 16], 1);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
	while (i < 16)
	{
		write(1, "  ", 2);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
}

void	print_ascii(char *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < 16 && i < size)
	{
		if (addr[i] >= 32 && addr[i] <= 126)
			write(1, &addr[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	bytes_printed;

	bytes_printed = 0;
	while (bytes_printed < size)
	{
		print_memory_address((unsigned long long)(addr + bytes_printed));
		print_hex((char *)addr + bytes_printed, size - bytes_printed);
		print_ascii((char *)addr + bytes_printed, size - bytes_printed);
		bytes_printed += 16;
	}
	return (addr);
}
/*
#include <stdlib.h>
int main(void)
{
    char str[] = "Bonjour les aminches...c'est fou.tout.ce qu'on peut faire";
    ft_print_memory(str, sizeof(str) - 1);
    return 0;
}
*/
