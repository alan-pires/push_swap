/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:39:18 by apires-d          #+#    #+#             */
/*   Updated: 2022/03/02 20:46:35 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../libft/libft.h"
#include <stdio.h>

typedef struct t_main
{
	c_list	*l_stack_a;
	c_list	*l_stack_b;
	int		num_qtt;
	int		*arg_numbers;
	
} struct_main;

#define TRUE 1
#define FALSE 0

#define STACK_A s_main->l_stack_a
#define STACK_B s_main->l_stack_b

#define INT_MAX 2147483647
#define INT_MIN -2147483648

void	create_stacks(struct_main *s_main);
void	print_action(char *action);
void	do_sa(struct_main *s_main);
void	do_sb(struct_main *s_main);
void	do_ss(struct_main *s_main);
void	do_ra(struct_main *s_main);
void	do_rb(struct_main *s_main);
void	do_rr(struct_main *s_main);
void	do_rra(struct_main *s_main);
void	do_pa(struct_main *s_main);
void	do_pb(struct_main *s_main);
int		parse_data(int argc, char *argv[], struct_main *s_main);
int		has_repeated(int *args);
int		is_valid_int(char **args);
int		is_number(char **args);
int		check_and_parse(char **str_nums, int **arg_numbers, int pos);
int		are_arguments_valid(char *argv, struct_main *s_main, int pos);
void	init_stack_A(struct_main *s_main);
void	print_error();

#endif