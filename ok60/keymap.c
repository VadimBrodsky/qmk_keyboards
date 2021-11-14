#include QMK_KEYBOARD_H

#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /*
     * ,--------------------------------------------------------------------------------------------------------------------------------------.
     * | Esc    |   1    |   2    |   3    |   4    |   5    |   6    |   7    |   8    |   9    |   0    |    -   |     =  |   \    |   ~   |
     * |--------------------------------------------------------------------------------------------------------------------------------------'
     * | Tab    |   Q    |   W    |   E    |   R    |   T    |   Y    |   U    |   I    |   O    |   P    |  [     |    ]   |  Bksp  |
     * |-----------------------------------------------------------------------------------------------------------------------------'
     * | Ctl    |   A    |   S    |   D    |   F    |   G    |   H    |   J    |   K    |   L    |   ;    |    '   | Enter  |
     * |--------------------------------------------------------------------------------------------------------------------|
     * | Shift  |   Z    |   X    |   C    |   V    |   B    |   N    |   M    |   ,    |   .    |   /    | Shift  |   Fn   |
     * `--------------------------------------------------------------------------------------------------------------------'
     *          |  GUI   |  Alt   |                           Space                              |  GUI   |   Alt  |
     *          `--------------------------------------------------------------------------------------------------'
     */

    [0] = LAYOUT_60_hhkb(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS,  KC_TILDE,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSPO, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSPC, MO(1),
                 KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RGUI, KC_RALT
    ),

    /*
     * ,--------------------------------------------------------------------------------------------------------------------------------------.
     * | Grave  |   F1   |   F2   |   F3   |   F4   |   F5   |   F6   |   F7   |   F8   |   F9   |  F10   |   F11  |   F12  |        | Reset  |
     * |--------------------------------------------------------------------------------------------------------------------------------------'
     * |        | RToggle|  RMode |  Hue+  |  Hue-  |  Sat+  |  Sat-  |Bright+ |Bright- |        | RPlain |   Up   |        |        |
     * |-----------------------------------------------------------------------------------------------------------------------------'
     * |  Caps  |  Vol+  |  Vol-  |  Mute  |        |        |        |        |        |        |  Left  | Right  |        |
     * |--------------------------------------------------------------------------------------------------------------------|
     * |   {    |  Play  |  Next  |        |        |        |  Home  | PGDown |  PGUp  |  End   |  Down  |        |   }    |
     * `--------------------------------------------------------------------------------------------------------------------'
     *          |        |  GUI   |                                                              |        |        |
     *          `--------------------------------------------------------------------------------------------------'
     */

    [1] = LAYOUT_60_hhkb(
        KC_GRV,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, RESET,
        _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI,  RGB_SAD, RGB_VAI, RGB_VAD, _______, RGB_M_P,   KC_UP, _______, _______,
        KC_CAPS, KC_VOLD, KC_VOLU, KC_MUTE, _______, _______,  _______, _______, _______, _______, KC_LEFT, KC_RGHT, _______,
     S(KC_LBRC), KC_MPLY, KC_MNXT, _______, _______, _______,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_DOWN, S(KC_RBRC), _______,
                 KC_LGUI, _______,                             _______,                            _______, _______
    ),
};
