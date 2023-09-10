/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marabari <marabari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:38:47 by marabari          #+#    #+#             */
/*   Updated: 2023/09/10 14:03:00 by marabari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 12;
	b = 56;
	__builtin_printf("avant a est %d et b est %d\n", a, b);
	ft_swap(&a, &b);
	printf("apres a est %d et b est %d", a, b);
	return (0);
}*/
