/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeaydoga <zeaydoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:02:48 by zeaydoga          #+#    #+#             */
/*   Updated: 2024/07/23 21:18:53 by zeaydoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
    char ch;  // Karakterleri temsil eden değişken

    ch = 97;  // 'a' karakterinin ASCII kodu ile başla
    
    while (ch <= 122)  // 'z' karakterinin ASCII koduna kadar devam et
    {
        write(1, &ch, 1);  // Mevcut karakteri ekrana yazdır
        ch++;  // Bir sonraki karaktere geç
    }
}