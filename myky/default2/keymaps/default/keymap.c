// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define BASE 0
#define LOWER 1
#define RAISE 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /* BASE
      * ┌───┬───┬───┬───┬───┬───┐               ┌───┬───┬───┬───┬───┬───┐
      * │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │               │ 6 │ 7 │ 8 │ 9 │ 0 │ - │
      * ├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
      * │Tab│ Q │ W │ E │ R │ T │               │ Y │ U │ I │ O │ P │ = │
      * ├───┼───┼───┼───┼───┼───┼───┐       ┌───├───┼───┼───┼───┼───┼───┤
      * │Cap│ A │ S │ D │ F │ G │Ins│       │ [ │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ V │ B │ ' │       │ ] │ N │ M │ , │ . │ / │ ¥ │
      * └───┴───┴───┴───┴───┴───┴───┘       └───└───┴───┴───┴───┴───┴───┘
      * ┌───────┐   ┌───┬───┐                       ┌───┬───┐   ┌───────┐
      * │ EISU  │   │Fn1│Win├───┐               ┌───┤Alt│Fn2│   │ KANA  │
      * └───────┘   └───┴───┤Ctl├───┐       ┌───┤Ent├───┴───┘   └───────┘
      *                     └───┤SAS│       │Bsp├───┘                             SandSはSFT_T(kc)で実装可
      *                         └───┘       └───┘
      */
    [BASE] = LAYOUT(
        KC_ESC,       KC_1, KC_2, KC_3, KC_4,    KC_5,                      KC_6,   KC_7,    KC_8,    KC_9,   KC_0,    KC_MINS,
        KC_TAB,       KC_Q, KC_W, KC_E, KC_R,    KC_T,                      KC_Y,   KC_U,    KC_I,    KC_O,   KC_P,    KC_EQL,
        KC_CAPS_LOCK, KC_A, KC_S, KC_D, KC_F,    KC_G,    KC_INS,  KC_LBRC, KC_H,   KC_J,    KC_K,    KC_L,   KC_SCLN, KC_QUOT,
        KC_LSFT,      KC_Z, KC_X, KC_C, KC_V,    KC_B,    KC_GRV,  KC_RBRC, KC_N,   KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_BSLS,
        KC_LCTL,            TT(LOWER),  KC_LGUI, KC_LCTL, KC_SPC,  KC_BSPC, KC_ENT, KC_RALT, TT(RAISE),                KC_LCTL
    ),
     /* BASE
      * ┌───┬───┬───┬───┬───┬───┐               ┌───┬───┬───┬───┬───┬───┐
      * │Esc│F1 │F2 │F3 │F4 │F5 │               │ / │ 7 │ 8 │ 9 │DEL│Bsp│
      * ├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
      * │Tab│F6 │F7 │F8 │F9 │F10│               │ * │ 4 │ 5 │ 6 │(  │ ) │
      * ├───┼───┼───┼───┼───┼───┼───┐       ┌───├───┼───┼───┼───┼───┼───┤
      * │Cap│F11│F12│ ↑ │   │HOM│Ins│       │   │ - │ 1 │ 2 │ 3 │VL+│BR+│
      * ├───┼───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┼───┤
      * │Sft│   │ ← │ ↓ │ → │END│Del│       │   │ + │ = │ 0 │ . │VL-│BR-│
      * └───┴───┴───┴───┴───┴───┴───┘       └───└───┴───┴───┴───┴───┴───┘
      * ┌───────┐   ┌───┬───┐                       ┌───┬───┐   ┌───────┐
      * │ EISU  │   │Fn1│Win├───┐               ┌───┤Alt│Fn2│   │ KANA  │
      * └───────┘   └───┴───┤Ctl├───┐       ┌───┤Ent├───┴───┘   └───────┘
      *                     └───┤SAS│       │Bsp├───┘
      *                         └───┘       └───┘
      */
    [LOWER] = LAYOUT(
        KC_ESC,       KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_PSLS, KC_P7,   KC_P8,   KC_P9,  KC_DEL,  KC_BSPC,
        KC_TAB,       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,                    KC_PAST, KC_P4,   KC_P5,   KC_P6,  KC_LPRN, KC_RPRN,
        KC_CAPS_LOCK, KC_F11,  KC_F12,  KC_UP,   XXXXXXX, KC_HOME, KC_INS,  XXXXXXX, KC_PMNS, KC_P1,   KC_P2,   KC_P3,  KC_VOLU, KC_BRIU,
        KC_LSFT,      XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  KC_DEL,  XXXXXXX, KC_PPLS, KC_PEQL, KC_COMM, KC_DOT, KC_VOLD, KC_BRID,
        _______,                       _______, _______, _______, _______,  _______, _______, _______, _______,                  _______
    ),
     /* RAISE
      * ┌───┬───┬───┬───┬───┬───┐               ┌───┬───┬───┬───┬───┬───┐
      * │Esc│   │   │   │   │   │               │MD←│MD→│   │   │   │   │
      * ├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
      * │Tab│   │   │   │   │   │               │VAD│VAI│   │   │   │   │
      * ├───┼───┼───┼───┼───┼───┼───┐       ┌───├───┼───┼───┼───┼───┼───┤
      * │Cap│PGU│   │ ↑ │   │HOM│Ins│       │   │HUD│HUI│   │   │   │   │
      * ├───┼───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┼───┤
      * │Sft│PGD│ ← │ ↓ │ → │END│Del│       │   │SAD│SAI│   │   │   │   │
      * └───┴───┴───┴───┴───┴───┴───┘       └───└───┴───┴───┴───┴───┴───┘
      * ┌───────┐   ┌───┬───┐                       ┌───┬───┐   ┌───────┐
      * │ EISU  │   │Fn1│Win├───┐               ┌───┤Alt│Fn2│   │ KANA  │
      * └───────┘   └───┴───┤Ctl├───┐       ┌───┤Ent├───┴───┘   └───────┘
      *                     └───┤SAS│       │Bsp├───┘
      *                         └───┘       └───┘
      */
    [RAISE] = LAYOUT(
        KC_ESC,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    KC_PSLS, KC_P7,   KC_P8,   KC_P9,  XXXXXXX, KC_BSPC,
        KC_TAB,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    KC_PAST, KC_P4,   KC_P5,   KC_P6,  S(KC_9), S(KC_0),
        KC_CAPS_LOCK, KC_PGUP, XXXXXXX, KC_UP,   XXXXXXX, KC_HOME, KC_INS,   XXXXXXX, KC_PMNS, KC_P1,   KC_P2,   KC_P3,  XXXXXXX, XXXXXXX,
        KC_LSFT,      KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  KC_DEL,   XXXXXXX, KC_PPLS, KC_EQL,  KC_COMM, KC_DOT, XXXXXXX, XXXXXXX,
        _______,                      _______, _______, _______,  _______,   _______, _______, _______, _______,                  _______
    )
};
