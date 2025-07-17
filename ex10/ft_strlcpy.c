/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:56:55 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/17 15:35:13 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;

	len = 0;
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	while (size > 1 && *src)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	*dest = '\0';
	return (len);
}

// int	main(void)
// {
// 	char			src[] = "Hola mundo";
// 	char			dest[20];
// 	char			dest2[5];
// 	char			dest3[1];
// 	unsigned int	len;

// 	len = ft_strlcpy(dest, src, 20);
// 	printf("Caso 1:\n");
// 	printf("src  = \"%s\"\n", src);
// 	printf("dest = \"%s\"\n", dest);
// 	printf("longitud de src = %u\n\n", len);
// 	len = ft_strlcpy(dest2, src, 5);
// 	printf("Caso 2 (truncado):\n");
// 	printf("src  = \"%s\"\n", src);
// 	printf("dest = \"%s\"\n", dest2);
// 	printf("longitud de src = %u\n\n", len);
// 	len = ft_strlcpy(dest3, src, 0);
// 	printf("Caso 3 (size == 0):\n");
// 	printf("src  = \"%s\"\n", src);
// 	printf("dest = \"%s\" (sin copiar)\n", dest3);
// 	printf("longitud de src = %u\n", len);
// 	return (0);
// }
