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

void	ft_ultimate_ft(int *********nbr);

int		main() {
	int x = 0;
	int *px = &x;
	int **ppx = &px;
	int ***pppx = &ppx;
	int ****ppppx = &pppx;
	int *****pppppx = &ppppx;
	int ******ppppppx = &pppppx;
	int *******pppppppx = &ppppppx;
	int ********ppppppppx = &pppppppx;
	int *********pppppppppx = &ppppppppx;
	
    ft_ultimate_ft(pppppppppx);
	printf("%d\n", x);
	
    return 0;
}