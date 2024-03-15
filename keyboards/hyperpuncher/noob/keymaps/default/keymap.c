// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
// clang-format off

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐           ┌───┬───┬───┬───┬───┬───┐
      * │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │           │ 6 │ 7 │ 8 │ 9 │ 0 │ - │
      * ├───┼───┼───┼───┼───┼───┤           ├───┼───┼───┼───┼───┼───┤
      * │Tab│ Q │ W │ E │ R │ T │           │ Y │ U │ I │ O │ P │ [ │
      * ├───┼───┼───┼───┼───┼───┤           ├───┼───┼───┼───┼───┼───┤
      * │Sft│ A │ S │ D │ F │ G │           │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤ ┌───┬───┐ ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ Z │ X │ C │ V │ B │ │Vol│Vol│ │ N │ M │ , │ . │ / │ ] │
      * └───┴───┴───┼───┼───┼───┤ └─┬─┴─┬─┘ ├───┼───┼───┼───┴───┴───┘
      *             │Alt│Spc│Gui│   │Ply│   │Ent│Bsp│Lr1│
      *             └───┴───┴───┘   └───┘   └───┴───┴───┘
      */
    [0] = LAYOUT(
        QK_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,              KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,              KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
        KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,              KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,              KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RBRC,
                                   KC_LALT, KC_SPC,  KC_LGUI,           KC_ENT,  KC_BSPC, MO(1),
                                                               KC_MPLY
    ),
    [1] = LAYOUT(
        KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,             KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
        _______, _______, KC_BRID, KC_UP,   KC_BRIU, _______,           _______, KC_BRID, KC_UP,   KC_BRIU, _______, _______,
        _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______,           _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,
        _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, _______,           _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______,
                                   _______, _______, _______,           _______, _______, _______,
                                                               _______
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(KC_BRID, KC_BRIU) },
};
#endif

const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);
const key_override_t plus_key_override   = ko_make_basic(MOD_MASK_ALT, KC_MINS, KC_PLUS);

const key_override_t **key_overrides = (const key_override_t *[]){
    &delete_key_override,
    &plus_key_override,
    NULL
};
