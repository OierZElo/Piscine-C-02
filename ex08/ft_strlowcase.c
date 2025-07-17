/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 12:26:30 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/17 12:52:50 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr)
	{
		if (*ptr >= 65 && *ptr <= 90)
			*ptr = *ptr + 32;
		ptr++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "hOla";

// 	printf("Resultado: %s\n", ft_strlowcase(str));
// 	return (0);
// }
