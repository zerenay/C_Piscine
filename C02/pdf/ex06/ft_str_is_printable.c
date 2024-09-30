/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeaydoga <zeaydoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:19:17 by zeaydoga          #+#    #+#             */
/*   Updated: 2024/09/20 14:52:00 by zeaydoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str)
{
    // Eğer dizi boşsa (yani NULL karakteriyle başlıyorsa) 1 döndürülür.
    if (*str == '\0')
        return 1;

    // Dizinin her karakterini kontrol etmek için döngü başlatılır.
    while (*str)
    {
        // Eğer karakter ASCII tablosunda yazdırılabilir aralıkta değilse (32-126), 0 döndürülür.
        if (!(*str >= 32 && *str <= 126))
        {
            return 0;
        }
        str++;  // Sonraki karaktere geçilir.
    }
    // Eğer tüm karakterler yazdırılabilir ise 1 döndürülür.
    return 1;
}
/*
int main()
{
    printf("%d\n", ft_str_is_printable("Zeren1234!"));     // 1
    printf("%d\n", ft_str_is_printable("Hello\n\tWorld"));   // 0 (yazdırılamayan '\n' ve '\t' karakterleri var)
    printf("%d\n", ft_str_is_printable(""));               // 1 (boş dizi)
}
*/