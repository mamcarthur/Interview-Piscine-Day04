/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcarthu <mmcarthu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 01:20:29 by mmcarthu          #+#    #+#             */
/*   Updated: 2019/09/02 14:45:17 by mmcarthu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	toInt(char *bits)
{
    int x = 0;
    for (int i = 1; bits[i]; i++)
        x += (bits[i] - '0') * pow(2, 5 - i);
    if (bits[0] == '1')
        x -= 32;
    return x;
}

char    *rightShift(char *bin, int k)
{
    char *c;

    c = malloc(sizeof(char) * 7);
    c[6] = 0;
    memset(c, '0', 6);
    for (int i = k; i < 6; i++)
        c[i] = bin[i - k];
    return c;
}

char    *leftShift(char *bin, int k)
{
    char *c;

    c = malloc(sizeof(char) * 7);
    c[6] = 0;
    memset(c, '0', 6);
    for (int i = 5 - k; i >= 0; i--)
        c[i] = bin[i + k];
    return c;
}