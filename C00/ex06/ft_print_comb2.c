/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeaydoga <zeaydoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:53:18 by zeaydoga          #+#    #+#             */
/*   Updated: 2024/07/23 21:08:42 by zeaydoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Bu fonksiyon, tek bir karakteri yazmak için kullanılır
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Bu fonksiyon, iki sayıyı yazdırır ve aralarına boşluk koyar
// Eğer yazdırılan son sayı kombinasyonu değilse, aralarına virgül ve boşluk ekler
void	print_numbers(int a, int b)
{
	ft_putchar(a / 10 + 48); // a sayısının onlar basamağını yazdırır
	ft_putchar(a % 10 + 48); // a sayısının birler basamağını yazdırır
	ft_putchar(' '); // iki sayı arasına boşluk koyar
	ft_putchar(b / 10 + 48); // b sayısının onlar basamağını yazdırır
	ft_putchar(b % 10 + 48); // b sayısının birler basamağını yazdırır
	if (a != 98 || b != 99) // son sayı kombinasyonu değilse
	{
		ft_putchar(','); // sayı kombinasyonları arasına virgül koyar
		ft_putchar(' '); // sayı kombinasyonları arasına boşluk koyar
	}
}

// Bu fonksiyon, 00 ile 99 arasındaki tüm iki basamaklı sayı kombinasyonlarını yazdırır
void	ft_print_comb2(void)
{
	int	a; // birinci sayı
	int	b; // ikinci sayı

	a = 0; // birinci sayı 0 ile başlar
	while (a <= 98) // birinci sayı 98'e kadar gider
	{
		b = a + 1; // ikinci sayı birinci sayıdan bir fazlasıyla başlar
		while (b <= 99) // ikinci sayı 99'a kadar gider
		{
			print_numbers(a, b); // iki sayıyı yazdırır
			b++; // ikinci sayıyı bir artırır
		}
		a++; // birinci sayıyı bir artırır
	}
}