/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odalkili <odalkili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:20:12 by odalkili          #+#    #+#             */
/*   Updated: 2024/01/31 15:07:12 by odalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	digitseparator(int j, int n);
void	arraydigitchecker(char *a, int n);
void	printarray(char *a, int n);

void	ft_print_combn(int n)
{
	int	j;
	int	b;

	j = 0;
	b = 1;
	while (j++ < n)
		b *= 10;
	j = 0;
	while (j < b)
		digitseparator(j++, n);
}

void	digitseparator(int j, int n)
{
	char	a[10];
	int		p;

	p = n;
	while (p > 0)
	{
		a[p--] = j % 10 + '0';
		j /= 10;
	}
	arraydigitchecker(a, n);
}

void	arraydigitchecker(char *a, int n)
{
	int	x;

	x = 1;
	while (x < n && a[x] < a[x + 1])
		x++;
	if (x == n)
		printarray(a, n);
}

void	printarray(char *a, int n)
{
	int		x;

	x = 1;
	while (x <= n)
		write(1, &a[x++], 1);
	if (a[1] < '9' - n + 1)
		write(1, ", ", 2);
}
