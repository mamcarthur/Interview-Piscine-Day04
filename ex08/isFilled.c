/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isFilled.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcarthu <mmcarthu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 15:39:51 by mmcarthu          #+#    #+#             */
/*   Updated: 2019/09/02 15:42:16 by mmcarthu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int isFilled(unsigned int parkingRow)
{
    if (parkingRow == 0)
        return 1;
    if ((parkingRow & 1) == 0)
        return 0;
    else
        return isFilled(parkingRow >> 1);
}