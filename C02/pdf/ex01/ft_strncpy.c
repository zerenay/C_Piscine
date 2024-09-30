/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeaydoga <zeaydoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:41:54 by zeaydoga          #+#    #+#             */
/*   Updated: 2024/09/04 14:52:18 by zeaydoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_strncpy: Kaynak diziden hedef diziye, belirli sayıda karakter kopyalar.
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i; // Döngü sayacı

	i = 0; // Sayaç başlangıç değeri olarak 0 ayarlanır.
	// Kaynak diziden hedef diziye, n kadar karakter kopyalama işlemi yapılır.
	while (src[i] && i < n) // Kaynak dizi sonlanmadıkça ve i < n oldukça döngü devam eder.
	{
		dest[i] = src[i]; // Kaynak dizinin karakteri hedef diziye kopyalanır.
		i++;
	}
	// Eğer kopyalanacak karakter sayısı, kaynak dizinin uzunluğundan küçükse, kalan kısımlar null karakteri ile doldurulur.
	while (i < n) // Hedef dizinin geri kalanı null karakteri ile doldurulur.
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char src[] = "42Turkiye";
	char dest[] = "**Kocaeli";

	printf("%s\n", ft_strncpy(dest, src, 2 )); //42Kocaeli
	printf("%s", strncpy(dest, src, 9));	   //42Turkiye                           

    return 0;
}
*/