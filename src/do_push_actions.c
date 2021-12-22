/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_push_actions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 21:51:56 by apires-d          #+#    #+#             */
/*   Updated: 2021/12/21 23:21:13 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	do_pa(struct_main *s_main)
{
	if (s_main->l_stack_b->size)
	{
		clinkedlist_add_first(STACK_A, clinkedlist_getval(STACK_B, 0));
		clinkedlist_remove(STACK_B, clinkedlist_getval(STACK_B, 0));
		print_action("pa");
	}
}

void	do_pb(struct_main *s_main)
{
	if (s_main->l_stack_a->size)
	{
		clinkedlist_add_first(STACK_B, clinkedlist_getval(STACK_A, 0));
		clinkedlist_remove(STACK_A, clinkedlist_getval(STACK_A, 0));
		print_action("pb");
	}
}
