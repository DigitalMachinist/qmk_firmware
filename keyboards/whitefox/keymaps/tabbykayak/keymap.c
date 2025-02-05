/*
Copyright 2019 Jeff Rose <jrose@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include QMK_KEYBOARD_H

#define _____ KC_TRNS

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Default Layer
     * ,----------------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =| Backsp|Del |
     * |----------------------------------------------------------------|
     * | Tab |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |PScn|
     * |----------------------------------------------------------------|
     * |  Fn  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '| Enter  |Vup |
     * |----------------------------------------------------------------|
     * | Shift |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /| Shift |Up |Vdn |
     * |----------------------------------------------------------------|
     * |Ctrl|Alt |Win |         Space          |Alt|Fn|Ctrl|Lef|Dow|Righ|
     * `----------------------------------------------------------------'
     */
    [0] = LAYOUT( \
        KC_GESC, KC_1,    KC_2,    KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_NO,   KC_BSPC, KC_DEL, \
        KC_TAB,  KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_PSCR, \
        MO(1),   KC_A,    KC_S,    KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT,  KC_AUDIO_VOL_UP,\
        KC_LSFT, KC_NUBS, KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_AUDIO_VOL_DOWN,\
        KC_LCTL, KC_LALT, KC_LGUI,                         KC_SPC,                 KC_RALT, MO(1),   KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT \
    ),
    /* Layer 1: FN Layer
     * ,----------------------------------------------------------------.
     * | ` | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|       |    |
     * |----------------------------------------------------------------|
     * |     |   |Up |   |   |   |   |   |   |   |   |   |   |     |    |
     * |----------------------------------------------------------------|
     * |      |Lef|Dow|Righ|   |   |   |   |   |   |   |   |       |Play|
     * |----------------------------------------------------------------|
     * |       |   |   |   |   |   |   |   |   |   |   |       |Pup|Next|
     * |----------------------------------------------------------------|
     * |    |    |    |                       |    |    |  |Hom|Pdn|End |
     * `----------------------------------------------------------------'
     */
    [1] = LAYOUT( \
        KC_GRV, KC_F1,   KC_F2,   KC_F3,   KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,  _____,   _____,               RESET,\
        _____,  _____,   KC_UP,   _____,   _____, _____, _____, _____, _____, _____, _____,  _____,  _____,   _____,   _____,\
        _____,  KC_LEFT, KC_DOWN, KC_RGHT, _____, _____, _____, _____, _____, _____, _____,  _____,  _____,   _____,   KC_MEDIA_PLAY_PAUSE,\
        _____,  _____,   _____,   _____,   _____, _____, _____, _____, _____, _____, _____,  _____,  _____,   KC_PGUP, KC_MEDIA_NEXT_TRACK,\
        _____,  _____,   _____,                          _____,               _____, _____,  _____,  KC_HOME, KC_PGDN, KC_END  \
    )
};
