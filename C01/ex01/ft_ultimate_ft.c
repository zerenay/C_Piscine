/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeaydoga <zeaydoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:45:57 by zeaydoga          #+#    #+#             */
/*   Updated: 2024/08/29 16:59:19 by zeaydoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Bu fonksiyon, dokuz seviyeli bir pointer zincirinin en derinindeki integer değerini 42 olarak ayarlar.
void ft_ultimate_ft(int *********nbr)
{
    // *********nbr ifadesi, en derindeki integer'ı temsil eder ve bu değeri 42 yapar.
    *********nbr = 42;
}

int main()
{
    int n; // Bu, üzerinde işlem yapılacak integer değişkendir.
    
    // Pointer tanımlamaları
    int *p1, 
        **p2, 
        ***p3, 
        ****p4, 
        *****p5, 
        ******p6, 
        *******p7, 
        ********p8, 
        *********p9;
    
    // Pointerların birbiriyle ilişkilendirilmesi:
    p9 = &p8; // p9, p8'in adresini tutar.
    p8 = &p7; // p8, p7'nin adresini tutar.
    p7 = &p6; // p7, p6'nın adresini tutar.
    p6 = &p5; // p6, p5'in adresini tutar.
    p5 = &p4; // p5, p4'ün adresini tutar.
    p4 = &p3; // p4, p3'ün adresini tutar.
    p3 = &p2; // p3, p2'nin adresini tutar.
    p2 = &p1; // p2, p1'in adresini tutar.
    p1 = &n;  // p1, n'in adresini tutar.
    
    n = 12; // Başlangıçta n değişkenine 12 değeri atanır.
    
    // ft_ultimate_ft fonksiyonu, p9 pointer'ını alır ve n değişkenine (en derindeki integer) 42 değerini atar.
    ft_ultimate_ft(p9);
    
    // n'in yeni değeri ekrana yazdırılır. Bu değer 42 olmalıdır.
    printf("%d", n);
    
    return 0;
}