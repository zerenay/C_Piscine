/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeaydoga <zeaydoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:54:41 by zeaydoga          #+#    #+#             */
/*   Updated: 2024/09/20 16:23:15 by zeaydoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Bu fonksiyon, parametre olarak aldığı dizideki küçük harfleri büyük harfe çevirir.
char *ft_strupcase(char *str)
{
    int i;  // Dizi içindeki karakterlerin indeksini tutmak için bir sayaç tanımlıyoruz.
    i = 0;  // Sayaç başlangıçta 0 olarak ayarlanır.

    // Dizinin sonuna kadar (yani '\0' karakterine ulaşana kadar) döngü devam eder.
    while (str[i] != '\0')
    {
        // Eğer karakter küçük harf ise (a-z aralığında ise),
        // bu karakteri büyük harfe çevirmek için 32 çıkarıyoruz (ASCII farkı).
        if (str[i] >= 97 && str[i] <= 122)  // ASCII'de 'a' = 97 ve 'z' = 122
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    // Tüm karakterler dönüştürüldükten sonra, orijinal diziyi (değiştirilmiş haliyle) geri döndürüyoruz.
    return (str);
}
/*
int main()
{
    char str[] = "ecole42kocaeli";
    printf("%s\n", ft_strupcase(str));  // Çıktı: "ECOLE42KOCAELI"
}
*/