/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeaydoga <zeaydoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:02:41 by zeaydoga          #+#    #+#             */
/*   Updated: 2024/07/23 21:19:21 by zeaydoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>  // 'write' fonksiyonu için gerekli

void ft_putchar(char c)
{
    write(1, &c, 1);  // Karakteri ekrana yazdır
}
