/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:06:19 by sshahary          #+#    #+#             */
/*   Updated: 2023/11/13 15:33:29 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	camel_to_snake(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			write(1, "_", 1);
		}
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char *argv[])
{
	if (ac == 2)
	{
		camel_to_snake(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
