/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimao-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 12:49:06 by psimao-d          #+#    #+#             */
/*   Updated: 2016/08/31 13:01:55 by psimao-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_putchar(char c);

void ft_print_numbers (void)
{
	int numero;
	numero = 0;

	while(numero <= 9)
	{
		ft_putchar(numero);
		numero++;
	}
}

