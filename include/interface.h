/*
** EPITECH PROJECT, 2022
** myworld
** File description:
** interface -> TODO: add description
*/

#ifndef INTERFACE_H_
    #define INTERFACE_H_

    enum buttons_pos {
        BTN_BUCKET,
        BTN_PANNING,
        BTN_PRECISION,
        BTN_LEVEL,
        BTN_PICKER,
        BTN_GRASS,
        BTN_DIRT,
        BTN_SAND,
        BTN_STONE,
        BTN_PLUS,
        BTN_MINUS,
        NB_BUTTON
    };

    #define NB_TOOL BTN_PICKER

    enum background_pos {
        BACKGROUND_TOOLS,
        NB_BACKGROUND
    };

    enum mouse_state {
        IDLE,
        HOVERED,
        SELECTED
    };

    typedef struct {
        sfSprite *sprite;
        enum mouse_state state;
        bool is_visible;
        int (*on_click)();
    } button_t;

    typedef struct {
        sfSprite *sprite;
        enum mouse_state state;
        bool is_visible;
    } background_t;

    typedef struct {
        sfText *text;
        background_t background;
        bool is_visible;
    } tooltip_t;

    typedef struct {
        texture_data_t bucket;
        texture_data_t panning;
        texture_data_t precision;
        texture_data_t level;
        texture_data_t picker;
        texture_data_t tools_bg;
        texture_data_t ui_bg;
        texture_data_t grass_btn;
        texture_data_t dirt_btn;
        texture_data_t sand_btn;
        texture_data_t stone_btn;
        texture_data_t plus_btn;
        texture_data_t minus_btn;
    } ui_textures;

    typedef struct {
        button_t buttons[NB_BUTTON];
        background_t backgrounds[NB_BACKGROUND];
        background_t ui_bg;
        ui_textures textures;
        tooltip_t tooltip;
        sfText *map_size_text;
    } interface_t;

#endif /* INTERFACE_H_ */
