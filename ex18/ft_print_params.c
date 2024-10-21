/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:02:06 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/21 21:14:00 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	while (i <= ac - 1)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
}
