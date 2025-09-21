/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yekyaw <yekyaw@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 13:59:29 by yekyaw            #+#    #+#             */
/*   Updated: 2025/09/21 13:59:36 by yekyaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	print_with_padding(char *str, t_format f)
{
	int		len;
	int		count;
	char	pad_char;

	len = ft_strlen(str);
	count = 0;
	pad_char = (f.zero_pad && !f.left_align && f.precision < 0) ? '0' : ' ';
	if (!f.left_align && f.width > len)
		count += print_padding(f.width - len, pad_char);
	count += write(1, str, len);
	if (f.left_align && f.width > len)
		count += print_padding(f.width - len, ' ');
	return (count);
}
