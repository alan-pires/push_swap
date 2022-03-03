/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:39:15 by apires-d          #+#    #+#             */
/*   Updated: 2022/03/02 23:03:26 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>

static int	is_already_sorted(struct_main *s_main)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s_main->arg_numbers[i])
		i++;
	i--;
	while (j < i)
	{
		if (s_main->arg_numbers[j] > s_main->arg_numbers[j + 1])
			return(FALSE);
		j++;
	}
	return (TRUE);
}

int	main(int argc, char *argv[])
{
	struct_main	s_main;

	if (parse_data(argc, argv, &s_main) == FALSE)
	{
		print_error();
		return (EXIT_FAILURE);
	}
	if (is_already_sorted(&s_main) == TRUE)
	{
		printf("ja esta ordenado\n");
		return(EXIT_SUCCESS);
	}
	else
		printf("não esta ordenado\n");
	create_stacks(&s_main);
	init_stack_A(&s_main);

	// ft_putstr_fd("\n stack a: \n", 1);
	// clinkedlist_add_first(s_main.l_stack_a, 8);
	// clinkedlist_add_first(s_main.l_stack_a, 11);
	// clinkedlist_add_first(s_main.l_stack_a, 13);
	// clinkedlist_add_first(s_main.l_stack_b, 1);
	// clinkedlist_add_first(s_main.l_stack_b, 2);
	// clinkedlist_add_first(s_main.l_stack_b, 3);
	// clinkdedlist_print(s_main.l_stack_a);
	// clinkdedlist_print(s_main.l_stack_b);
	// ft_putstr_fd("\n ======================== \n", 1);
	
	// do_pb(&s_main);
	// clinkdedlist_print(s_main.l_stack_a);
	// clinkdedlist_print(s_main.l_stack_b);
	// do_pb(&s_main);
	// clinkdedlist_print(s_main.l_stack_a);
	// clinkdedlist_print(s_main.l_stack_b);
	// do_pb(&s_main);
	// clinkdedlist_print(s_main.l_stack_a);
	// clinkdedlist_print(s_main.l_stack_b);
	// do_pb(&s_main);
	// clinkdedlist_print(s_main.l_stack_a);
	// clinkdedlist_print(s_main.l_stack_b);
//==============================================================

	// do_rra(&s_main);
	// clinkdedlist_print(s_main.l_stack_a);
	// do_rra(&s_main);
	// clinkdedlist_print(s_main.l_stack_a);
	// do_rra(&s_main);
	// clinkdedlist_print(s_main.l_stack_a);

	// do_sa(&s_main);
	// ft_putstr_fd("\n ======================== \n", 1);


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
