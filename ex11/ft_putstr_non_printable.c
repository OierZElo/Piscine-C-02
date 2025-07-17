/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 15:39:08 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/17 16:10:43 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*hex;

	hex = "0123456789abcdef";
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
			write(1, str, 1);
		else
		{
			write(1, "\\", 1);
			write(1, &hex[*str / 16], 1);
			write(1, &hex[*str % 16], 1);
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
