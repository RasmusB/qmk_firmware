/* Copyright 2022 RasmusB
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_all( /* Base */
    KC_1,   KC_2,   KC_3,   KC_4,       KC_5,       KC_6,
    KC_7,   KC_8,   KC_9,   KC_0,       KC_BSPC,    KC_GRAVE,
    KC_Q,   KC_W,   KC_E,   KC_R,       KC_T,       KC_Y,       KC_ESC,
    KC_U,   KC_I,   KC_O,   KC_P,       KC_L,       KC_ENT,             KC_LALT,
    KC_TAB, KC_A,   KC_S,   KC_D,       KC_F,       KC_G,                           KC_LCTL,
    KC_H,   KC_J,   KC_K,   KC_M,       KC_DOT,     KC_DOWN,                                    MO(1),
    KC_Z,   KC_X,   KC_C,   KC_V,       KC_B,       KC_N,                                               KC_RSFT,
            KC_SPC, KC_UP,  KC_COMM,    KC_LEFT,    KC_RIGHT,                                                       KC_LSFT),

    [1] = LAYOUT_all( /* FN */
    LSFT(KC_MINS),  KC_NUSH,    KC_BACKSLASH,   LSFT(KC_2),     LSFT(KC_COMM),  LSFT(KC_DOT),
    KC_LBRC,        KC_RBRC,    LSFT(KC_LBRC),  LSFT(KC_RBRC),  KC_NO,          KC_NO,
    KC_NO,          KC_NO,      RALT(KC_E),     KC_NO,          KC_NO,          KC_PAST,        KC_KB_POWER,
    KC_PSLS,        KC_PPLS,    KC_PMNS,        KC_PEQL,        KC_SCLN,        KC_NO,                          KC_NO,
    KC_CAPS,        KC_NO,      KC_NO,          KC_NO,          KC_NO,          KC_NO,                                  KC_LCTL,
    KC_NO,          KC_NO,      KC_NO,          KC_BRID,        KC_BRIU,        KC_PGDN,                                            KC_NO,
    KC_NO,          KC_NO,      KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                      KC_RSFT,
                    KC_NO,      KC_PGUP,        KC_F1,          KC_HOME,        KC_END,                                                                 KC_LSFT),
};
