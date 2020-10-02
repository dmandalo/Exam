/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandalo <dmandalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 17:14:44 by dmandalo          #+#    #+#             */
/*   Updated: 2020/10/02 16:58:34 by dmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int function (char *j, int tmp)
{
	int i;

	i = 0;
	while (tmp > 0 && (j[tmp] == ' ' || j[tmp] == '\t'))
	tmp--;
	while (i <= tmp && j[tmp - i] != ' ' && j[tmp - i] != '\t')
	i++;
	write(1, j + tmp - i + 1, i);
	while (tmp > 0 && (j[tmp] == ' ' || j[tmp] == '\t'))
	tmp--;
	if (i < tmp)
	write(1, " ", 1);
	return (tmp - i);
}

int main (int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		i++;
		i--;
		while (i > 0)
		i = function(argv[1], i);
	}
	write(1, "\n", 1);
	return(0);
}
