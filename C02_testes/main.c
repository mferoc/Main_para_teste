/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 16:03:59 by galves-d          #+#    #+#             */
/*   Updated: 2019/12/05 17:52:47 by gabrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main()
{
	char *src = "Frase de Teste";
	char dst[50]; 
	
	ft_strcpy(dst, src);
	printf("%s", dst);
}
