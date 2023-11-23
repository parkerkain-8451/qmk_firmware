/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     XXXXXXX,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                         KC_J,    KC_L,    KC_U,    KC_Y,   KC_QUOT,  XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
XXXXXXX,MT(MOD_LGUI,KC_A),MT(MOD_LALT,KC_R),MT(MOD_LCTL,KC_S),MT(MOD_LSFT, KC_T),KC_G,KC_M,MT(MOD_RSFT,KC_N),MT(MOD_RCTL,KC_E),MT(MOD_RALT, KC_I),MT(MOD_RGUI,KC_O),XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                         KC_K,    KC_H, KC_COMM,  KC_DOT, KC_SLSH, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                             LT(6, KC_ESC),LT(5, KC_SPC),LT(4, KC_TAB),  LT(1,KC_ENT), LT(2, KC_BSPC), LT(3, KC_DEL)
                                      //`--------------------------'  `--------------------------'

  ),

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     XXXXXXX, KC_LCBR,  KC_AMPR, KC_ASTR, KC_LPRN,KC_RCBR,                     XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_COLN, KC_DLR, KC_PERC,KC_CIRC, KC_KP_PLUS,                  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_TILD, KC_EXLM, KC_AT,  KC_HASH, KC_PIPE,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LPRN, KC_RPRN,KC_UNDS,     KC_TRNS, XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     XXXXXXX, KC_LBRC,  KC_7,   KC_8,     KC_9,   KC_RBRC,                     XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_SCLN,   KC_4,   KC_5,    KC_6,   KC_EQL,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_GRAVE, KC_1,    KC_2,   KC_3,   KC_BSLS,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_DOT, KC_0,KC_MINS,     XXXXXXX, KC_TRNS, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     XXXXXXX, KC_F12,  KC_F7,   KC_F8,    KC_F9,   XXXXXXX,                     XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_F11,  KC_F4,  KC_F5,   KC_F6,   KC_SCRL,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_F10, KC_F1,  KC_F2,   KC_F3,   XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, KC_SPC, KC_TAB,     XXXXXXX, XXXXXXX, KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),

    [4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     XXXXXXX, XXXXXXX,XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX,                     KC_AGAIN, KC_PASTE, KC_COPY, KC_CUT,  KC_UNDO, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    XXXXXXX, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, XXXXXXX, KC_TRNS,     KC_BTN2, KC_BTN1, KC_BTN3
                                      //`--------------------------'  `--------------------------'
  ),

    [5] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     XXXXXXX, XXXXXXX,XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX,                     KC_AGAIN, KC_PASTE, KC_COPY, KC_CUT,  KC_UNDO, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX, XXXXXXX, XXXXXXX,                     KC_CAPS, KC_LEFT, KC_DOWN,   KC_UP, KC_RIGHT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    KC_INS, KC_HOME,  KC_PGDN, KC_PGUP, KC_END, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, KC_TRNS, XXXXXXX,     KC_ENT, KC_BSPC, KC_DEL
                                      //`--------------------------'  `--------------------------'
  ),

    [6] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     XXXXXXX, XXXXXXX,XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX,                     RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI,  RGB_VAI, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX, KC_LSFT, XXXXXXX,                     XXXXXXX, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    RGB_M_P, RGB_M_B,  RGB_M_R, RGB_M_G, RGB_M_K, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS, XXXXXXX, XXXXXXX,     KC_MSTP, KC_MPLY, KC_MUTE
                                      //`--------------------------'  `--------------------------'
  )
};
