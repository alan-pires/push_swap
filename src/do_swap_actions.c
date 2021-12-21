/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_swap_actions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 21:51:56 by apires-d          #+#    #+#             */
/*   Updated: 2021/12/21 19:44:13 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	do_sa(struct_main *s_main)
{
	c_list	*aux;

	aux = clinkedlist_create();
	clinkedlist_add_first(aux, clinkedlist_getval(STACK_A, 1));
	clinkedlist_remove(STACK_A, clinkedlist_getval(STACK_A, 1));
	clinkedlist_add_first(STACK_A, clinkedlist_getval(aux, 0));
	clinkedlist_destroy(&aux);
	print_action("sa");
}

void	do_sb(struct_main *s_main)
{
	c_list	*aux;

	aux = clinkedlist_create();
	clinkedlist_add_first(aux, clinkedlist_getval(STACK_B, 1));
	clinkedlist_remove(STACK_B, clinkedlist_getval(STACK_B, 1));
	clinkedlist_add_first(STACK_B, clinkedlist_getval(aux, 0));
	clinkedlist_destroy(&aux);
	print_action("sb");
}

void	do_ss(struct_main *s_main)
{
	do_sa(s_main);
	do_sb(s_main);
}
