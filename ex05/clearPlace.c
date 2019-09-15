/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clearPlace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcarthu <mmcarthu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 15:17:28 by mmcarthu          #+#    #+#             */
/*   Updated: 2019/09/02 15:18:34 by mmcarthu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

unsigned int    clearPlace(unsigned int parkingRow, int pos)
{
    return (parkingRow ^ (1 << pos));
}