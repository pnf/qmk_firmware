/*
Copyright 2020 Danny Nguyen <danny@keeb.io>
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // base layer
  // Note two LALTs, one to left of A
    [0] = LAYOUT_ortho_4x12(
    KC_TAB,      KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,             KC_Y,      KC_U,      KC_I,    KC_O,    KC_P,         KC_BSPC,
    KC_LALT,     KC_A,      KC_S,      KC_D,      KC_F,      KC_G,             KC_H,      KC_J,      KC_K,    KC_L,    KC_SCLN,      KC_QUOT,
    KC_LSFT,     KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,             KC_N,      KC_M,      KC_COMM, KC_DOT,  KC_SLSH,      KC_RSFT,
    KC_LCTL,     KC_LGUI,   KC_LALT,   MO(3),     MO(1),     MO(4),            KC_SPC,    MO(2),     MO(4),   KC_RALT, KC_RGUI,      KC_RCTL
    ),
  // Based on PlanckEZ symbol layer, with a bunch of mouse helpers on the left, instead of fn keys.  To be used in combination with actual pointing device.
  // Notably: F=left button, G=right button, V=ctrl-left-button, B=shift-left-button
    [1] = LAYOUT_ortho_4x12(
    S(KC_GRV),  S(KC_1),      S(KC_2),       S(KC_3),       S(KC_4),        S(KC_5),       S(KC_6),     S(KC_7),      S(KC_8),      S(KC_9),      S(KC_0),      KC_MINS,
    KC_ESC,     KC_MS_ACCEL1, KC_MS_WH_DOWN, KC_MS_WH_UP,    KC_MS_BTN1,    KC_MS_BTN2,    _______,     S(KC_MINS),   S(KC_EQL),    S(KC_LBRC),   S(KC_RBRC),   S(KC_BSLS),
    KC_LSFT,    KC_NO,        KC_MS_WH_LEFT, KC_MS_WH_RIGHT, C(KC_MS_BTN1), S(KC_MS_BTN1), KC_NO,       KC_NO,        KC_NO,        KC_DEL,       KC_INS,       KC_ENT,
    KC_LCTL,    KC_LGUI,      KC_LALT,       KC_NO,          KC_NO,         KC_ENT,        KC_ENT,      KC_NO,        KC_NO,        KC_RALT,      KC_RGUI,      KC_RCTL
    ),
  // Based on PlanckEZ number layer, largely unchanged.
  // Notable: caps-word-toggle to left of Z, ESC to left of A    
    [2] = LAYOUT_ortho_4x12(
      KC_GRV,      KC_1,      KC_2,      KC_3,      KC_4,      KC_5,        KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      S(KC_MINS),
      KC_ESC,      KC_F1,     KC_F2,     KC_F3,     KC_F4,     KC_F5,       KC_F6,     KC_MINS,   KC_EQL,    KC_LBRC,   KC_RBRC,   KC_BSLS,
      CW_TOGG,     KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,      KC_F12,    KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_ENT,
      KC_LCTL,     KC_LGUI,   KC_LALT,   KC_NO,     KC_NO,     KC_SPC,      KC_SPC,    KC_NO,     KC_NO,     KC_RALT,   KC_RGUI,   KC_RCTL
    ),
  // Navigation, mostly cribbed from UHK, but with some mouse keys on left.  Note Boot on upper left
    [3] = LAYOUT_ortho_4x12(
      QK_BOOT,    KC_NO,        KC_NO,          KC_NO,          KC_NO,         KC_NO,         KC_PGUP,      KC_HOME,      KC_UP,      KC_END,      KC_INS,      KC_DEL,
      KC_NO,      KC_MS_ACCEL0, KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_BTN1,    KC_MS_BTN2,    KC_PGDN,      KC_LEFT,      KC_DOWN,    KC_RGHT,     KC_NO,       KC_NO,
      KC_LSFT,    KC_NO,        KC_MS_WH_LEFT,  KC_MS_WH_RIGHT, C(KC_MS_BTN1), S(KC_MS_BTN1), KC_NO,        KC_NO,        KC_NO,      KC_NO,       KC_NO,       KC_NO,
      KC_LCTL,    KC_NO,        KC_NO,          KC_NO,          KC_NO,         KC_NO,         KC_MS_BTN1,   KC_MS_BTN1,   KC_NO,      KC_MS_BTN2,  KC_NO,       TO(0)
#if DYNAMIC_KEYMAP_LAYER_COUNT == 6
    ),
  // Moue layer, mostly cribbed from UHK
    [4] = LAYOUT_ortho_4x12(
     KC_NO,      KC_NO,        KC_NO ,         KC_NO,          KC_NO,         KC_NO,         KC_MS_WH_DOWN,   KC_MS_WH_LEFT,  KC_MS_UP,   KC_MS_WH_RIGHT,  KC_NO,      KC_NO,
     KC_NO,      KC_MS_ACCEL0, KC_MS_WH_DOWN, KC_MS_WH_UP,    KC_MS_BTN1,    KC_MS_BTN2,     KC_MS_WH_UP,     KC_MS_LEFT,     KC_MS_DOWN, KC_MS_RIGHT,     KC_NO,      KC_NO,
     KC_LSFT,    KC_NO,        KC_MS_WH_LEFT,  KC_MS_WH_RIGHT, C(KC_MS_BTN1), S(KC_MS_BTN1), KC_NO,           KC_NO,          KC_NO,      KC_NO,           KC_NO,      KC_NO,
     KC_LCTL,    KC_NO,        KC_NO,          KC_NO,          KC_NO,         KC_NO,         KC_ENT,          KC_NO,          KC_NO,      KC_NO,           KC_NO,      KC_NO
    ),
  // currently unmapped layer
    [5] = LAYOUT_ortho_4x12(
        _______, QK_BOOT, DB_TOGG, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
#endif
    )
};
