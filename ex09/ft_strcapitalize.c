/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odalkili <odalkili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:23:15 by odalkili          #+#    #+#             */
/*   Updated: 2024/02/06 17:47:38 by odalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalizenext;

	i = 0;
	capitalizenext = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && capitalizenext)
		{
			str[i] = str[i] - 32;
			capitalizenext = 0;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z') && !capitalizenext)
		{
			str[i] = str[i] + 32;
		}
		else
		{
			capitalizenext = ((str[i] < '0' || str[i] > '9') && (str[i] < 'A'
						|| str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'));
		}
		i++;
	}
	return (str);
}
