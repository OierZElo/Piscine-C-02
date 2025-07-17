/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:17:59 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/16 16:22:01 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (!(*str >= 65 && *str <= 90))
			return (0);
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("\"HOLA\" → %d\n", ft_str_is_uppercase("HOLA"));   // 1
// 	printf("\"Hola\" → %d\n", ft_str_is_uppercase("Hola"));   // 0
// 	printf("\"\" (vacía) → %d\n", ft_str_is_uppercase(""));   // 1
// 	printf("\"123\" → %d\n", ft_str_is_uppercase("123"));     // 0
// 	printf("\"MUNDO\" → %d\n", ft_str_is_uppercase("MUNDO")); // 1
// 	return (0);
// }
