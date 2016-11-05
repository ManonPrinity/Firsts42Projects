/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmanon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 03:35:05 by nmanon            #+#    #+#             */
/*   Updated: 2016/11/05 03:35:13 by nmanon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int y;

	i = 1;
	y = 0;
	if (argc > 1)
	{
		while (i < argc != '\0')
		{
			while (argv[i][y] != '\0')
			{
				ft_putchar(argv[i][y]);
				y++;
			}
			ft_putchar('\n');
			y = 0;
			i++;
		}
	}
	return (0);
}
