/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 05:49:07 by gabrferr          #+#    #+#             */
/*   Updated: 2019/12/05 22:25:58 by gabrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main()
{
	char string_original[] = "FrAsE De TeStE 123";
	char string_alterada[] = "FrAsE De TeStE 123";
	ft_strcapitalize(string_alterada);
	printf("str_original: %s, str_alterada: %s", string_original, string_alterada);
}
