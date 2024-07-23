/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeaydoga <zeaydoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:07:33 by zeaydoga          #+#    #+#             */
/*   Updated: 2024/07/23 21:25:15 by zeaydoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Bu fonksiyon, tek bir karakteri yazmak için kullanılır
void ft_putchar(char c)
{
    write(1, &c, 1);
}

// Bu fonksiyon, üç haneli tüm farklı kombinasyonları artan sırada yazdırır
void ft_print_comb(void)
{
    int h;  // yüzler basamağı
    int t;  // onlar basamağı
    int o;  // birler basamağı
    
    h = '0';  // yüzler basamağı '0' olarak başlar
    while (h <= '7')  // yüzler basamağı '7'ye kadar gider            /* en büyük kombinasyon 789 */
    {
        t = h + 1;  // onlar basamağı, yüzler basamağının bir fazlasıyla başlar
        while (t <= '8')  // onlar basamağı '8'e kadar gider
        {
            o = t + 1;  // birler basamağı, onlar basamağının bir fazlasıyla başlar
            while (o <= '9')  // birler basamağı '9'a kadar gider
            {
                ft_putchar(h);  // yüzler basamağını yazdırır
                ft_putchar(t);  // onlar basamağını yazdırır
                ft_putchar(o);  // birler basamağını yazdırır
                if (h != '7')  // son kombinasyondan sonra virgül ve boşluk yazdırmaz
                    write(1, ", ", 2);  // kombinasyonları virgül ve boşluk ile ayırır
                o++;  // birler basamağını bir artırır
            }
            t++;  // onlar basamağını bir artırır
        }
        h++;  // yüzler basamağını bir artırır
    }
}