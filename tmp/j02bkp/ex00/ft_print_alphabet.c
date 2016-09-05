/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimao-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 12:12:02 by psimao-d          #+#    #+#             */
/*   Updated: 2016/08/31 12:16:17 by psimao-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_putchar(char c);

void ft_print_alphabet(void)
{
	int letra;
	letra = 'a';

	while (letra <= 'z')
	{
		ft_putchar(letra);
		letra++;
	}

}
