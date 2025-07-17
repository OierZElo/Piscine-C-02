/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:14:41 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/16 16:17:21 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (!(*str >= 97 && *str <= 122))
			return (0);
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("\"hola\" → %d\n", ft_str_is_lowercase("hola"));           // 1
// 	printf("\"Hola\" → %d\n", ft_str_is_lowercase("Hola"));           // 0
// 	printf("\"holamundo\" → %d\n", ft_str_is_lowercase("holamundo")); // 1
// 	printf("\"hola123\" → %d\n", ft_str_is_lowercase("hola123"));     // 0
// 	printf("\"\" (vacía) → %d\n", ft_str_is_lowercase(""));           // 1
// 	return (0);
// }
