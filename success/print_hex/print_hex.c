/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:04:24 by sshahary          #+#    #+#             */
/*   Updated: 2023/11/14 13:33:14 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int i;
	int res;

	i = 0;
	while (str[i])
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}
void	print_hex(int	n)
{
	char hex[] = "0123456789abcdef";

	if (n >= 16)
		print_hex(n / 16);
	write(1, &hex[n % 16], 1);
}
int main(int ac, char *argv[])
{
	if (ac == 2)
	{
		print_hex(ft_atoi(argv[1]));
	}
	write(1, "\n", 1);
	return (0);
}
