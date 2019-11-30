/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 07:52:25 by mathferr          #+#    #+#             */
/*   Updated: 2019/11/23 16:12:00 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main () {
	int a = 20;
	int b = 10;
	int div, mod;

	ft_div_mod(a, b, &div, &mod);
	printf("div=%d\nmod=%d", div, mod);

    return 0;
}