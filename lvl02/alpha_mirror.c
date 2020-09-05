/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandalo <dmandalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 15:59:51 by dmandalo          #+#    #+#             */
/*   Updated: 2020/08/28 17:46:46 by dmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int		i;
	char	tmp;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			tmp = argv[1][i];
			if ('A' <= argv[1][i] && 'Z' >= argv[1][i])
				tmp = 'Z' - argv[1][i] + 'A';
			if ('a' <= argv[1][i] && 'z' >= argv[1][i])
			   	tmp = 'z' - argv[1][i] + 'a';
			write(1, &tmp, 1);
			i += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}
