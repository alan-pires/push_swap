/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stacks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 21:51:53 by apires-d          #+#    #+#             */
/*   Updated: 2022/03/02 22:50:45 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	create_stacks(struct_main *s_main)
{
	STACK_A = clinkedlist_create();
	STACK_B = clinkedlist_create();
}

void	init_stack_A(struct_main *s_main)
{
	int	i;
	
	i = 0;
	while (s_main->arg_numbers[i])
	{
		clinkedlist_add_last(STACK_A, s_main->arg_numbers[i]);
		i++;
	}
	clinkdedlist_print(STACK_A);
}
