/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandalo <dmandalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 17:41:13 by dmandalo          #+#    #+#             */
/*   Updated: 2020/09/11 16:15:34 by dmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int ascending(int a, int b) 
{
	return (a <= b);
}
void ft_swap(int *c, int *d)
{
	int temp;
	temp = *c;
	*c = *d;
	*d = temp;
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *begin = lst;
	t_list *future;
	while(lst)
	{
		future = lst->next;
		while (future)
		{
			if (!cmp(lst->data, future->data))
				ft_swap(&lst->data, &future->data);
			future = future->next;
		}
		lst = lst->next;
	}
	return (begin);
}
