/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeaydoga <zeaydoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:07:42 by zeaydoga          #+#    #+#             */
/*   Updated: 2024/09/04 14:51:42 by zeaydoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i; // Dizinin karakterlerini kontrol etmek için kullanılan sayaç.

	i = 0; // Sayacın başlangıç değeri 0 olarak ayarlanır.
	while (str[i]) // Dizenin sonuna (null karakterine) gelene kadar döngü devam eder.
	{
		// Eğer karakter sayısal değilse (0-9 aralığında değilse),
		// fonksiyon 0 döndürür ve kontrol işlemi sonlanır.
		if (!(str[i] >= 48 && str [i] <= 57))
		{
			return (0);
		}
		// Eğer karakter sayısal ise, sayaç bir artırılır ve bir sonraki karakter kontrol edilir.
		i++;
	}
	// Döngü sona erdiğinde ve tüm karakterler sayısal ise fonksiyon 1 döndürür.
	return (1);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_str_is_numeric("20042001"));		//1
	printf("\n%d", ft_str_is_numeric("Ecole42"));		//0
	printf("\n%d", ft_str_is_numeric("zerenayd41@"));	//0
}
*/