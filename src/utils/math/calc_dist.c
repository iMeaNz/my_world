/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-guillaume.hein
** File description:
** calc_dist.c
*/

#include "myworld.h"
#include <math.h>

float calc_dist(sfVector2f point1, sfVector2f point2)
{
    float x1 = point1.x;
    float y1 = point1.y;
    float x2 = point2.x;
    float y2 = point2.y;
    float dist = sqrt((pow(x2 - x1, 2)) + (pow(y2 - y1, 2)));
    return dist;
}

float calc_newz(data_t *data, int i, int j)
{
    int x = data->map.tiles[i][j].coord_3d.x;
    int y = data->map.tiles[i][j].coord_3d.y;
    float angle_y = DEG_TO_RAD(25);
    return (sin(angle_y) * y + sin(angle_y) * x
        - data->pos_mouse.y / data->map.factors.y);
}
