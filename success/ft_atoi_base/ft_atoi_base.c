/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:36:27 by sshahary          #+#    #+#             */
/*   Updated: 2023/11/13 16:01:45 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int	basedigit(char c, int digit_in_base)
{
	int	max;

	if (digit_in_base <= 10)
		max = digit_in_base + '0';
	else
		max = digit_in_base - 10 + 'a';
	if (c >= '0' && c <= '9' && c <= max)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max)
		return (10 + c - 'a');
	else
		return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int sign = 1;
	int res;
	int digit;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\f' || str[i] == '\v' || str[i] == '\r')
		i++;
	if(str[i] == '-')
	{
		sign = -sign;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while ((digit = basedigit(ft_tolower(str[i]), str_base)) >= 0)
	{
		res = res * str_base;
		res = res + (digit * sign);
		i++;
	}
	return (res);
}
