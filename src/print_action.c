/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_action.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 08:11:09 by apires-d          #+#    #+#             */
/*   Updated: 2021/12/12 08:33:41 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	print_action(char *action)
{
	ft_putstr_fd("do ", 1);
	ft_putstr_fd(action, 1);
	ft_putstr_fd("\n", 1);
}
