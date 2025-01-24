/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 02:49:54 by msalangi          #+#    #+#             */
/*   Updated: 2025/01/22 03:00:45 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A') || (str[i] > 'z'))
		{
			return (0);
		}
		else if (((str[i] >= 'A') && (str[i] <= 'Z'))
			|| ((str[i] >= 'a') && (str[i] <= 'z')))
		{
			if (str[i + 1] == '\0')
			{
				return (1);
			}
		}
		else
		{
			return (1);
		}
		i++;
	}
	return (1);
}

// int main(void)
// {
// 	char *test = "me0w";
// 	ft_str_is_alpha(test);
// }