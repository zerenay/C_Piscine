/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeaydoga <zeaydoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:19:23 by zeaydoga          #+#    #+#             */
/*   Updated: 2024/08/31 12:23:56 by zeaydoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Bu fonksiyon, bir integer dizisini küçükten büyüğe doğru sıralar.
void ft_sort_int_tab(int *tab, int size)
{
    int i;       // Dizinin elemanları arasında geçiş yapmak için kullanılan sayaç değişkeni.
    int swap;    // Değerleri değiştirmek için kullanılan geçici bir değişken.

    // Dizinin tamamını sıralayana kadar dış döngü devam eder.
    while (size >= 0)
    {
        i = 0;
        
        // Bu iç döngü, dizideki elemanları sıralamak için kullanılır.
        // Her bir elemanı bir sonraki elemanla karşılaştırır ve gerekiyorsa yer değiştirir.
        while (i < size - 1)
        {
            // Eğer mevcut eleman, bir sonraki elemandan büyükse, yer değiştir.
            if (tab[i] > tab[i + 1])
            {
                swap = tab[i];             // Mevcut eleman geçici değişkene alınır.
                tab[i] = tab[i + 1];       // Bir sonraki eleman mevcut elemanın yerine konur.
                tab[i + 1] = swap;         // Geçici değişkende tutulan değer bir sonraki elemanın yerine konur.
            }
            i++;  // Dizinin bir sonraki elemanına geçilir.
        }
        
        // Dizinin sonundaki en büyük eleman doğru pozisyona yerleşmiş olur,
        // bu nedenle sıralamanın geri kalanında dikkate alınmaz.
        size--;
    }
}

int main()
{
    int tab[6] = {12, 42, 24, 11, 4, 26};  // Sıralanacak olan 6 elemanlı bir integer dizisi.
    int size = 6;  // Dizinin boyutu (eleman sayısı) belirlenir.

    ft_sort_int_tab(tab, size);  // Diziyi sıralamak için ft_sort_int_tab fonksiyonu çağrılır.
    
    // Sıralanmış dizinin elemanları ekrana yazdırılır.
    printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]); 
    
    return 0;
}