/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeaydoga <zeaydoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 17:48:21 by zeaydoga          #+#    #+#             */
/*   Updated: 2024/09/24 15:46:34 by zeaydoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Bu fonksiyon bir string'in uzunluğunu hesaplar.
int	ft_strlen(char *str)
{
	int	i;  // 'i' değişkeni, karakter sayısını tutacak.

	i = 0;  // 'i'yi sıfırdan başlatıyoruz.
	while(str[i] != '\0')  // Stringin sonu olan '\0' karakterine kadar döngü devam eder.
		i++;  // Her geçerli karakter için 'i' bir artırılır.
	return(i);  // Stringin toplam uzunluğu geri döndürülür.
}

// Bu fonksiyon, src'den dest'e 'size' kadar karakter kopyalar ve src'nin uzunluğunu geri döndürür.
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;  // Kopyalama işlemi için kullanılacak sayaç.
	unsigned int	x;  // Kaynak stringin uzunluğunu tutmak için kullanılacak değişken.
	
	x = ft_strlen(src);  // Kaynak stringin uzunluğu hesaplanır.
	i = 0;  // 'i' sıfırlanır.
	if (size != 0)  // Eğer kopyalama yapılacak bir boyut (size) varsa, işlemler yapılır.
	{
		// Kaynak stringin sonuna kadar ya da belirlenen boyutun bir eksiğine kadar karakterler kopyalanır.
		while (src [i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];  // src'nin i. karakteri, dest'in i. karakterine kopyalanır.
			i++;  // Bir sonraki karaktere geçmek için 'i' artırılır.
		}
		dest[i] = '\0';  // Kopyalama bittiğinde, dest stringinin sonuna null karakteri eklenir.
	}
	return (x);  // Kaynak stringin uzunluğu geri döndürülür.
}

int	main()
{
	char src[] = "Aydogan";  // Kaynak string olarak "Aydogan" tanımlanır.
	char dest[] = "Zeren  ";  // Hedef string olarak "Zeren  " tanımlanır.
	// ft_strlcpy fonksiyonu çağrılır, src'den dest'e 8 karakter kadar kopyalama yapılır.
	printf("%d %s", ft_strlcpy(dest, src, 8), dest);  // Kaynak stringin uzunluğu ve kopyalanan string ekrana yazdırılır.
}
