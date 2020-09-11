/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandalo <dmandalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 15:31:43 by dmandalo          #+#    #+#             */
/*   Updated: 2020/09/11 15:21:53 by dmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char *argv[])
{
	int		i;
	int		tmp;

	if (argc == 2)
	{
		i = 1;
		tmp = atoi(argv[1]);
		if (tmp == 1)
			printf("1");
		while (tmp >= ++i)
		{
			if (tmp % i == 0)
			{
				printf("%d", i);
				if (tmp == i)
					break ;
				printf("*");
				tmp /= i;
				i = 1;
			}
		}
	}
	printf("\n");
	return (0);
}
