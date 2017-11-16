/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 09:45:36 by lilam             #+#    #+#             */
/*   Updated: 2017/10/31 10:18:09 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int d_length;

	d_length = 0;
	while (dest[d_length])
		d_length++;
	i = 0;
	while (src[i])
	{
		if (d_length < size - 1)
			dest[d_length - 1] = src[i];
		i++;
		d_length++;
	}
	dest[d_length] = '\0';
	return (d_length);
}
