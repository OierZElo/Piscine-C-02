/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 15:39:08 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/18 12:21:59 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char			*hex;
	unsigned char	c;

	hex = "0123456789abcdef";
	while (*str)
	{
		c = (unsigned char)*str;
		if (c >= 32 && c <= 126)
			write(1, &c, 1);
		else
		{
			write(1, "\\", 1);
			write(1, &hex[c / 16], 1);
			write(1, &hex[c % 16], 1);
		}
		str++;
	}
}

// int	main(void)
// {
// 	char	test[] = "Coucou\ntu vas bien ?";

// 	ft_putstr_non_printable(test);
// 	return (0);
// }
