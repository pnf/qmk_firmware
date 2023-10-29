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


// Left-hand home row mods
#define GUI_A LGUI_T(KC_A)
#define ALT_S LALT_T(KC_S)
#define SFT_D LSFT_T(KC_D)
#define CTL_F LCTL_T(KC_F)
#define NAV_G LT(3,KC_G)
#define MSE_Z LT(4,KC_Z)


// Right-hand home row mods
#define CTL_J RCTL_T(KC_J)
#define SFT_K RSFT_T(KC_K)
#define ALT_L LALT_T(KC_L)
#define GUI_SCLN RGUI_T(KC_SCLN)

#define XXX KC_NO


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // base layer
  // Home-row mods: GASC CSAG
  // NAV on hold-G
  // Mouse on hold-Z
    [0] = LAYOUT_ortho_4x12(
    KC_TAB,      KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,                           KC_Y,      KC_U,      KC_I,    KC_O,    KC_P,         KC_BSPC,
    KC_LALT,     GUI_A,     ALT_S,     SFT_D,     CTL_F,     NAV_G,                          KC_H,      CTL_J,     SFT_K,   ALT_L,   GUI_SCLN,     KC_QUOT,
    KC_LSFT,     MSE_Z,     KC_X,      KC_C,      KC_V,      KC_B,                           KC_N,      KC_M,      KC_COMM, KC_DOT,  KC_SLSH,      KC_RSFT,
    KC_LCTL,     KC_LGUI,   KC_LALT,   MO(3),     MO(1),     MO(4),                          KC_SPC,    MO(2),     KC_BSPC, KC_RALT, KC_RGUI,      KC_RCTL
    ),
  // Based on PlanckEZ symbol layer, with a bunch of mouse helpers on the left, instead of fn keys.  To be used in combination with actual pointing device.
  // Notably: F=left button, G=right button, V=ctrl-left-button, B=shift-left-button
    //    right-space = enter   raise=backspace
    //    H = Left-shift (mostly for intellij)
    //    N = ESC M=' ,=" .=| ?=backslash
    [1] = LAYOUT_ortho_4x12(
    S(KC_GRV),  S(KC_1),      S(KC_2),       S(KC_3),       S(KC_4),        S(KC_5),         S(KC_6),     S(KC_7),      S(KC_8),      S(KC_9),      S(KC_0),      KC_MINS,
    KC_ESC,     KC_MS_ACCEL1, KC_MS_WH_DOWN, KC_MS_WH_UP,    KC_MS_BTN1,    KC_MS_BTN2,      KC_LSFT,     S(KC_MINS),   S(KC_EQL),    S(KC_LBRC),   S(KC_RBRC),   S(KC_BSLS),
    KC_LSFT,    KC_NO,        KC_MS_WH_LEFT, KC_MS_WH_RIGHT, C(KC_MS_BTN1), S(KC_MS_BTN1),   KC_ESC,      KC_QUOT,      S(KC_QUOT),   S(KC_BSLS),   KC_BSLS,      KC_ENT,
    KC_LCTL,    KC_LGUI,      KC_LALT,       KC_NO,          KC_NO,         XXX,             KC_ENT,      KC_BSPC,      KC_NO,        KC_RALT,      KC_RGUI,      KC_RCTL
    ),
    // Based on PlanckEZ number layer, largely unchanged.
    // left-space=tab
    // M=` <=~
    // lower = caps word
    [2] = LAYOUT_ortho_4x12(
      KC_GRV,      KC_1,      KC_2,      KC_3,      KC_4,      KC_5,                          KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      S(KC_MINS),
      KC_ESC,      KC_F1,     KC_F2,     KC_F3,     KC_F4,     KC_F5,                         KC_F6,     KC_MINS,   KC_EQL,    KC_LBRC,   KC_RBRC,   KC_BSLS,
      CW_TOGG,     KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,                        KC_F12,    KC_GRV,    S(KC_GRV), KC_NO,     KC_NO,     KC_ENT,
      KC_LCTL,     KC_LGUI,   KC_LALT,   KC_NO,     KC_NO,     KC_TAB,                        XXX,       KC_NO,     KC_NO,     KC_RALT,   KC_RGUI,   KC_RCTL
    ),
  // Navigation, mostly cribbed from UHK, but with some mouse keys on left.  Note Boot on upper left
    // Randomly, caps-word on semi
    [3] = LAYOUT_ortho_4x12(
      QK_BOOT,    QK_BOOT,      KC_NO,          KC_NO,          KC_NO,         KC_NO,         KC_PGUP,      KC_HOME,      KC_UP,      KC_END,      KC_INS,      KC_DEL,
      KC_NO,      KC_MS_ACCEL0, KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_BTN1,    XXX,           KC_PGDN,      KC_LEFT,      KC_DOWN,    KC_RGHT,     CW_TOGG,     KC_NO,
      KC_LSFT,    KC_NO,        KC_MS_WH_LEFT,  KC_MS_WH_RIGHT, C(KC_MS_BTN1), S(KC_MS_BTN1), KC_NO,        KC_NO,        KC_NO,      KC_NO,       KC_NO,       KC_NO,
      KC_LCTL,    KC_NO,        KC_NO,          XXX,            KC_NO,         KC_NO,         KC_MS_BTN1,   KC_MS_BTN1,   KC_NO,      KC_MS_BTN2,  KC_NO,       TO(0)
#if DYNAMIC_KEYMAP_LAYER_COUNT == 6
    ),
  // Mouse layer, mostly cribbed from UHK
    [4] = LAYOUT_ortho_4x12(
     KC_NO,      KC_ACL2,      KC_NO ,         KC_NO,          KC_NO,         KC_NO,         KC_MS_WH_DOWN,   KC_MS_WH_LEFT,  KC_MS_UP,   KC_MS_WH_RIGHT,  KC_NO,      KC_NO,
     KC_NO,      KC_ACL0,      KC_MS_WH_DOWN, KC_MS_WH_UP,    KC_MS_BTN1,    KC_MS_BTN2,     KC_MS_WH_UP,     KC_MS_LEFT,     KC_MS_DOWN, KC_MS_RIGHT,     KC_NO,      KC_NO,
     KC_LSFT,    KC_NO,        KC_MS_WH_LEFT,  KC_MS_WH_RIGHT, C(KC_MS_BTN1), S(KC_MS_BTN1), KC_NO,           KC_NO,          KC_NO,      KC_NO,           KC_NO,      KC_NO,
     KC_LCTL,    KC_NO,        KC_NO,          KC_NO,          KC_NO,         KC_NO,         KC_MS_BTN1,      KC_MS_BTN2,     KC_NO,      KC_NO,           KC_NO,      KC_NO
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


const uint16_t PROGMEM df_combo[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};

const uint16_t PROGMEM er_combo[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM ui_combo[] = {KC_U, KC_I, COMBO_END};

const uint16_t PROGMEM cv_combo[] = {KC_C, KC_V,    COMBO_END};
const uint16_t PROGMEM mC_combo[] = {KC_M, KC_COMM, COMBO_END};

const uint16_t PROGMEM sd_combo[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM kl_combo[] = {KC_K, KC_L, COMBO_END};


const uint16_t PROGMEM fg_combo[] = {KC_F, KC_G, COMBO_END};

enum {
  COMBO_LCTL,
  COMBO_RCTL,
  COMBO_LGUI,
  COMBO_RGUI,
  COMBO_LALT1,
  COMBO_LALT2,
  COMBO_NAV
};


// map combo names to their keys and the key they trigger
combo_t key_combos[] = {
  [COMBO_LCTL] = COMBO(df_combo, KC_LCTL), // FD, JK  -> control
  [COMBO_RCTL] = COMBO(jk_combo, KC_RCTL),

  [COMBO_LGUI] = COMBO(er_combo, KC_LGUI),  // ER, UI -> GUI
  [COMBO_RGUI] = COMBO(ui_combo, KC_RGUI),

  [COMBO_LALT1] = COMBO(sd_combo, KC_LALT),  // SD, KL -> Alt
  [COMBO_LALT2] = COMBO(kl_combo, KC_LALT),  // (ralt is sometimes reassigned)
  
  [COMBO_NAV] = COMBO(fg_combo, MO(3))  // FG -> navigation
};
