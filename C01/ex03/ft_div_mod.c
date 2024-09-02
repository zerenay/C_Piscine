/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeaydoga <zeaydoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:50:42 by zeaydoga          #+#    #+#             */
/*   Updated: 2024/08/29 19:11:50 by zeaydoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Bu fonksiyon, a'yı b'ye böler ve sonuçlarını div ve mod değişkenlerine yazar.
// div, bölüm sonucunu, mod ise kalan sonucunu tutar.
void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;  // a'nın b'ye bölümü, div pointer'ının gösterdiği yere yazılır.
    *mod = a % b;  // a'nın b'ye bölümünden kalan, mod pointer'ının gösterdiği yere yazılır.
}

int main()
{
    int div, mod, a, b; // Bölüm (div) ve kalan (mod) değerlerini tutacak değişkenler tanımlanır.
    
    a = 504;  // a değişkenine 504 değeri atanır.
    b = 12;   // b değişkenine 12 değeri atanır.
    
    // ft_div_mod fonksiyonu, a ve b'yi alır ve bunların bölüm ve kalanlarını hesaplayarak
    // div ve mod değişkenlerine atar.
    ft_div_mod(a, b, &div, &mod);
    
    // Bölüm değeri ekrana yazdırılır.
    printf("div = %d\n", div);
    
    // Kalan değeri ekrana yazdırılır.
    printf("mod = %d\n", mod);
}

