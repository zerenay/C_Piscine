/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeaydoga <zeaydoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:03:01 by zeaydoga          #+#    #+#             */
/*   Updated: 2024/07/23 21:10:50 by zeaydoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n)
{
    if (n>=0) // Eğer sayı 0 ve 0dan büyükse "P" çıktısını verir
    {
        write(1, "P", 1);
    }
    else // Değilse "N" yazar
    {
        write(1, "N", 1);
    }
}