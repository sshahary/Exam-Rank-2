/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:18:27 by sshahary          #+#    #+#             */
/*   Updated: 2023/11/15 10:48:55 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c, int i)
{
	while (i > 0)
	{
		write(1, &c, 1);
		i--;
	}
}

void	repeat_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			putchar(str[i], str[i] + 1 - 'a');
		else if (str[i] >= 'A' && str[i] <= 'Z')
			putchar(str[i], str[i] + 1 - 'A');
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char *argv[])
{
	if (ac == 2)
	{
		repeat_alpha(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
