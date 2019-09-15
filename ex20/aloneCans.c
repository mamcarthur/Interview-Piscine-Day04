/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aloneCans.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmcarthu <mmcarthu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 20:02:20 by mmcarthu          #+#    #+#             */
/*   Updated: 2019/09/02 20:12:01 by mmcarthu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void    aloneCans(int *arr, int n)
{
    int h = 0;
    int m = 0;
    int k = 0;
    int r;
    

    for (int i = 0; i < n; i++)
        k ^= arr[i];
    r = ffs(k);
    for (int i = 0; i < n; i++)
    {
        if (r & arr[i])
            h ^= arr[i];
        else
            m ^= arr[i];
    }
    printf("%d\n%d\n", h, m);
}