/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:39:15 by apires-d          #+#    #+#             */
/*   Updated: 2021/12/21 20:27:23 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>

// int	main(int argc, char *argv[])
int	main()
{
	struct_main	s_main;

	create_stacks(&s_main);

	ft_putstr_fd("\n stack a: \n", 1);
	clinkedlist_add_first(s_main.l_stack_a, 8);
	clinkedlist_add_first(s_main.l_stack_a, 11);
	clinkedlist_add_first(s_main.l_stack_a, 13);
	clinkedlist_add_first(s_main.l_stack_a, 15);
	clinkedlist_add_first(s_main.l_stack_a, 20);
	clinkdedlist_print(s_main.l_stack_a);
	
	do_rra(&s_main);
	clinkdedlist_print(s_main.l_stack_a);
	do_rra(&s_main);
	clinkdedlist_print(s_main.l_stack_a);
	do_rra(&s_main);
	clinkdedlist_print(s_main.l_stack_a);

	// do_sa(&s_main);
	ft_putstr_fd("\n ======================== \n", 1);


	// ft_putstr_fd("\n stack b: \n", 1);
	// clinkedlist_add_first(s_main.l_stack_b, 21);
	// clinkedlist_add_first(s_main.l_stack_b, 22);
	// clinkedlist_add_first(s_main.l_stack_b, 23);
	// clinkedlist_add_first(s_main.l_stack_b, 24);
	// clinkedlist_add_first(s_main.l_stack_b, 25);
	// clinkdedlist_print(s_main.l_stack_b);
	// do_rb(&s_main);
	// clinkdedlist_print(s_main.l_stack_b);

	// do_sb(&s_main);
	// ft_putstr_fd("\n ======================== \n", 1);
	// do_ss(&s_main);
	// ft_putstr_fd("\n ======================== \n", 1);
	
	// clinkdedlist_print(s_main.l_stack_a);
	// clinkdedlist_print(s_main.l_stack_b);

	// ft_clinkedlist_destroy(&STACK_A);
	// ft_clinkedlist_destroy(&STACK_B);

	// Treat the arguments sent by the terminal and make the necessary conversions

	return (0);
}