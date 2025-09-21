/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yekyaw <yekyaw@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 19:08:09 by yekyaw            #+#    #+#             */
/*   Updated: 2025/09/20 19:08:19 by yekyaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long n)
{
	char	c;
	int		len;

	len = 0;
	if (n < 0)
	{
		len += write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		len += ft_putnbr(n / 10);
	c = '0' + (n % 10);
	len += write(1, &c, 1);
	return (len);
}

int	ft_putunbr(unsigned int n)
{
	char	c;
	int		len;

	len = 0;
	if (n >= 10)
		len += ft_putunbr(n / 10);
	c = '0' + (n % 10);
	len += write(1, &c, 1);
	return (len);
}
