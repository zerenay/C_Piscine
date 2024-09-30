/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeaydoga <zeaydoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:13:39 by zeaydoga          #+#    #+#             */
/*   Updated: 2024/09/04 14:51:57 by zeaydoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    // src dizisinin sonuna kadar döngü devam edecek
    while (src[i])  // src[i] karakteri null karakter ('\0') olmadığı sürece döngü devam eder
    {
        dest[i] = src[i];  // src dizisindeki karakteri dest dizisine kopyala
        i++;  // Bir sonraki karaktere geçmek için index değerini artır
    }
    dest[i] = '\0';  // Kopyalama işlemi bittikten sonra dest dizisinin sonuna null karakter ekle
    return (dest);  // Kopyalanmış dest dizisinin başlangıç adresini döndür
}

/*
#include <stdio.h>
#include <string.h> 
int main()
{
    char src[] = "Zeren";  // Kopyalanacak kaynak dizi
    char dest[] = "Aydoğan";  // Kopyalama işlemi için hedef dizi
    
    printf("%s\n", ft_strcpy(dest, src));  // ft_strcpy fonksiyonunu çağır ve sonuç olarak kopyalanmış dest dizisini yazdır
    printf("%s", strcpy(dest, src));
}
*/
