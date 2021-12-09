/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:39:15 by apires-d          #+#    #+#             */
/*   Updated: 2021/12/08 21:51:08 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// int	main(int argc, char *argv[])
int	main()
{
	struct_main	s_main;

	STACK_A = ft_clinkedlist_create();
	STACK_B = ft_clinkedlist_create();

	ft_putstr_fd("\n stack a: \n", 1);
	ft_clinkedlist_add_first(STACK_A, 5);
	ft_clinkedlist_add_last(STACK_A, 8);
	ft_clinkdedlist_print(STACK_A);
	ft_putstr_fd("\n stack b: \n", 1);
	ft_clinkdedlist_print(STACK_B);

	ft_clinkedlist_destroy(&STACK_A);
	ft_clinkedlist_destroy(&STACK_B);

	// Treat the arguments sent by the terminal and make the necessary conversions

	return (0);
}