/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeaydoga <zeaydoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:11:05 by zeaydoga          #+#    #+#             */
/*   Updated: 2024/09/20 16:23:25 by zeaydoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// Bu fonksiyon, parametre olarak aldığı dizideki büyük harfleri küçük harfe çevirir.
char *ft_strlowcase(char *str)
{
    int i;
    i = 0;

    // Dizinin sonuna kadar (yani '\0' karakterine ulaşana kadar) döngü devam eder.
    while (str[i] != '\0')
    {
        // Eğer karakter büyük harf ise (A-Z aralığında ise),
        // bu karakteri küçük harfe çevirmek için 32 ekliyoruz (ASCII farkı).
        if (str[i] >= 65 && str[i] <= 90)  // ASCII'de 'A' = 65 ve 'Z' = 90
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return (str);
}
/*
int main()
{
    char str[] = "HELLO PISCINE!";
    printf("%s\n", ft_strlowcase(str));  // Çıktı: "hello piscine!"
}
*/