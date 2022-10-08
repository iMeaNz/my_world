/*
** EPITECH PROJECT, 2022
** myworld
** File description:
** backgrounds
*/

#include "myworld.h"
#include "interface.h"
#include "my.h"

static background_t create_background(float pos_x, float pos_y,
sfTexture *texture)
{
    background_t background;
    background.sprite = sfSprite_create();
    sfSprite_setTexture(background.sprite, texture, true);
    sfSprite_setPosition(background.sprite, (sfVector2f){pos_x, pos_y});
    background.is_visible = true;
    background.state = IDLE;
    return background;
}

void load_backgrounds(data_t *data)
{
    data->interface.backgrounds[BACKGROUND_TOOLS] = create_background(0, 30,
        data->interface.textures.tools_bg.texture);
    data->interface.ui_bg = create_background(0, 0,
        data->interface.textures.ui_bg.texture);
}
