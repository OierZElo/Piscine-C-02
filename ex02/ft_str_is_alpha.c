/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:03:51 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/16 16:14:08 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (!((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122)))
			return (0);
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("\"HolaMundo\" → %d\n", ft_str_is_alpha("HolaMundo"));   // 1
// 	printf("\"Hola123\" → %d\n", ft_str_is_alpha("Hola123"));       // 0
// 	printf("\"\" (vacío) → %d\n", ft_str_is_alpha(""));             // 1
// 	printf("\"Hola Mundo\" → %d\n", ft_str_is_alpha("Hola Mundo")); // 0
// 	printf("\"abcXYZ\" → %d\n", ft_str_is_alpha("abcXYZ"));         // 1
// 	return (0);
// }
