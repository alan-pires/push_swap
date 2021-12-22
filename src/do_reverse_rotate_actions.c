/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_reverse_rotate_actions.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 21:51:56 by apires-d          #+#    #+#             */
/*   Updated: 2021/12/21 22:00:10 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	do_rra(struct_main *s_main)
{
	int		val_aux;
	c_list	*list_aux;

	list_aux = clinkedlist_create();
	val_aux = clinkedlist_getval(STACK_A, s_main->l_stack_a->size - 1);
	clinkedlist_add_first(list_aux, val_aux);
	val_aux = s_main->l_stack_a->size - 1;
	clinkedlist_remove(STACK_A, clinkedlist_getval(STACK_A, val_aux));
	clinkedlist_add_first(STACK_A, clinkedlist_getval(list_aux, 0));
	clinkedlist_destroy(&list_aux);
	print_action("rra");
}

void	do_rrb(struct_main *s_main)
{
	int		val_aux;
	c_list	*list_aux;

	list_aux = clinkedlist_create();
	val_aux = clinkedlist_getval(STACK_B, s_main->l_stack_b->size - 1);
	clinkedlist_add_first(list_aux, val_aux);
	val_aux = s_main->l_stack_a->size - 1;
	clinkedlist_remove(STACK_B, clinkedlist_getval(STACK_B, val_aux));
	clinkedlist_add_first(STACK_B, clinkedlist_getval(list_aux, 0));
	clinkedlist_destroy(&list_aux);
	print_action("rrb");
}

void	do_rrr(struct_main *s_main)
{
	do_rra(s_main);
	do_rra(s_main);
}
