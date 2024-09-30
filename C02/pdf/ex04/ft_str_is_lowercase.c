/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeaydoga <zeaydoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 12:56:35 by zeaydoga          #+#    #+#             */
/*   Updated: 2024/09/20 13:55:43 by zeaydoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//Bir dizenin yalnızca küçük harflerden oluşup oluşmadığını kontrol eden bir fonksiyon
int	ft_str_is_lowercase(char *str)
{
	int	i; // Dizinin karakterlerini kontrol etmek için kullanılan sayaç değişkeni.

	i = 0; // Sayaç başlangıçta 0 olarak ayarlanır.
	while (str[i]) // Dizenin sonuna (null karaktere) kadar döngü devam eder.
	{
		// Eğer karakter küçük harf değilse (a-z aralığında değilse),
		// fonksiyon 0 döndürür ve kontrol işlemi sona erer.
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		// Eğer karakter küçük harf ise, sayaç bir artırılır ve bir sonraki karakter kontrol edilir.
		i++;
	}
	// Eğer döngü sona erdiğinde tüm karakterler küçük harf ise, fonksiyon 1 döndürür.
	return (1);
}
/*
int	main()
{
	printf("%d", ft_str_is_lowercase("zerenaydogan"));   //1
	printf("\n%d", ft_str_is_lowercase("ZerenAydogan")); //0
	printf("\n%d", ft_str_is_lowercase("@zerenay__"));   //0
}
*/