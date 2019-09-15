/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xor.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcarthu <mmcarthu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 14:48:30 by mmcarthu          #+#    #+#             */
/*   Updated: 2019/09/02 14:55:14 by mmcarthu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	toInt(char *bits)
{
    int x = 0;
    for (int i = 0; bits[i]; i++)
        x += (bits[i] - '0') * pow(2, 5 - i);
    return x;
}

char    *getXor(char *a, char *b)
{
	char *c;

	c = malloc(sizeof(char) * 7);
	c[6] = 0;
	for (int i = 5; i >= 0; i--)
		c[i] += ((a[i] - '0') ^ (b[i] - '0')) + '0';
	return c;
}