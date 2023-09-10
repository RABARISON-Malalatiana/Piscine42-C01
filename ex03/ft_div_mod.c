/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marabari <marabari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 08:45:20 by marabari          #+#    #+#             */
/*   Updated: 2023/09/10 14:05:57 by marabari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	div;
	int	mod;
	int	a;
	int	b;

	a = 10;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("a = %d / b =%d = %d \n", a, b, div);
	printf("a = %d modulo b = %d = %d", a, b, mod);
}*/
