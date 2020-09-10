/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandalo <dmandalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 15:31:43 by dmandalo          #+#    #+#             */
/*   Updated: 2020/09/10 15:31:45 by dmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char *argv[])
{
	int		i;
	int		nbr;

	if (argc == 2)
	{
		i = 1;
		nbr = atoi(argv[1]);
		if (nbr == 1)
			printf("1");
		while (nbr >= ++i)
		{
			if (nbr % i == 0)
			{
				printf("%d", i);
				if (nbr == i)
					break ;
				printf("*");
				nbr /= i;
				i = 1;
			}
		}
	}
	printf("\n");
	return (0);
}
