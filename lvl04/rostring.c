/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandalo <dmandalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 17:28:58 by dmandalo          #+#    #+#             */
/*   Updated: 2020/09/10 17:29:42 by dmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int		i;
	int		j;
	int		tmp;

	if (argc > 1)
	{
		i = 0;
		j = 0;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i += 1;
		tmp = i;
		while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
			i += 1;
		while (argv[1][i])
		{
			if (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t') \
				&& (argv[1][i - 1] == ' ' || argv[1][i - 1] == '\t'))
			{
				while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
					write(1, &argv[1][i++], 1);
				write(1, " ", 1);
			}
			i += 1;
		}
		while (argv[1][tmp] && (argv[1][tmp] != ' ' && argv[1][tmp] != '\t'))
			write(1, &argv[1][tmp++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
