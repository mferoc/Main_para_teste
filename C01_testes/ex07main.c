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

void	ft_rev_int_tab(int *tab, int size);

int main() {
	int vet[3] = {1,2,3};
    int size = 3; //vet size
	
    ft_rev_int_tab(vet, 3);

	int i;
    for(i = 0; i < size; i++) {
        printf("%d\n", vet[i]);
    }

    return 0;
}
