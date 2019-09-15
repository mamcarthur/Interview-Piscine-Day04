/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piano.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcarthu <mmcarthu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 18:21:56 by mmcarthu          #+#    #+#             */
/*   Updated: 2019/09/02 18:51:26 by mmcarthu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int **pianoDecompress(struct s_bit *bit, int l)
{
    int **decomp = malloc(sizeof(int *) * (bit->n));
    for (int i = 0; i < bit->n; i++)
        decomp[i] = malloc(sizeof(int) * l);
    for (int i = 0; i < bit->n; i++)
        for (int j = 0; j < l; j++)
            decomp[i][j] = (bit->arr[i] >> j) & 1;
    return decomp;
}