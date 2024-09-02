/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeaydoga <zeaydoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:22:03 by zeaydoga          #+#    #+#             */
/*   Updated: 2024/08/29 19:39:53 by zeaydoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Bu fonksiyon, bir karakter dizisini (string) ekrana yazdırır.
void ft_putstr(char *str)
{
    // Dizinin sonuna ('\0' karakterine) ulaşılana kadar döngü devam eder.
    while (*str != '\0')
    {
        // Mevcut karakter, standart çıkışa (ekrana) yazdırılır.
        write(1, str, 1);
        
        // Pointer bir sonraki karaktere geçer.
        str++;
    }   
}

int main()
{
    // "Hello, World!" mesajı ft_putstr fonksiyonu kullanılarak ekrana yazdırılır.
    ft_putstr("Hello World!");
    return 0;
}