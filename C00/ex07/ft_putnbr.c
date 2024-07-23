/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeaydoga <zeaydoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:47:40 by zeaydoga          #+#    #+#             */
/*   Updated: 2024/07/23 21:08:05 by zeaydoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putnbr(int nb)
{
	long	nbl;   // 'long' türünden bir değişken, int'ten daha geniş bir aralık sağlar.
	char	c[10]; // Sayının basamaklarını karakter olarak saklayacak bir dizi. 10 basamaklı sayılar için yeterli.
	short	i;     // Basamakları dizide tutacak olan indeks değişkeni.

	nbl = nb;  // 'nb' değerini 'nbl' değişkenine kopyalar. Bu, 'nb' üzerinde işlem yaparken orijinal değeri korur.
	i = 0;    // İndeksi sıfır olarak başlatır.

	if (0 == nb)  // Eğer 'nb' sıfırsa, özel durumu kontrol eder.
	{
		write(1, "0", 1);  // '0' karakterini yazdırır.
		return ;  // İşlem biter, çünkü sıfır için özel durum sağlanmıştır.
	}

	if (nbl < 0)  // Eğer sayı negatifse:
	{
		nbl *= -1;  // Sayıyı pozitif hale getirir. 
		write(1, "-", 1);  // Negatif işaretini yazar.
	}

	while (nbl)  // 'nbl' sıfır olana kadar döngü devam eder.
	{
		c[i++] = (nbl % 10) + 48;  // 'nbl' sayısının son basamağını alır ve karaktere dönüştürüp dizinin ilgili yerine koyar.
		nbl /= 10;  // Son basamağı kaldırmak için 'nbl' değerini 10'a böler.
	}

	while (i > 0)  // Dizideki basamakları tersten yazar (en yüksek basamaktan en düşük basamağa).
		write(1, &c[--i], 1);  // Dizideki son elemanı yazdırır ve 'i''yi bir azaltır.
}