/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:28:05 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/17 12:24:27 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr)
	{
		if (*ptr >= 97 && *ptr <= 122)
			*ptr = *ptr - 32;
		ptr++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "hOla";

// 	printf("Resultado: %s\n", ft_strupcase(str));
// 	return (0);
// }
