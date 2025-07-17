/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 12:53:26 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/17 15:28:39 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	char	*ptr;

	ptr = str;
	if ((*ptr >= 97) && (*ptr <= 122))
		*ptr = *ptr - 32;
	ptr++;
	while (*ptr)
	{
		if ((*ptr >= 97) && (*ptr <= 122) && (!(((*(ptr - 1) >= 48) && (*(ptr
								- 1) <= 57)) || ((*(ptr - 1) >= 65) && (*(ptr
								- 1) <= 90)) || ((*(ptr - 1) >= 97) && (*(ptr
								- 1) <= 122)))))
		{
			*ptr = *ptr - 32;
		}
		else if ((*ptr >= 65) && (*ptr <= 90) && (((*(ptr - 1) >= 48) && (*(ptr
							- 1) <= 57)) || ((*(ptr - 1) >= 65) && (*(ptr
							- 1) <= 90)) || ((*(ptr - 1) >= 97) && (*(ptr
							- 1) <= 122))))
		{
			*ptr = *ptr + 32;
		}
		ptr++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "hola+muNdo que tal";

// 	printf("Resultado: %s", ft_strcapitalize(str));
// }
