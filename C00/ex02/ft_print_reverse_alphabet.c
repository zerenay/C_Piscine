/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeaydoga <zeaydoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:02:53 by zeaydoga          #+#    #+#             */
/*   Updated: 2024/07/23 21:19:52 by zeaydoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void ft_print_reverse_alphabet(void)
{
    char ch;
    ch = 122;
    
    while (ch >= 97)
    {
        write(1, &ch, 1); 
        ch--; 
    }
}
