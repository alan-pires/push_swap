/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:35:36 by apires-d          #+#    #+#             */
/*   Updated: 2022/01/04 18:39:06 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	count_args(struct_main *s_main, char **str_nums)
{
	int	i;

	i = 0;
	while (str_nums[i])
		i++;
	s_main->num_qtt = i;
}
