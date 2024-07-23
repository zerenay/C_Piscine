/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeaydoga <zeaydoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:02:24 by zeaydoga          #+#    #+#             */
/*   Updated: 2024/07/23 22:25:15 by zeaydoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h> // 'bool' veri tipini kullanabilmek için gerekli

// Bir karakteri ekrana yazdıran fonksiyon
void ft_putchar(char c)
{
    write(1, &c, 1);
}

// Bir kombinasyonu ekrana yazdıran fonksiyon
void print(int *tab, int n)
{
    int i;
    bool low;   /* bool veri tipi, bir değişkenin sadece iki değer alabileceği (true ve false) bir veri tipidir .
                Bu veri tipi, genellikle koşul ifadelerinde ve mantıksal işlemlerde kullanılır. */
    i = 1;
    low = 1;

    // 'tab' dizisinin sıralı olup olmadığını kontrol et
    while (i < n)
    {
        if (tab[i - 1] >= tab[i])
            low = 0;  // Dizinin sıralı olmadığını işaretle
        i++;
    }

    // Eğer dizideki sayılar sıralıysa:
    if (low)
    {
        i = 0;
        // Dizideki her basamağı ekrana yazdır
        while (i < n)
            ft_putchar(tab[i++] + 48);  // Sayıları karaktere dönüştür ve yazdır

        // Kombinasyonun sonrasında virgül ve boşluk ekle, ancak sadece son kombinasyon için değil
        if (tab[0] < (10 - n))
        {
            ft_putchar(',');  // Virgül ekle
            ft_putchar(' ');  // Boşluk ekle
        }
    }
}

// Belirli basamak sayısındaki kombinasyonları üretip ekrana yazdıran fonksiyon
void ft_print_combn(int n)
{
    int i;
    int tab[n];  // Kombinasyonları saklayacak dizi

    i = 0;
    // Diziyi başlangıçta tüm elemanları sıfır olarak ayarla
    while (i < n)
        tab[i++] = 0;

    // Kombinasyonları üret ve yazdır
    while (tab[0] <= (10 - n) && n >= 1 && n < 10)
    {
        print(tab, n);  // Mevcut kombinasyonu yazdır

        // Son basamağı bir artır
        tab[n - 1]++;
        i = n - 1;

        // Dizideki sayıları güncelle
        while (i && n > 1)
        {
            // Eğer bir basamak 9'dan büyükse:
            if (tab[i] > 9)
            {
                tab[i - 1]++;  // Bir üst basamağı artır
                tab[i] = 0;    // Geçersiz basamağı sıfırla
            }
            i--;
        }
    }
}