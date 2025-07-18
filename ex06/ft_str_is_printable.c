/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:22:28 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/18 12:19:36 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
			return (0);
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("\"Hola!\" → %d\n", ft_str_is_printable("Hola!")); // 1
// 	printf("\"123 \\t\" → %d\n", ft_str_is_printable("123 \t"));
// 	// 0 (tab no es imprimible)
// 	printf("\"\" (vacío) → %d\n", ft_str_is_printable("")); // 1
// 	printf("\"\\n\" → %d\n", ft_str_is_printable("\n"));
// 	// 0 (salto de línea no imprimible)
// 	printf("\"~{}[]\" → %d\n", ft_str_is_printable("~{}[]")); // 1
// 	return (0);
// }
