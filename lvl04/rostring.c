/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandalo <dmandalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 17:28:58 by dmandalo          #+#    #+#             */
/*   Updated: 2020/09/26 15:36:37 by dmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc , char *argv[])
{
	int i;
	int j;

    i = 0;
	if (argc == 2)
	{
		
			while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
			i++;
			j = i;
			while (argv[1][i])
			{
				while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
					i++;
				while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
					i++;
				while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t') && (argv[1][i -1] == ' ' || argv[1][i - 1] == '\t'))
				{
					while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
					{
						write (1, &argv[1][i], 1);
						i++;
					}
					write (1, " ", 1);
					i++;
				}
			}
			while (argv[1][j] && (argv[1][j] != ' ' && argv[1][j] != '\t'))
			{
				write (1, &argv[1][j], 1);
				j++;
			}
	}
	write (1, "\n", 1);
    return (0);
}
