/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   correctSong.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcarthu <mmcarthu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 18:53:36 by mmcarthu          #+#    #+#             */
/*   Updated: 2019/09/02 19:23:52 by mmcarthu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void    correctSong(struct s_bit *bit, int l, int row, int col, int dist)
{
    for (int i = row; i < bit->n && i < dist + row; i++)
        bit->arr[i] = pow(2, col);
}