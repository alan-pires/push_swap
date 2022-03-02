/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_data.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:10:29 by apires-d          #+#    #+#             */
/*   Updated: 2022/03/02 17:14:38 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	are_arguments_valid(char *argv, struct_main *s_main, int pos)
{
	char	**str_nums;

	str_nums = ft_split(argv, ' ');
	if (is_number(str_nums) == FALSE)
		return (FALSE);
	if (check_and_parse(str_nums, &s_main->arg_numbers, pos) == FALSE)
		return (FALSE);
	return (TRUE);
}

int	parse_data(int argc, char *argv[], struct_main *s_main)
{
	int i;

	i = 0;
	if (!s_main->arg_numbers)
		return (FALSE);
	if (argc == 2)
	{
		if (are_arguments_valid(argv[1], s_main, i) == FALSE)
			return (FALSE);
	}
	else if (argc > 2)
	{
		while (argv[++i])
		{
			if (are_arguments_valid(argv[i], s_main, i - 1) == FALSE)
				return (FALSE);
		}
	}
	return (TRUE);
}

int	check_and_parse(char **str_nums, int **arg_numbers, int pos)
{
	int	i;

	if (is_valid_int(str_nums) ==  FALSE)
		return (FALSE);
	i = -1;
	while (str_nums[++i])
	{
		(*arg_numbers)[pos] = ft_atoi(str_nums[i]);
		// printf("str: %s\n", str_nums[i]);
		// printf("num: %d\n", (*arg_numbers)[pos]);
		pos++;
	}
	if (has_repeated(*arg_numbers) == TRUE)
		return (FALSE);
	return (TRUE);
}

int	has_repeated(int *args)
{
	int	i;
	int	j;

	i = 0;
	while (args[i])
	{
		j = i + 1;
		while (args[j])
		{
			if (args[j] == args[i])
				return (TRUE);
			j++;
		}
		i++;
	}
	return (FALSE);
}

int	is_valid_int(char **args)
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

int	is_number(char **args)
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
