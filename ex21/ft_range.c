/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:21:55 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/22 17:49:59 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	r_size;
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	r_size = max - min;
	range = (int *)malloc(r_size * sizeof(int));
	i = 0;
	while (i < r_size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
