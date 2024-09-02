/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeaydoga <zeaydoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:38:02 by zeaydoga          #+#    #+#             */
/*   Updated: 2024/08/29 18:49:33 by zeaydoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Bu fonksiyon, iki integer değişkenin değerlerini yer değiştirir.
void ft_swap(int *a, int *b)
{
    int temp;     // Geçici bir değişken tanımlanır.
    temp = *a;    // temp, a'nın değerini alır.
    *a = *b;      // a'nın değeri, b'nin değeri ile değiştirilir.
    *b = temp;    // b'nin değeri, temp (yani eski a'nın değeri) ile değiştirilir.
}

int main()
{
    int a, b;     // a ve b isimli iki integer değişken tanımlanır.
    
    a = 12;       // a değişkenine 12 değeri atanır.
    b = 42;       // b değişkenine 42 değeri atanır.
    
    // Değerler yer değiştirilmeden önce a ve b'nin değerleri ekrana yazdırılır.
    printf("Before swap: a = %d, b = %d\n", a, b);
    
    // ft_swap fonksiyonu çağrılır ve a ile b'nin adresleri bu fonksiyona gönderilir.
    ft_swap(&a, &b);
    
    // Değerler yer değiştirildikten sonra a ve b'nin yeni değerleri ekrana yazdırılır.
    printf("After swap: a = %d, b = %d\n", a, b);
    
    return 0;     // Programın başarıyla sonlandığını belirten 0 değeri döndürülür.
}