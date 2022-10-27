/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:34:02 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/27 20:07:08 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	char	*temp;
	int	j;

	j = 1;
	i = 1;
	while (j < argc - 1)
	{
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temp = &argv[i];
				&argv[i] = &argv[i + 1];
				&argv[i + 1] = temp;
			}
			i++;
		}
		j++;
	}
	i = 1;
	while (argv[i])
	{
		argv[i]+='0';
		write(1, &argv[i], 1);
		i++;
	}
	return (0);
}
