/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_data.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:10:29 by apires-d          #+#    #+#             */
/*   Updated: 2022/01/01 13:25:51 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// static char	*clean_str(char *argv)
// {

// }

int	parse_data(int argc, char *argv[], int **arg_numbers)
{
	char	*str_aux;
	//*arg_numbers = ft_calloc(argc, sizeof(int));
	if (argc == 2)
	{
		str_aux = ft_strtrim(argv[1], "\"");
		str_aux = ft_strtrim_v2(str_aux, ' ');
		//  ft_putstr_fd(str_aux, 1);
		 (void) arg_numbers;
	}
	
	return (1);
}

