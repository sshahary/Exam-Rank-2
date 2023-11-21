/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:20:29 by sshahary          #+#    #+#             */
/*   Updated: 2023/11/15 16:37:07 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	unsigned long int	i;

	i = 1;
	while (i <= n)
	{
		if (i == n)
			return (1);
		i *= 2;
	}
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
// 	int a = 100;
// 	printf("%d", is_power_of_2(a));
// }