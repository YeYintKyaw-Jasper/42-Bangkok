/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yekyaw <yekyaw@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 13:57:42 by yekyaw            #+#    #+#             */
/*   Updated: 2025/09/21 13:57:52 by yekyaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	init_format(t_format *f)
{
	f->width = 0;
	f->precision = -1;
	f->left_align = 0;
	f->zero_pad = 0;
	f->hash = 0;
	f->plus = 0;
	f->space = 0;
	f->spec = 0;
}

const char	*parse_format(const char *fmt, t_format *f)
{
	init_format(f);
	while (*fmt == '-' || *fmt == '0' || *fmt == '#' || *fmt == '+'
		|| *fmt == ' ')
	{
		if (*fmt == '-')
			f->left_align = 1;
		if (*fmt == '0')
			f->zero_pad = 1;
		if (*fmt == '#')
			f->hash = 1;
		if (*fmt == '+')
			f->plus = 1;
		if (*fmt == ' ')
			f->space = 1;
		fmt++;
	}
	while (*fmt >= '0' && *fmt <= '9')
	{
		f->width = f->width * 10 + (*fmt - '0');
		fmt++;
	}
	if (*fmt == '.')
	{
		f->precision = 0;
		fmt++;
		while (*fmt >= '0' && *fmt <= '9')
		{
			f->precision = f->precision * 10 + (*fmt - '0');
			fmt++;
		}
	}
	f->spec = *fmt;
	return (fmt);
}
