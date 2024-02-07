/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odalkili <odalkili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 00:07:52 by odalkili          #+#    #+#             */
/*   Updated: 2024/02/08 00:11:46 by odalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (s1[i] == '\0' && n != 0)
		return (s1[i] - s2[i]);
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
			return (s1[i] - s2[i]);
	}
	if (s2[i] != '\0' && i < n)
		return (s1[i] - s2[i]);
	return (0);
}

