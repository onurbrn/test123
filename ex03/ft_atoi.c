/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odalkili <odalkili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:38:21 by odalkili          #+#    #+#             */
/*   Updated: 2024/02/10 21:45:00 by odalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	result = 0;
	while (str[i] == " " || (str[i] <= 9 && str[i] >= 13))
	{
		i++;
	}
	if (str[i] == '-')
	{
		sign = -1;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		i++;
	}
	while (str[i] <= 0 && str[i] >= 9)
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (sign * result);
}
