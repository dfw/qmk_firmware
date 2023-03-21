/* Copyright 2022 DFW <me@davidfweiss.com>
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
    [0] = LAYOUT_65_ansi(
        KC_ESC,         KC_1,    KC_2,         KC_3,         KC_4,             KC_5,       KC_6,       KC_7,         KC_8,         KC_9,         KC_0,    KC_MINS,       KC_EQL,  KC_BSPC, C(G(KC_Q)),
        KC_CAPS,        KC_Q,    KC_W,         KC_E,         KC_R,             KC_T,       KC_Y,       KC_U,         KC_I,         KC_O,         KC_P,    KC_LBRC,       KC_RBRC, KC_BSLS, KC_VOLU,
        KC_TAB,         KC_A,    LCTL_T(KC_S), LALT_T(KC_D), LGUI_T(KC_F),     LT(1,KC_G), LT(1,KC_H), RGUI_T(KC_J), LALT_T(KC_K), LCTL_T(KC_L), KC_SCLN, KC_QUOT,                KC_ENT,  KC_VOLD,
        OSM(MOD_LSFT),  KC_Z,    KC_X,         KC_C,         KC_V,             KC_B,       KC_N,       KC_M,         KC_COMM,      KC_DOT,       KC_SLSH, OSM(MOD_RSFT),          KC_UP,   KC_MUTE,
        KC_LCTL,        KC_LALT, KC_LGUI,                                                  KC_SPC,                   TT(1),        TT(2),        TT(3),                  KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT_65_ansi(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_DEL,  _______,
        _______, KC_HASH, KC_AT,   KC_LCBR, KC_RCBR, KC_PERC, KC_CIRC, KC_AMPR, KC_TILD, KC_UNDS, KC_ASTR, _______, _______, _______, _______,
        _______, KC_EXLM, KC_DLR,  KC_LPRN, KC_RPRN, KC_TRNS, KC_TRNS, KC_EQL,  KC_GRV,  KC_MINS, KC_COLN, KC_DQUO,          _______, _______,
        _______, _______, _______, KC_LBRC, KC_RBRC, KC_BSLS, KC_PIPE, KC_PLUS, KC_LT,   KC_GT,   KC_QUES, _______,          _______, _______,
        _______, _______, _______,                            _______,          _______, _______, _______,          _______, _______, _______
    ),
    [2] = LAYOUT_65_ansi(
        QK_GESC, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_HOME,
        _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, KC_PSCR, KC_SCRL, KC_PAUS, QK_BOOT, KC_PGUP,
        KC_CAPS, RGB_SPI, RGB_SPD, _______, _______, _______, _______, _______, _______, _______, _______, _______,          EE_CLR,  KC_PGDN,
        KC_LSFT, _______, _______, _______, _______, _______, NK_TOGG, _______, _______, _______, _______, _______,          KC_VOLU, KC_MUTE,
        _______, _______, _______,                            _______,          _______, _______, _______,          KC_MPRV, KC_VOLD, KC_MNXT
    ),
    [3] = LAYOUT_65_ansi(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
        _______, _______, _______,                            _______,          _______, _______, _______,          _______, _______, _______
    )
};
