/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   carPosition.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcarthu <mmcarthu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 16:15:11 by mmcarthu          #+#    #+#             */
/*   Updated: 2019/09/02 16:17:17 by mmcarthu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int occupiedPlaces(unsigned int parkingRow)
{
    unsigned int count = 0;
	while (parkingRow)
	{
		parkingRow &= parkingRow - 1;
		count++;
	}
	return count;
}

int	carPosition(unsigned int parkingRow)
{
	if (occupiedPlaces(parkingRow) != 1)
		return -1;
	int i = 0;
	while (((parkingRow / (int)pow(2, i)) & 1) == 0)
		i++;
	return i;
}