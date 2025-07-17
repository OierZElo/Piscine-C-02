/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:08:19 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/16 16:14:09 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (!(*str >= 48 && *str <= 57))
			return (0);
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("\"123456\" → %d\n", ft_str_is_numeric("123456")); // 1
// 	printf("\"123a56\" → %d\n", ft_str_is_numeric("123a56")); // 0
// 	printf("\"\" (vacío) → %d\n", ft_str_is_numeric(""));     // 1
// 	printf("\"00000\" → %d\n", ft_str_is_numeric("00000"));   // 1
// 	printf("\"42!\" → %d\n", ft_str_is_numeric("42!"));       // 0
// 	return (0);
// }
