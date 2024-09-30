/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeaydoga <zeaydoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:19:34 by zeaydoga          #+#    #+#             */
/*   Updated: 2024/09/04 14:52:41 by zeaydoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_str_is_alpha: Verilen dizinin sadece alfabetik karakterlerden oluşup oluşmadığını kontrol eder.
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	// Eğer dizi boşsa (ilk karakter null karakteriyse), fonksiyon 1 döndürür.
	if (str[i] == '\0')
	{
		return (1); // Boş dizinin tüm karakterleri alfabetik olarak kabul edilir.
	}
	// Dizinin her bir karakteri kontrol edilir.
	while (str[i])
	{
		// Eğer karakter büyük harfler (A-Z) veya küçük harfler (a-z) arasındaysa, sayaç artırılır.
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
			i++;
		else
			return (0); // Alfabetik olmayan bir karakter bulunursa, fonksiyon 0 döndürür.
	}	
	return (1); // Dizi tamamen alfabetik karakterlerden oluşuyorsa, fonksiyon 1 döndürür.
}

/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_str_is_alpha("zeaydoga"));		//1
	printf("\n%d", ft_str_is_alpha("zeaydoga42"));	//0
	printf("\n%d", ft_str_is_alpha("4yd0g4n"));		//0
}
*/