/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rotate_actions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 21:51:56 by apires-d          #+#    #+#             */
/*   Updated: 2021/12/21 19:57:25 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	do_ra(struct_main *s_main)
{
	clinkedlist_add_last(STACK_A, clinkedlist_getval(STACK_A, 0));
	clinkedlist_remove(STACK_A, clinkedlist_getval(STACK_A, 0));
	print_action("ra");
}

void	do_rb(struct_main *s_main)
{
	clinkedlist_add_last(STACK_B, clinkedlist_getval(STACK_B, 0));
	clinkedlist_remove(STACK_B, clinkedlist_getval(STACK_B, 0));
	print_action("rb");
}

void	do_rr(struct_main *s_main)
{
	do_ra(s_main);
	do_rb(s_main);
}
