/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_data.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:10:29 by apires-d          #+#    #+#             */
/*   Updated: 2022/01/03 21:52:40 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	has_repeated(int *args);
static int	is_valid_int(char **args);
static int	is_number(char **args);
static int	check_and_parse(char **str_nums, int **arg_numbers);

int	parse_data(int argc, char *argv[], int **arg_numbers)
{
	char	**str_nums;
	int		i;

	i = 0;
	if (argc == 2)
	{
		str_nums = ft_split(argv[1], ' ');
		if (is_number(str_nums) == FALSE)
			return (FALSE);
		while (str_nums[i])
			i++;
		*arg_numbers = ft_calloc(i + 1, sizeof(int));
		if (*arg_numbers)
		{
			if (check_and_parse(str_nums, arg_numbers) == FALSE)
				return (FALSE);
		}
		else
			return (FALSE);
	}
	return (TRUE);
}

static int	check_and_parse(char **str_nums, int **arg_numbers)
{
	int	i;

	if (is_valid_int(str_nums) ==  FALSE)
		return (FALSE);
	i = -1;
	while (str_nums[++i])
		(*arg_numbers)[i] = ft_atoi(str_nums[i]);
	if (has_repeated(*arg_numbers) == TRUE)
		return (FALSE);
	return (TRUE);
}

static int	has_repeated(int *args)
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
