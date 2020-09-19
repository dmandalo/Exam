/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandalo <dmandalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 17:14:44 by dmandalo          #+#    #+#             */
/*   Updated: 2020/09/19 17:15:03 by dmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int		function(const char *str, int tmp)
{
	int			i;

	while (tmp > 0 && (str[tmp] == ' ' || str[tmp] == '\t'))
		tmp--;
	i = 0;
	while (i <= tmp && str[tmp - i] != ' ' && str[tmp - i] != '\t')
		i++;
	write(1, str + tmp - i + 1, i);
	while (tmp > 0 && (str[tmp] == ' ' || str[tmp] == '\t'))
		tmp--;
	if (i < tmp)
		write(1, " ", 1);
	return (tmp - i);
}

int				main(int argc, char **argv)
{
	int			tmp;

	if (argc == 2)
	{
		tmp = 0;
		while (argv[1][tmp] != '\0')
			tmp++;
		tmp--;
		while (tmp > 0)
			tmp = function(argv[1], tmp);
	}
	write(1, "\n", 1);
	return (0);
}
