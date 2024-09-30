/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeaydoga <zeaydoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:24:01 by zeaydoga          #+#    #+#             */
/*   Updated: 2024/09/20 17:47:50 by zeaydoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i = 0;

    // İlk karakteri kontrol et
    if (str[i] >= 97 && str[i] <= 122) 
    {
        str[i] = str[i] - 32;  // İlk harfi büyük yap
    }

    // Dizinin geri kalanını kontrol et
    while (str[i] != '\0') 
    {
        // Eğer bir kelimenin başındaysak
        if ((str[i] >= 97 && str[i] <= 122) && 
            (i == 0 || !(str[i - 1] >= 97 && str[i - 1] <= 122) &&
            !(str[i - 1] >= 65 && str[i - 1] <= 90) &&
            !(str[i - 1] >= 48 && str[i - 1] <= 57))) {
            str[i] = str[i] - 32;
        }
        // Eğer büyük harf bulursak ve kelimenin ortasında ise küçük yap
        else if (str[i] >= 65 && str[i] <= 90) {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return str;
}
/*
int main()
{
    char str[] = " hello, ecole42!";
    printf("%s\n", ft_strcapitalize(str));  // Çıktı: " Hello, Ecole42!"
}
*/