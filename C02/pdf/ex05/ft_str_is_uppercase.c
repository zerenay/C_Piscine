/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeaydoga <zeaydoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:16:23 by zeaydoga          #+#    #+#             */
/*   Updated: 2024/09/20 14:44:44 by zeaydoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Bu fonksiyon, bir dizinin (string) tamamen büyük harflerden oluşup oluşmadığını kontrol eder.
int ft_str_is_uppercase(char *str)
{
	// Diziyi sona kadar gezmek için bir döngü başlatılır.
	while (*str)
	{
		// Eğer karakter büyük harf aralığında değilse (A-Z aralığında değilse),
		// 0 döndürülür, yani dizi tamamen büyük harflerden oluşmamaktadır.
		if (!(*str >= 65 && *str <= 90))  // ASCII kodlarına göre: 'A' = 65, 'Z' = 90
		{
			return (0);
		}
		// Eğer karakter büyük harfse bir sonraki karaktere geçilir.
		str++;
	}
	// Eğer tüm karakterler büyük harfse 1 döndürülür.
	return (1);
}
/*
int main()
{
    printf("%d", ft_str_is_uppercase("zerenaydogan"));   //0
	printf("\n%d", ft_str_is_uppercase("ZERENAYDOGAN"));  //1
	printf("\n%d", ft_str_is_uppercase("@ZERENAY__"));   //0
}
*/