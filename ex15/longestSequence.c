/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   longestSequence.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcarthu <mmcarthu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 17:01:35 by mmcarthu          #+#    #+#             */
/*   Updated: 2019/09/02 17:06:30 by mmcarthu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int longestSequence(unsigned int parkingRow)
{
    int i;

    for (i = 0; parkingRow; i++)
        parkingRow &= parkingRow << 1;
    return i;
}