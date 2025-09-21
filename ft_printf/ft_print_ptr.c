/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yekyaw <yekyaw@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 19:30:55 by yekyaw            #+#    #+#             */
/*   Updated: 2025/09/21 13:42:21 by yekyaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long n)
{
	char	*base;
	int		len;

	base = "0123456789abcdef";
	len = 0;
	if (n >= 16)
		len += ft_putptr(n / 16);
	len += write(1, &base[n % 16], 1);
	return (len);
}
