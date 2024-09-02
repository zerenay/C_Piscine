/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeaydoga <zeaydoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:40:18 by zeaydoga          #+#    #+#             */
/*   Updated: 2024/08/29 19:51:00 by zeaydoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

// Bu fonksiyon, verilen karakter dizisinin (string) uzunluğunu döndürür.
int ft_strlen(char *str)
{
    int size; // Stringin uzunluğunu tutacak bir değişken tanımlanır.

    size = 0; // size başlangıçta sıfıra ayarlanır.
    
    // Stringin sonuna (null karakterine) ulaşılana kadar döngü devam eder.
    while (str[size] != '\0')
    {
        size++; // Her bir karakter için size değişkeni artırılır.
    }
    
    return (size); // Stringin toplam uzunluğu döndürülür.
}

int main()
{
    char *s = "ZerenAydogan"; // s adında bir karakter dizisi (string) tanımlanır.
    
    // ft_strlen fonksiyonu kullanılarak s stringinin uzunluğu hesaplanır ve ekrana yazdırılır.
    printf("size = %d", ft_strlen(s));
    
    return 0; // Programın başarıyla sonlandığını belirten 0 değeri döndürülür.
}
