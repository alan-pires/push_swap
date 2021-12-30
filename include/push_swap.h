/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:39:18 by apires-d          #+#    #+#             */
/*   Updated: 2021/12/30 15:13:37 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../libft/libft.h"

typedef struct t_main
{
	c_list	*l_stack_a;
	c_list	*l_stack_b;

} struct_main;

#define TRUE 1
#define FALSE 0

#define STACK_A s_main->l_stack_a
#define STACK_B s_main->l_stack_b

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
int		check_args(int argc, char *argv[]);

#endif