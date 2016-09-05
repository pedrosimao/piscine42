/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimao-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 12:36:12 by psimao-d          #+#    #+#             */
/*   Updated: 2016/08/31 12:41:42 by psimao-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_putchar(char c);

void ft_print_reverse_alphabet(void)
{
	int letra;
	letra = 'z';

	while (letra >= 'a')
	{
		ft_putchar(letra);
		letra--;
	}

}
