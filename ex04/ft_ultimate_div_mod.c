/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marabari <marabari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 21:17:26 by marabari          #+#    #+#             */
/*   Updated: 2023/09/10 14:05:13 by marabari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a;
	y = *b;
	*a = x / y;
	*b = x % y;
}

/*int	main(void)
{
	int a;
	int b;

	a = 5;
	b = 2;

	printf("la valeur de a est %d et la valeur de b est %d\n", a,b);
	ft_ultimate_div_mod(&a, &b);
	printf("Apres calcul,a est %d et b est %d\n", a,b);
}*/
