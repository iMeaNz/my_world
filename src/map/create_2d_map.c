/*
** EPITECH PROJECT, 2021
** B-MUL-200-STG-2-1-myworld-guillaume.hein
** File description:
** create_2D_map.c
*/

#include <math.h>
#include <stdlib.h>
#include "myworld.h"

float calc_dist(sfVector2f point1, sfVector2f point2);
void translate_map_to_point(data_t *data);

sfVector2f project_iso_point(float x, float y, float z, sfVector2f factors)
{
    sfVector2f vector;
    float angle_x = DEG_TO_RAD(35);
    float angle_y = DEG_TO_RAD(25);
    vector.x = (cos(angle_x) * x - cos(angle_x) * y) * factors.x;
    vector.y = (sin(angle_y) * y + sin(angle_y) * x - z) * factors.y;
    return vector;
}

sfVector2f project_3D_to_2D(sfVector3f coords_3D, sfVector2f factors)
{
    float x  = coords_3D.x;
    float y = coords_3D.y;
    float z = coords_3D.z;
    sfVector2f coords_2D = project_iso_point(x, y, z, factors);
    return coords_2D;
}

sfVector2f calculate_center_point(data_t *data)
{
    float c_x = (data->map.tiles[0][0].coord_3d.x + data->map.tiles
        [data->map.size - 1][data->map.size - 1].coord_3d.x) / 2;
    float c_y = (data->map.tiles[data->map.size - 1][0].coord_3d.y
        + data->map.tiles[0][data->map.size - 1].coord_3d.y) / 2;
    return (project_iso_point(c_x, c_y, 0, data->map.factors));
}

void init_translation_point(data_t *data)
{
    sfVector2f center_point = calculate_center_point(data);
    data->pos_board_center = center_point;
    center_point.x = 930 - center_point.x;
    center_point.y = 510 - center_point.y;
    data->translation_point.x = center_point.x;
    data->translation_point.y = center_point.y;
}

void calculate_2d_tiles(data_t *data)
{
    for (int i = 0; i < data->map.size; ++i) {
        for (int j = 0; j < data->map.size; ++j) {
            data->map.tiles[i][j].coord_2d = project_3D_to_2D(data->map
                .tiles[i][j].coord_3d, data->map.factors);
            if (i >= data->map.size - 1 || j >= data->map.size - 1)
                continue;
            float moy = (fabs(data->map.tiles[i][j].coord_3d.z)
                + fabs(data->map.tiles[i + 1][j].coord_3d.z)
                + fabs(data->map.tiles[i][j + 1].coord_3d.z)
                + fabs(data->map.tiles[i + 1][j + 1].coord_3d.z)) / 4;
            float modif = MIN(moy * 10, 100);
            data->map.tiles[i][j].color = (sfColor){255 - modif, 255 - modif,
                255 - modif, data->map.tiles[i][j].color.a};
        }
    }
    translate_map_to_point(data);
}
