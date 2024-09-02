/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeaydoga <zeaydoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:15:39 by zeaydoga          #+#    #+#             */
/*   Updated: 2024/08/29 19:21:20 by zeaydoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Bu fonksiyon, a'yı b'ye böler ve sonucu a'ya, kalanı ise b'ye yazar.
void ft_ultimate_div_mod(int *a, int *b)
{
    int div, mod; // Geçici değişkenler, bölme ve kalan sonuçlarını tutar.
    
    div = *a / *b;  // *a'nın *b'ye bölümü sonucu div değişkenine atanır.
    mod = *a % *b;  // *a'nın *b'ye bölümünden kalan mod değişkenine atanır.
    
    *a = div;  // *a'nın değeri, div sonucu ile güncellenir.
    *b = mod;  // *b'nin değeri, mod sonucu ile güncellenir.
}

int main()
{
    int a, b; // a ve b isimli iki integer değişken tanımlanır.
    
    a = 42; // a değişkenine 42 değeri atanır.
    b = 2;  // b değişkenine 2 değeri atanır.
    
    // ft_ultimate_div_mod fonksiyonu, a ve b'nin adreslerini alır.
    // Bu fonksiyon a'nın yeni değerini bölüm, b'nin yeni değerini ise kalan olarak ayarlar.
    ft_ultimate_div_mod(&a, &b);
    
    // Güncellenen a ve b değerleri ekrana yazdırılır.
    printf("%d\n%d\n", a, b);
}