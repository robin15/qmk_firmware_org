/* Copyright 2019 Naoto Takai
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
    _BASE,
    _UPPER,
    _LOWER,
    _MOUSE,
};

#define KC_UPPER MO(_UPPER)
#define KC_LOWER MO(_LOWER)

#define KC_TBSF   (LSFT_T(KC_TAB))
#define KC_ALAP   (LALT_T(KC_APP))
#define KC_JEQL   (LSFT(KC_MINS))
#define EISU      (LALT(KC_GRV))
#define ALT_EISU  (ALT_T(EISU))
#define UPPER_SPC (LT(MO(_UPPER),KC_SPC))
#define LOWER_SPC (LT(MO(_LOWER),KC_SPC))
#define LOWER_GUI (LT(MO(_LOWER),KC_LGUI))
#define CTRL_ESC  (CTL_T(KC_ESC))
#define KC_BCK    (LALT(KC_LEFT))
#define KC_FWD    (LALT(KC_RGHT))
#define CT_F2     (LCTL(KC_F2))
#define CT_F3     (LCTL(KC_F3))
#define CT_F4     (LCTL(KC_F4))
#define CT_F5     (LCTL(KC_F5))
#define CT_SFT_1  (LCTL(LSFT(KC_1)))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,     KC_7,    KC_8,    KC_9,   KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
    CTRL_ESC,KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,     KC_J,    KC_K,    KC_L,   KC_SCLN, KC_QUOT, KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,     KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, _______,
                      KC_LGUI, ALT_EISU, UPPER_SPC,       MO(_MOUSE),LOWER_SPC,  KC_PSCR, KC_RALT
  ),
  [_UPPER] = LAYOUT(
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_INS,  KC_DEL,
    KC_CAPS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,   KC_0,     _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                      _______, _______, _______,          _______, _______, _______, _______
  ),
  [_LOWER] = LAYOUT(
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_INS,  KC_DEL,
    KC_CAPS, _______, _______, _______, _______, _______, _______, KC_PGDOWN, KC_PGUP, KC_HOME, KC_END, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, KC_BCK,  KC_FWD,  _______, _______, _______, _______, _______,
                      _______, _______, _______,          _______, _______, _______, _______
  ),
  [_MOUSE] = LAYOUT(
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_INS,  KC_DEL,
    KC_CAPS, _______, _______, _______, _______, _______, _______, KC_MS_BTN1, KC_MS_BTN2, _______, _______, _______, _______, _______,
    _______, KC_MS_ACCEL0, KC_MS_ACCEL1, KC_MS_ACCEL2, _______, _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, KC_MS_BTN1, KC_MS_BTN2, _______, _______, _______, _______, _______,
                      _______, _______, _______,          _______, _______, _______, _______
  )

};
