// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
// clang-format off

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      *
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │       │ 6 │ 7 │ 8 │ 9 │ 0 │ - │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │ [ │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │ ] │
      * └───┴───┴───┼───┼───┼───┤       ├───┼───┼───┼───┴───┴───┘
      *             │Alt│Spc│Gui│       │Ent│Bsp│Mod│
      *             └───┴───┴───┘       └───┴───┴───┘
      *
      *
      *
      */
    [0] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,            KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
        KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,            KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,            KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RBRC,
                                 KC_RALT, KC_SPC, KC_LGUI,            KC_ENT,  KC_BSPC, KC_RGHT,
                                                            KC_MPLY
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
};
#endif
