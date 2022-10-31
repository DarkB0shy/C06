/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:17:24 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/31 17:15:10 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	get_w_length(char *str)
{
	int	wcounter;

	wcounter = 0;
	while (str[wcounter])
		wcounter++;
	return (wcounter);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] || s2[i]))
	{
	//	if (s1[i] < s2[i] || s1[i] < s2[i])i
		//	return (1);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	swap(char *fs, char *ss)
{
	char	*tmp;

	tmp = fs;
	fs = ss;
	ss = tmp;
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char *temp;

	i = 0;
	j = 1;
	k = 1;
	while (j < argc - 1)
	{
		
		while (k < argc - 1)
		{	
			if ((ft_strcmp(argv[j], argv[j+1]) > 0))
			{
				temp = argv[j];
				argv[j] = argv[k];
				argv[k] = temp;
				//swap(argv[j], argv[k]);
			}
			k++;
		}
		j++;
	}
	i = 1;
	while (i < argc)
	{
		write (1, argv[i], get_w_length(argv[i]));
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
