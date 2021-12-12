/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:39:15 by apires-d          #+#    #+#             */
/*   Updated: 2021/12/12 08:30:47 by apires-d         ###   ########.fr       */
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
	clinkdedlist_print(s_main.l_stack_a);
	clinkedlist_add_last(s_main.l_stack_a, 5);
	clinkdedlist_print(s_main.l_stack_a);

	do_sa(&s_main);
	clinkdedlist_print(s_main.l_stack_a);

	// printf("\nprimeira posiçao valor: %d\n", aux);


	// ft_clinkedlist_destroy(&STACK_A);
	// ft_clinkedlist_destroy(&STACK_B);

	// Treat the arguments sent by the terminal and make the necessary conversions

	return (0);
}