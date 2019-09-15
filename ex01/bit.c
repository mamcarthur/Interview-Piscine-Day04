/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bit.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcarthu <mmcarthu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 01:08:20 by mmcarthu          #+#    #+#             */
/*   Updated: 2019/09/02 14:52:21 by mmcarthu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	toInt(char *bits)
{
    int x = 0;
    for (int i = 0; bits[i]; i++)
        x += (bits[i] - '0') * pow(2, 3 - i);
    return x;
}

char	*getAnd(char *a, char *b)
{
	char *c;

	c = malloc(sizeof(char) * 5);
	c[4] = 0;
	for (int i = 3; i >= 0; i--)
		c[i] += ((a[i] - '0') & (b[i] - '0')) + '0';
	return c;
}

char	*getOr(char *a, char *b)
{
	char *c;

	c = malloc(sizeof(char) * 5);
	c[4] = 0;
	for (int i = 3; i >= 0; i--)
		c[i] += ((a[i] - '0') | (b[i] - '0')) + '0';
	return c;
}