/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odalkili <odalkili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 20:22:17 by odalkili          #+#    #+#             */
/*   Updated: 2024/02/08 02:41:58 by odalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	tmp;
	unsigned char	*cursor;
	char			*hex_symbols;

	hex_symbols = "0123456789abcdef";
	cursor = (unsigned char*)str;
	while (*cursor != '\0')
	{
		if (*cursor >= ' ' && *cursor <= '~')
			write(1, cursor, 1);
		else
		{
			ft_putchar('\\');
			tmp = *cursor / 16;
			ft_putchar(hex_symbols[tmp]);
			tmp = *cursor % 16;
			ft_putchar(hex_symbols[tmp]);
		}
		cursor++;
	}
}