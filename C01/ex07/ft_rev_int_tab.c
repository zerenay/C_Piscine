/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeaydoga <zeaydoga@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 11:42:03 by zeaydoga          #+#    #+#             */
/*   Updated: 2024/08/31 12:19:02 by zeaydoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Bu fonksiyon, bir integer dizisini tersine çevirir.
void ft_rev_int_tab(int *tab, int size)
{
    int i,  // Dizinin başından sonuna kadar ilerlemek için kullanılacak sayaç değişkeni ve değerleri değiştirmek için geçici bir değişken.
    swap;   // Değerleri değiştirmek için geçici bir değişken.

    i = 0;
    // Dizinin yarısına kadar ilerleyen bir döngü (çünkü bir dizi, kendi yarısı kadar olan kısmıyla ters çevrilebilir).
    while (i < (size / 2))
    {
        swap = tab[i];  // Dizinin başındaki eleman swap değişkenine alınır.
        tab[i] = tab[size - 1 - i];  // Dizinin sonundaki eleman baştaki elemanın yerine konur.
        tab[size - 1 - i] = swap;  // Baştaki eleman, sondaki elemanın yerine konur.
        i++;  // Sayaç artırılarak bir sonraki elemanlara geçilir.
    }
}

int main()
{
    int tab[6] = {0, 1, 2, 3, 4, 5};  // 6 elemanlı bir integer dizisi tanımlanır.
    int size = 6;  // Dizinin boyutu (eleman sayısı) belirlenir.

    ft_rev_int_tab(tab, size);  // Diziyi tersine çevirmek için ft_rev_int_tab fonksiyonu çağrılır.
    
    // Dizinin tersine çevrilmiş hali ekrana yazdırılır.
    printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]); 
    return 0;
}