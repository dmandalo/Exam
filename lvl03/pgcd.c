/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandalo <dmandalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 17:10:59 by dmandalo          #+#    #+#             */
/*   Updated: 2020/09/07 18:45:40 by dmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char const *argv[])
{
	int		a;
	int		b;

	if (argc == 3)
	{
		if ((a = atoi(argv[1])) > 0 && (b = atoi(argv[2])) > 0)
		{
			while (a != b)
			{
				if (a > b)
					a -= b;
				else
					b -= a;
			}
			printf("%d", a);
		}
	}
	printf("\n");
	return (0);
}
