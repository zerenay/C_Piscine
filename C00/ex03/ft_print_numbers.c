/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeaydoga <zeaydoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:02:57 by zeaydoga          #+#    #+#             */
/*   Updated: 2024/07/23 21:17:40 by zeaydoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)
{
    int digit;  // Rakamları temsil eden değişken
    digit = 48;  // '0' karakterinin ASCII kodu ile başla
    
    // Rakamları yazdıran döngü
    while (digit <= 57)  // '9' karakterinin ASCII koduna kadar devam et
    {
        write(1, &digit, 1);  // Mevcut rakamı ekrana yazdır
        digit++;  // Bir sonraki rakama geç
    }
}