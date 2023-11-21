/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:12:31 by sshahary          #+#    #+#             */
/*   Updated: 2023/11/14 12:47:08 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rotone(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'z')
			str[i] = 'a';
		else if (str[i] == 'Z')
			str[i] = 'A';
		else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 1;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char *argv[])
{
	if (ac == 2)
	{
		rotone(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
