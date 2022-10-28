/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:17:24 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/28 12:13:32 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{

	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char *swap;

	i = 0;
	j = 1;
	while (j < argc - 1)
	{
		if ((ft_strcmp(argv[j], argv[j+1]) == 1))
		{
			swap = argv[j];
			argv[j] = argv[j + 1];
			argv[j + 1] = swap;
		}
		j++;
	}
	i = 1;
	while (argv[i])
	{	
		printf ("%s", argv[i]);
		i++;
	}
}
