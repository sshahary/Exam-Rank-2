/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:22:22 by sshahary          #+#    #+#             */
/*   Updated: 2023/10/31 13:30:46 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	space_words(char *s)
{
	int	i;
	int	b;

	i = 0;
	while (s[i] == ' ' || s[i] == '\t')
		i++;
	while (s && s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t')
			b = 1;
		if (!(s[i] == ' ' || s[i] == '\t'))
		{
			if (b)
				write(1, "   ", 3);
			b = 0;
			write(1, &s[i], 1);
		}
		i++;
	}
}

int	main(int ac, char *argv[])
{
	if (ac == 2)
	{
		space_words(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
