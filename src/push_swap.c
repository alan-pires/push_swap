/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:39:15 by apires-d          #+#    #+#             */
/*   Updated: 2021/11/28 22:48:52 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// int	main(int argc, char *argv[])
int	main()
{
	s_stacks	*st;

	st = NULL;
	st->l_stack_a = ft_clinkedlist_create();
	st->l_stack_b = ft_clinkedlist_create();

	ft_putstr_fd("\n\n stack a: \n", 1);
	ft_clinkedlist_add_first(st->l_stack_a, 5);
	ft_clinkedlist_add_last(st->l_stack_a, 8);
	ft_clinkdedlist_print(st->l_stack_a);
	ft_putstr_fd("\n\n stack b: \n", 1);
	ft_clinkdedlist_print(st->l_stack_b);

	// Treat the arguments sent by the terminal and make the necessary conversions

	return (0);
}