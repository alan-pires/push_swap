/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_data_plus2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:35:36 by apires-d          #+#    #+#             */
/*   Updated: 2022/01/04 22:35:13 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	parse_data_plus2(int argc, char *argv[], int **arg_numbers, struct_main *s_main)
{
	int	i;

	i =  0;
	while (argv[++i])
	{
		if (is_number(argv[i]) == FALSE)
			return (FALSE);
	}
	//count_args(s_main, ); ???

	
}