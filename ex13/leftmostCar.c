/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leftmostCar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcarthu <mmcarthu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 16:33:39 by mmcarthu          #+#    #+#             */
/*   Updated: 2019/09/02 16:41:38 by mmcarthu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int leftmostCar(unsigned int parkingRow)
{
    int k = ~(~0u >> 1);
    int i;
    for (i = 0; k >> i; i++)
        if ((k >> i) & parkingRow)
            return sizeof(unsigned int) * 8 - 1 - i;
    return -1;
}