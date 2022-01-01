/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_data.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:10:29 by apires-d          #+#    #+#             */
/*   Updated: 2022/01/01 19:47:42 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

//checar números não inteiros

static int	has_repeated(char **args)
{
	int	i;
	int	j;

	i = -1;
	while (args[++i])
	{
		j = i + 1;
		while (args[j])
		{
			if (ft_strncmp(args[j], args[i], ft_strlen(args[i])) == 0)
				return(TRUE);
			j++;
		}
	}
	return (FALSE);
}

static int	is_valid_int(char **args)
{
	int			i;
	long long	num;

	i = -1;
	while (args[++i])
	{
		num = ft_atoll(args[i]);
		if (num < INT_MIN || num > INT_MAX)
			return (FALSE);
	}
	return (TRUE);
}

static int	is_number(char **args)
{
	int	i;
	int	j;
	
	i = 0;
	while (args[i])
	{
		j = 0;
		while(args[i][j])
		{
			if (ft_isdigit(args[i][j]) == 0 && args[i][j] != ' '
				&& args[i][j] != '-')
				return (FALSE);
			j++;
		}
		i++;
	}
	return (TRUE);
}

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
		if (is_number(str_nums) == FALSE || has_repeated(str_nums) == TRUE)
			return (FALSE);
		while (str_nums[i])
			i++;
		arg_numbers = ft_calloc(i, sizeof(int));
		if (arg_numbers)
		{
			i = -1;
			if (is_valid_int(str_nums) ==  FALSE)
				return (FALSE);
			while (str_nums[++i])
			{
				arg_numbers[i] = ft_atoi(str_nums[i]);
				printf("%d\n", arg_numbers[i]);
			}
		}
		else
			return (FALSE);
	}
	return (TRUE);
}

