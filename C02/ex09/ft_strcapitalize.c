/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeraydog <zeraydog@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 12:54:26 by zeraydog          #+#    #+#             */
/*   Updated: 2025/04/20 16:14:51 by zeraydog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && new_word)
		{
			str[i] -= 32;
			new_word = 0;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z') && !new_word)
			str[i] += 32;
		else if (!(str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i] >= 'A' && str[i] <= 'Z')
			&& !(str[i] >= '0' && str[i] <= '9'))
			new_word = 1;
		else
			new_word = 0;
		i++;
	}
	return (str);
}
