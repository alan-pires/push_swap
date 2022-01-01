/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_data.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:10:29 by apires-d          #+#    #+#             */
/*   Updated: 2022/01/01 16:46:45 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

//números não inteiros, int max e min, caracteres não numéricos, números repetidos

// static char	*clean_str(char *argv)
// {

// }

int	parse_data(int argc, char *argv[], int *arg_numbers)
{
	char	*str_aux;
	char	**str_nums;
	int		i;

	i = 0;
	if (argc == 2)
	{
		str_aux = ft_strtrim(argv[1], "\"");
		str_nums = ft_split(str_aux, ' ');
		while(str_nums[i])
			i++;
		arg_numbers = ft_calloc(i, sizeof(int));
		if (arg_numbers)
		{
			i = -1;
			while (str_nums[++i])
				arg_numbers[i] = ft_atoi(str_nums[i]);
		}
		
	}
	return (1);
}

