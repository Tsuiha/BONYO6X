/* Copyright 2025 Tsuiha
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum layer_names {
    keymap_0,
    keymap_1,
    keymap_2,
    keymap_3,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT(
  KC_ESC,     KC_1,    KC_2,    KC_3,  KC_4,   KC_5,  KC_6,    KC_7,    KC_8,    KC_9,   KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
  KC_TAB,     KC_Q,    KC_W,    KC_E,  KC_R,   KC_T,  KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
  A(KC_GRV),  KC_A,    KC_S,    KC_D,  KC_F,   KC_G,  KC_H,    KC_J,    KC_K,    KC_L,   KC_SCLN, KC_QUOT,      KC_ENT,
  KC_LSFT,    KC_Z,    KC_X,    KC_C,  KC_V,   KC_B,  KC_N,    KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_UP,        KC_RSFT,
  KC_LCTL,    KC_LGUI, KC_LALT, MO(2),    KC_SPC,     TG(1),   KC_RGUI, KC_RCTL,         KC_LEFT, KC_DOWN, KC_RGHT,  KC_F13
  ),
[1] = LAYOUT(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, KC_LEFT, KC_UP,   _______, _______, _______, KC_4,    KC_5,    KC_6,    _______, _______, _______, _______,
  _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, KC_1,    KC_2,    KC_3,    _______, _______,     _______,
  _______, _______, _______, _______, _______, _______, _______, KC_0,    _______, _______, _______, _______,     _______,
  _______, _______, _______, _______,      _______,     _______, _______, _______,          _______, _______, _______, _______
  ),
[2] = LAYOUT(
  KC_GRV,  KC_F1,   KC_F2,     KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
  _______, _______, G(KC_PSCR),KC_ENT,  MS_WHLU, _______, _______, _______, KC_UP,   KC_RGHT, _______, _______, _______, _______,
  _______, C(KC_Y), KC_PSCR,   KC_DEL,  MS_WHLD, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_MINS, KC_EQL,      _______,
  _______, C(KC_Z), C(KC_X),   C(KC_C), C(KC_V), KC_BSPC, _______, _______, _______, _______, _______, _______,     _______,
  _______, _______, _______,   _______,      _______,     _______, _______, _______,          _______, _______, _______, _______
  ),   
[3] = LAYOUT(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,     _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,     _______,
  _______, _______, _______, _______,      _______,     _______, _______, _______,          _______, _______, _______, _______
  ),
};

const rgblight_segment_t PROGMEM rgb_0[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, HSV_MAGENTA}
);
const rgblight_segment_t PROGMEM rgb_1[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, HSV_BLUE}
);
const rgblight_segment_t PROGMEM rgb_2[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, HSV_CYAN}
);
const rgblight_segment_t PROGMEM rgb_3[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, HSV_GREEN}
);

const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    rgb_0,
    rgb_1,
    rgb_2,
    rgb_3
);

void keyboard_post_init_user(void) {
    rgblight_layers = rgb_layers;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, keymap_0));
    rgblight_set_layer_state(1, layer_state_cmp(state, keymap_1));
    rgblight_set_layer_state(2, layer_state_cmp(state, keymap_2));
    rgblight_set_layer_state(3, layer_state_cmp(state, keymap_3));
    return state;
}