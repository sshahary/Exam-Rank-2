/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:44:18 by sshahary          #+#    #+#             */
/*   Updated: 2023/11/02 18:42:36 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	lastword(char *s)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == ' ' && (s[i + 1] >= 33 && s[i + 1] <= 126))
			j = i + 1;
		i++;
	}
	while (s[j] >= 33 && s[j] <= 126)
	{
		write(1, &s[j], 1);
		j++;
	}
}

int	main(int ac, char *argv[])
{
	if (ac == 2)
	{
		lastword(argv[1]);
	}
	write(1, "\n", 1);
}
