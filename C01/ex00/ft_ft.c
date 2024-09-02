/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeaydoga <zeaydoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:31:30 by zeaydoga          #+#    #+#             */
/*   Updated: 2024/07/24 16:46:42 by zeaydoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// ft_ft fonksiyonu, bir tamsayı pointerı alır ve bu pointerın işaret ettiği değeri 42 yapar
void ft_ft(int *nbr)
{
    *nbr = 42; // Pointerın işaret ettiği adresteki değeri 42 yap
}


int main()
{
    int *nbr; // Bir tamsayı pointerı tanımla
    int number; // Bir tamsayı değişkeni tanımla

    nbr = &number; // Pointerı, 'number' değişkeninin adresine ata
    ft_ft(nbr); // ft_ft fonksiyonunu çağır ve 'nbr' pointerını argüman olarak geç
    printf("%d", number); // 'number' değişkeninin değerini ekrana yazdır
}